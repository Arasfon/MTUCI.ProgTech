#include "pch.h"
#include "Task7SolutionForm.h"

#include "TitleForm.h"

using namespace Microsoft::VisualBasic;

using namespace Labs;
using namespace Labs::SharedDll;

void Task7SolutionForm::GoToTitleButton_Click(Object^ sender, EventArgs^ e)
{
    (gcnew TitleForm())->Show();
    this->Close();
}

void Task7SolutionForm::CalculateButton_Click(Object^ sender, EventArgs^ e)
{
    int sideLength;

    if (!Int32::TryParse(Interaction::InputBox(L"Введите длину стороны квадратной матрицы", L"Ввод", L"10", -1, -1), sideLength))
    {
        MessageBox::Show(L"Введите целое число", L"Ошибка",
            MessageBoxButtons::OK, MessageBoxIcon::Error);
        return;
    }

    int** matrix = Tasks2::GenerateMatrix(sideLength);

    Tasks2::OutputMatrix(SourceDataGridView, matrix, sideLength);

    int endsWith3Count, endsWith5UnderMinorDiagonalCount;
    Tasks2::EndsWith3AndWith5UnderMinorDiagonalCount(matrix, sideLength, endsWith3Count, endsWith5UnderMinorDiagonalCount);

    IntermediateValuesLabel->Text = String::Format("Промежуточные значения: заканчиваются на 3 — {0}, на 5 и ниже побочной диагонали — {1}", endsWith3Count, endsWith5UnderMinorDiagonalCount);

    int arrayLength;
    int* arrayAboveThreshold = Tasks2::CreateArrayAboveThreshold(matrix, sideLength, endsWith3Count + endsWith5UnderMinorDiagonalCount, arrayLength);

    Tasks1::OutputArray(ResultArrayDataGridView, arrayAboveThreshold, arrayLength);

    Tasks2::DeleteMatrix(matrix, sideLength);
    delete[] arrayAboveThreshold;
}

void Task7SolutionForm::Task7SolutionForm_FormClosed(Object^ sender, FormClosedEventArgs^ e)
{
    if (Application::OpenForms->Count == 0)
        Application::Exit();
}

void Task7SolutionForm::SourceDataGridView_ColumnAdded(Object^ sender, DataGridViewColumnEventArgs^ e)
{
    SourceDataGridView->Columns[e->Column->Index]->SortMode = DataGridViewColumnSortMode::NotSortable;
}
