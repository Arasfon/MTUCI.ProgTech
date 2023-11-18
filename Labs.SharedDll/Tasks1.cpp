#include "Tasks1.h"

using namespace System;
using namespace System::Globalization;
using namespace System::IO;
using namespace System::Data::OleDb;
using namespace System::Runtime::InteropServices;

using namespace Microsoft::Office::Interop;

using namespace Labs::SharedDll;

// Лабораторная работа №1

bool Tasks1::ReadDouble(TextBox^ textBox, double% value)
{
    return Double::TryParse(textBox->Text, value);
}

void Tasks1::WriteDouble(double value, TextBox^ textBox)
{
    textBox->Text = value.ToString(L"F3");
}

double Tasks1::PentagonArea(const double x1, const double y1,
                   const double x2, const double y2,
                   const double x3, const double y3,
                   const double x4, const double y4,
                   const double x5, const double y5)
{
    return TriangleArea(x1, y1, x2, y2, x3, y3) +
        TriangleArea(x1, y1, x3, y3, x4, y4) +
        TriangleArea(x1, y1, x4, y4, x5, y5);
}

double Tasks1::TriangleArea(const double x1, const double y1, const double x2, const double y2, const double x3, const double y3)
{
    return 1.0 / 2 * Math::Abs((x2 - x1) * (y3 - y1) - (x3 - x1) * (y2 - y1));
}

// Лабораторная работа №2

double* Tasks1::GenerateArray(const int length)
{
    Random^ random = gcnew Random();

    double* arr = new double[length];

    for (int i = 0; i < length; i++)
        arr[i] = random->NextDouble() * 2000 - 1000;

    return arr;
}

void Tasks1::OutputArray(DataGridView^ dataGridView, double* arr, const int length)
{
    dataGridView->RowCount = 2;
    dataGridView->ColumnCount = length;

    for (int i = 0; i < length; i++)
    {
        dataGridView->Rows[0]->Cells[i]->Value = String::Format(L"[{0}]", i);
        dataGridView->Rows[1]->Cells[i]->Value = arr[i].ToString(L"F3");
    }
}

void Tasks1::OutputArray(DataGridView^ dataGridView, int* arr, const int length)
{
    dataGridView->RowCount = 2;
    dataGridView->ColumnCount = length;

    for (int i = 0; i < length; i++)
    {
        dataGridView->Rows[0]->Cells[i]->Value = String::Format(L"[{0}]", i);
        dataGridView->Rows[1]->Cells[i]->Value = arr[i].ToString();
    }
}

double* Tasks1::TransformArray(const double* arr, const int length, const double maxPositive, int% transformedLength)
{
    double* newArr = new double[length];
    transformedLength = 0;

    for (int i = 0; i < length; i++)
    {
        if (Math::Abs(arr[i]) < maxPositive)
            newArr[transformedLength++] = arr[i];
    }

    return newArr;
}

double Tasks1::GetMaxPositive(const double* arr, const int n)
{
    double maxPositive = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maxPositive)
            maxPositive = arr[i];
    }

    return maxPositive;
}

// Лабораторная работа №3

void Tasks1::CreateAccessDbFile()
{
    if (File::Exists(L"1dim_array.accdb"))
        File::Delete(L"1dim_array.accdb");

    ADOX::CatalogClass^ catalog = gcnew ADOX::CatalogClass();
    catalog->Create(ConnectionString);

    Marshal::FinalReleaseComObject(catalog->ActiveConnection);
    Marshal::FinalReleaseComObject(catalog);
}

void Tasks1::CreateAccessDbTables()
{
    OleDbConnection connection(ConnectionString);
    connection.Open();

    OleDbCommand command(LR"(
        CREATE TABLE [SourceArray] (
        [Id] LONG NOT NULL PRIMARY KEY,
        [Value] DOUBLE NOT NULL);)", %connection);

    command.ExecuteNonQuery();

    command.CommandText = LR"(
        CREATE TABLE [TransformedArray] (
        [Id] LONG NOT NULL PRIMARY KEY,
        [Value] DOUBLE NOT NULL);)";

    command.ExecuteNonQuery();
}

