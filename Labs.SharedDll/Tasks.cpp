#include "Tasks.h"

using namespace System;
using namespace System::IO;
using namespace System::Data::OleDb;
using namespace System::Runtime::InteropServices;

using namespace Labs::SharedDll;

// Лабораторная работа №1

bool Tasks::ReadDouble(TextBox^ textBox, double% value)
{
    return Double::TryParse(textBox->Text, value);
}

void Tasks::WriteDouble(double value, TextBox^ textBox)
{
    textBox->Text = value.ToString(L"F3");
}

double Tasks::PentagonArea(const double x1, const double y1,
                   const double x2, const double y2,
                   const double x3, const double y3,
                   const double x4, const double y4,
                   const double x5, const double y5)
{
    return TriangleArea(x1, y1, x2, y2, x3, y3) +
        TriangleArea(x1, y1, x3, y3, x4, y4) +
        TriangleArea(x1, y1, x4, y4, x5, y5);
}

double Tasks::TriangleArea(const double x1, const double y1, const double x2, const double y2, const double x3, const double y3)
{
    return 1.0 / 2 * Math::Abs((x2 - x1) * (y3 - y1) - (x3 - x1) * (y2 - y1));
}

// Лабораторная работа №2

double* Tasks::GenerateArray(const int length)
{
    Random^ random = gcnew Random();

    double* arr = new double[length];

    for (int i = 0; i < length; i++)
        arr[i] = random->NextDouble() * 2000 - 1000;

    return arr;
}

void Tasks::OutputArray(DataGridView^ dataGridView, double* arr, const int length)
{
    dataGridView->RowCount = 2;
    dataGridView->ColumnCount = length;

    for (int i = 0; i < length; i++)
    {
        dataGridView->Rows[0]->Cells[i]->Value = String::Format(L"[{0}]", i);
        dataGridView->Rows[1]->Cells[i]->Value = arr[i].ToString(L"F3");
    }
}

double* Tasks::TransformArray(const double* arr, const int length, const double maxPositive, int% transformedLength)
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

double Tasks::GetMaxPositive(const double* arr, const int n)
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

void Tasks::CreateAccessDbFile()
{
    if (File::Exists(L"1dim_array.accdb"))
        File::Delete(L"1dim_array.accdb");

    ADOX::CatalogClass^ catalog = gcnew ADOX::CatalogClass();
    catalog->Create(ConnectionString);

    Marshal::FinalReleaseComObject(catalog->ActiveConnection);
    Marshal::FinalReleaseComObject(catalog);
}

void Tasks::CreateAccessDbTables()
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

void Tasks::FillAccessDb(const double* sourceArray, const double* transformedArray, int sourceArrayLength, int transformedArrayLength)
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
            ({0}, {1});)", i, sourceArray[i]);

        command.ExecuteNonQuery();
    }

    command.CommandText = L"DELETE FROM [TransformedArray]";
    command.ExecuteNonQuery();

    for (int i = 0; i < transformedArrayLength; ++i)
    {
        command.CommandText = String::Format(LR"(
            INSERT INTO [TransformedArray]
            ([Id], [Value]) VALUES
            ({0}, {1});)", i, transformedArray[i]);

        command.ExecuteNonQuery();
    }
}