void Tasks1::FillAccessDb(const double* sourceArray, const double* transformedArray, const int sourceArrayLength, const int transformedArrayLength)
{
    if (!File::Exists(L"1dim_array.accdb"))
        return;

    OleDbConnection connection(ConnectionString);
    connection.Open();

    OleDbCommand command(String::Empty, %connection);

    command.CommandText = L"DELETE FROM [SourceArray]";
    command.ExecuteNonQuery();

    for (int i = 0; i < sourceArrayLength; ++i)
    {
        command.CommandText = String::Format(LR"(
            INSERT INTO [SourceArray]
            ([Id], [Value]) VALUES
            ({0}, {1});)", i, sourceArray[i].ToString(CultureInfo::InvariantCulture));

        command.ExecuteNonQuery();
    }

    command.CommandText = L"DELETE FROM [TransformedArray]";
    command.ExecuteNonQuery();

    for (int i = 0; i < transformedArrayLength; ++i)
    {
        command.CommandText = String::Format(LR"(
            INSERT INTO [TransformedArray]
            ([Id], [Value]) VALUES
            ({0}, {1});)", i, transformedArray[i].ToString(CultureInfo::InvariantCulture));

        command.ExecuteNonQuery();
    }
}

// Лабораторная работа №4

void Tasks1::FillWordDocument(const double* sourceArray, const double* transformedArray, const int sourceArrayLength, const int transformedArrayLength)
{
    Object^ typeMissing = Type::Missing;
    Object^ wdWord9TableBehavior = Word::WdDefaultTableBehavior::wdWord9TableBehavior;
    Object^ wdAutoFitContent = Word::WdAutoFitBehavior::wdAutoFitContent;
    Object^ wdGoToLine = Word::WdGoToItem::wdGoToLine;
    Object^ wdGoToLast = Word::WdGoToDirection::wdGoToLast;

    auto wordApplication = gcnew Word::ApplicationClass();
    auto wordDocument = wordApplication->Documents->Add(typeMissing, typeMissing, typeMissing, typeMissing);

    wordDocument->PageSetup->Orientation = Word::WdOrientation::wdOrientLandscape;

    wordDocument->PageSetup->TopMargin = wordApplication->CentimetersToPoints(1.25);
    wordDocument->PageSetup->RightMargin = wordApplication->CentimetersToPoints(1.25);
    wordDocument->PageSetup->BottomMargin = wordApplication->CentimetersToPoints(1.25);
    wordDocument->PageSetup->LeftMargin = wordApplication->CentimetersToPoints(1.25);

    wordApplication->Selection->TypeText(L"Исходный массив:");
    wordApplication->Selection->TypeParagraph();

    auto wordTable = wordDocument->Tables->Add(wordApplication->Selection->Range, 2, sourceArrayLength, wdWord9TableBehavior, wdAutoFitContent);

    for (int i = 0; i < sourceArrayLength; ++i)
    {
        wordTable->Cell(1, i + 1)->Range->InsertAfter(String::Format(L"[{0}]", i));
        wordTable->Cell(2, i + 1)->Range->InsertAfter(sourceArray[i].ToString(L"F3"));
    }

    wordApplication->Selection->GoTo(wdGoToLine, wdGoToLast, typeMissing, typeMissing);
    wordApplication->Selection->TypeParagraph();
    wordApplication->Selection->TypeText(L"Трансформированный массив:");
    wordApplication->Selection->TypeParagraph();

    wordTable = wordDocument->Tables->Add(wordApplication->Selection->Range, 2, transformedArrayLength, wdWord9TableBehavior, wdAutoFitContent);

    for (int i = 0; i < transformedArrayLength; ++i)
    {
        wordTable->Cell(1, i + 1)->Range->InsertAfter(String::Format(L"[{0}]", i));
        wordTable->Cell(2, i + 1)->Range->InsertAfter(transformedArray[i].ToString(L"F3"));
    }

    wordDocument->Content->Font->Name = L"Times New Roman";
    wordDocument->Content->Font->Size = 12;

    wordApplication->Selection->GoTo(wdGoToLine, wdGoToLast, typeMissing, typeMissing);

    Object^ filename = Path::Combine(Directory::GetCurrentDirectory(), L"1dim_array.docx");
    wordDocument->SaveAs(filename, typeMissing,
        typeMissing, typeMissing, typeMissing,
        typeMissing, typeMissing, typeMissing,
        typeMissing, typeMissing, typeMissing,
        typeMissing, typeMissing, typeMissing,
        typeMissing, typeMissing);

    wordApplication->Visible = true;
}

// Лабораторная работа №5

void Tasks1::RemoveArrayItem(const double item, double* arr, int& arrayLength)
{
    int offset = 0;

    for (int i = 0; i < arrayLength; i++)
    {
        if (offset == 0 && Math::Round(arr[i], 3) == item)
            offset++;

        arr[i] = arr[i + offset];
    }

    arrayLength -= offset;
}

void Tasks1::OptimizedBubbleSort(double* arr, const int arrayLength)
{
    for (int i = 0; i < arrayLength; i++)
    {
        bool hasChanged = false;

        for (int j = 0; j < arrayLength - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                const double temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

                hasChanged = true;
            }
        }

        if (!hasChanged)
            break;
    }
}

// Лабораторная работа №6

void Tasks1::FillExcelBook(const double* sourceArray, const double* transformedArray, const int sourceArrayLength, const int transformedArrayLength)
{
    Object^ typeMissing = Type::Missing;

    auto excelApplication = gcnew Excel::ApplicationClass();
    auto excelWorkbook = excelApplication->Workbooks->Add(typeMissing);

    excelApplication->Cells[1, 1] = L"Исходный массив";
    for (int i = 0; i < sourceArrayLength; i++)
    {
        excelApplication->Cells[2, i + 1] = String::Format(L"[{0}]", i);
        excelApplication->Cells[3, i + 1] = sourceArray[i].ToString(L"F3");
    }

    excelApplication->Cells[5, 1] = L"Трансформированный массив";
    for (int i = 0; i < transformedArrayLength; i++)
    {
        excelApplication->Cells[6, i + 1] = String::Format(L"[{0}]", i);
        excelApplication->Cells[7, i + 1] = transformedArray[i].ToString(L"F3");
    }

    // Interop hell

    auto excelActiveSheet = safe_cast<Excel::Worksheet^>(excelWorkbook->ActiveSheet);

    // Macro code

    #pragma region "Format" macro code

        String^ formatMacroVbaCode = String::Format(LR"(
Private Sub FormatButton_Click()
Application.ScreenUpdating = False
Range("A2", ActiveSheet.Cells(3, {0})).Select
With Selection
    .HorizontalAlignment = xlCenter
    .VerticalAlignment = xlBottom
    .WrapText = False
    .Orientation = 0
    .AddIndent = False
    .IndentLevel = 0
    .ShrinkToFit = False
    .ReadingOrder = xlContext
    .MergeCells = False
End With
Range("A6", ActiveSheet.Cells(7, {1})).Select
With Selection
    .HorizontalAlignment = xlCenter
    .VerticalAlignment = xlBottom
    .WrapText = False
    .Orientation = 0
    .AddIndent = False
    .IndentLevel = 0
    .ShrinkToFit = False
    .ReadingOrder = xlContext
    .MergeCells = False
End With
Range("A1", ActiveSheet.Cells(1, {0})).Select
With Selection
    .HorizontalAlignment = xlCenter
    .VerticalAlignment = xlBottom
    .WrapText = False
    .Orientation = 0
    .AddIndent = False
    .IndentLevel = 0
    .ShrinkToFit = False
    .ReadingOrder = xlContext
    .MergeCells = False
End With
Selection.Merge
Range("A5", ActiveSheet.Cells(5, {1})).Select
With Selection
    .HorizontalAlignment = xlCenter
    .VerticalAlignment = xlBottom
    .WrapText = False
    .Orientation = 0
    .AddIndent = False
    .IndentLevel = 0
    .ShrinkToFit = False
    .ReadingOrder = xlContext
    .MergeCells = False
End With
Selection.Merge
Range("A1", ActiveSheet.Cells(3, {0})).Select
Selection.Borders(xlDiagonalDown).LineStyle = xlNone
Selection.Borders(xlDiagonalUp).LineStyle = xlNone
With Selection.Borders(xlEdgeLeft)
    .LineStyle = xlContinuous
    .ColorIndex = 0
    .TintAndShade = 0
    .Weight = xlThin
End With
With Selection.Borders(xlEdgeTop)
    .LineStyle = xlContinuous
    .ColorIndex = 0
    .TintAndShade = 0
    .Weight = xlThin
End With
With Selection.Borders(xlEdgeBottom)
    .LineStyle = xlContinuous
    .ColorIndex = 0
    .TintAndShade = 0
    .Weight = xlThin
End With
With Selection.Borders(xlEdgeRight)
    .LineStyle = xlContinuous
    .ColorIndex = 0
    .TintAndShade = 0
    .Weight = xlThin
End With
With Selection.Borders(xlInsideVertical)
    .LineStyle = xlContinuous
    .ColorIndex = 0
    .TintAndShade = 0
    .Weight = xlThin
End With
With Selection.Borders(xlInsideHorizontal)
    .LineStyle = xlContinuous
    .ColorIndex = 0
    .TintAndShade = 0
    .Weight = xlThin
End With
Range("A5", ActiveSheet.Cells(7, {1})).Select
Selection.Borders(xlDiagonalDown).LineStyle = xlNone
Selection.Borders(xlDiagonalUp).LineStyle = xlNone
With Selection.Borders(xlEdgeLeft)
    .LineStyle = xlContinuous
    .ColorIndex = 0
    .TintAndShade = 0
    .Weight = xlThin
End With
With Selection.Borders(xlEdgeTop)
    .LineStyle = xlContinuous
    .ColorIndex = 0
    .TintAndShade = 0
    .Weight = xlThin
End With
With Selection.Borders(xlEdgeBottom)
    .LineStyle = xlContinuous
    .ColorIndex = 0
    .TintAndShade = 0
    .Weight = xlThin
End With
With Selection.Borders(xlEdgeRight)
    .LineStyle = xlContinuous
    .ColorIndex = 0
    .TintAndShade = 0
    .Weight = xlThin
End With
With Selection.Borders(xlInsideVertical)
    .LineStyle = xlContinuous
    .ColorIndex = 0
    .TintAndShade = 0
    .Weight = xlThin
End With
With Selection.Borders(xlInsideHorizontal)
    .LineStyle = xlContinuous
    .ColorIndex = 0
    .TintAndShade = 0
    .Weight = xlThin
End With
Range("A1", ActiveSheet.Cells(3, {0})).Select
Selection.Borders(xlDiagonalDown).LineStyle = xlNone
Selection.Borders(xlDiagonalUp).LineStyle = xlNone
With Selection.Borders(xlEdgeLeft)
    .LineStyle = xlContinuous
    .ColorIndex = 0
    .TintAndShade = 0
    .Weight = xlMedium
End With
With Selection.Borders(xlEdgeTop)
    .LineStyle = xlContinuous
    .ColorIndex = 0
    .TintAndShade = 0
    .Weight = xlMedium
End With
With Selection.Borders(xlEdgeBottom)
    .LineStyle = xlContinuous
    .ColorIndex = 0
    .TintAndShade = 0
    .Weight = xlMedium
End With
With Selection.Borders(xlEdgeRight)
    .LineStyle = xlContinuous
    .ColorIndex = 0
    .TintAndShade = 0
    .Weight = xlMedium
End With
With Selection.Borders(xlInsideVertical)
    .LineStyle = xlContinuous
    .ColorIndex = 0
    .TintAndShade = 0
    .Weight = xlThin
End With
With Selection.Borders(xlInsideHorizontal)
    .LineStyle = xlContinuous
    .ColorIndex = 0
    .TintAndShade = 0
    .Weight = xlThin
End With
Range("A5", ActiveSheet.Cells(7, {1})).Select
Selection.Borders(xlDiagonalDown).LineStyle = xlNone
Selection.Borders(xlDiagonalUp).LineStyle = xlNone
With Selection.Borders(xlEdgeLeft)
    .LineStyle = xlContinuous
    .ColorIndex = 0
    .TintAndShade = 0
    .Weight = xlMedium
End With
With Selection.Borders(xlEdgeTop)
    .LineStyle = xlContinuous
    .ColorIndex = 0
    .TintAndShade = 0
    .Weight = xlMedium
End With
With Selection.Borders(xlEdgeBottom)
    .LineStyle = xlContinuous
    .ColorIndex = 0
    .TintAndShade = 0
    .Weight = xlMedium
End With
With Selection.Borders(xlEdgeRight)
    .LineStyle = xlContinuous
    .ColorIndex = 0
    .TintAndShade = 0
    .Weight = xlMedium
End With
With Selection.Borders(xlInsideVertical)
    .LineStyle = xlContinuous
    .ColorIndex = 0
    .TintAndShade = 0
    .Weight = xlThin
End With
With Selection.Borders(xlInsideHorizontal)
    .LineStyle = xlContinuous
    .ColorIndex = 0
    .TintAndShade = 0
    .Weight = xlThin
End With
Range("A1").Select
Selection.Font.Bold = True
With Selection.Font
    .Name = "Calibri"
    .Size = 12
    .Strikethrough = False
    .Superscript = False
    .Subscript = False
    .OutlineFont = False
    .Shadow = False
    .Underline = xlUnderlineStyleNone
    .ThemeColor = xlThemeColorLight1
    .TintAndShade = 0
    .ThemeFont = xlThemeFontMinor
End With
Range("A5").Select
Selection.Font.Bold = True
With Selection.Font
    .Name = "Calibri"
    .Size = 12
    .Strikethrough = False
    .Superscript = False
    .Subscript = False
    .OutlineFont = False
    .Shadow = False
    .Underline = xlUnderlineStyleNone
    .ThemeColor = xlThemeColorLight1
    .TintAndShade = 0
    .ThemeFont = xlThemeFontMinor
End With
Range("A1").Select
Application.ScreenUpdating = True
End Sub
)", sourceArrayLength, transformedArrayLength);

    #pragma endregion

    #pragma region "Clear format" macro code
    
    String^ clearFormatVbaCode = String::Format(LR"(
Private Sub ClearFormatButton_Click()
Application.ScreenUpdating = False
Range("A1", ActiveSheet.Cells(7, {0})).Select
Selection.ClearFormats
Range("A1").Select
Application.ScreenUpdating = True
End Sub
)", sourceArrayLength);
    
    #pragma endregion

    auto vbaModule = excelWorkbook->VBProject->VBComponents->Add(VBIDE::vbext_ComponentType::vbext_ct_StdModule);
    vbaModule->CodeModule->InsertLines(vbaModule->CodeModule->CountOfLines + 1, formatMacroVbaCode);
    vbaModule->CodeModule->InsertLines(vbaModule->CodeModule->CountOfLines + 1, clearFormatVbaCode);

    // Macro button

    Excel::Range^ buttonRange = excelActiveSheet->Range[excelActiveSheet->Cells[10, 1], excelActiveSheet->Cells[11, 4]];

    auto sheetButtons = safe_cast<Excel::Buttons^>(excelActiveSheet->Buttons(typeMissing));
    auto button = sheetButtons->Add(safe_cast<double>(buttonRange->Left),
        safe_cast<double>(buttonRange->Top),
        safe_cast<double>(buttonRange->Width),
        safe_cast<double>(buttonRange->Height));
    button->Name = L"FormatButton";
    button->Caption = L"Форматировать таблицу";
    button->OnAction = L"FormatButton_Click";

    buttonRange = excelActiveSheet->Range[excelActiveSheet->Cells[10, 6], excelActiveSheet->Cells[11, 9]];

    button = sheetButtons->Add(safe_cast<double>(buttonRange->Left),
        safe_cast<double>(buttonRange->Top),
        safe_cast<double>(buttonRange->Width),
        safe_cast<double>(buttonRange->Height));
    button->Name = L"ClearFormatButton";
    button->Caption = L"Очистить форматирование";
    button->OnAction = L"ClearFormatButton_Click";

    // Save file

    Object^ filename = Path::Combine(Directory::GetCurrentDirectory(), L"1dim_array.xlsm");
    excelWorkbook->SaveAs(filename, Excel::XlFileFormat::xlOpenXMLWorkbookMacroEnabled,
        typeMissing, typeMissing, typeMissing,
        typeMissing, Excel::XlSaveAsAccessMode::xlNoChange, typeMissing,
        typeMissing, typeMissing, typeMissing,
        typeMissing);

    excelApplication->Visible = true;
}
