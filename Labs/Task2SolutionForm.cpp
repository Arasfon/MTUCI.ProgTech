#include "pch.h"

#include "Task2SolutionForm.h"
#include "TitleForm.h"

using namespace System::IO;
using namespace Microsoft::VisualBasic;
using namespace Labs;
using namespace Labs::SharedDll;

void Task2SolutionForm::GoToTitleButton_Click(Object^ sender, EventArgs^ e)
{
    (gcnew TitleForm())->Show();
    this->Close();
}

void Task2SolutionForm::CalculateButton_Click(Object^ sender, EventArgs^ e)
{
    int n, m;

    if (!Int32::TryParse(Interaction::InputBox("Введите количество элементов в массиве", "Ввод", "10", -1, -1), n))
    {
        MessageBox::Show("Введите целое число", "Ошибка",
            MessageBoxButtons::OK, MessageBoxIcon::Error);
        return;
    }

    double* arr = Tasks::GenerateArray(n);
    Tasks::OutputArray(SourceDataGridView, arr, n);

    const double maxPositive = Tasks::GetMaxPositive(arr, n);

    if (maxPositive == 0)
    {
        MessageBox::Show("В массиве нет положительных чисел", "Ошибка",
            MessageBoxButtons::OK, MessageBoxIcon::Error);
        MaxPositiveLabel->Text = "";
        ResultDataGridView->RowCount = 0;
        return;
    }

    MaxPositiveLabel->Text = String::Format("Макс. положительное число: {0:F3}", maxPositive);

    double* trasformedArr = Tasks::TransformArray(arr, n, maxPositive, m);
    Tasks::OutputArray(ResultDataGridView, trasformedArr, m);

    Tasks::FillAccessDb(arr, trasformedArr, n, m);

    delete[] arr;
    delete[] trasformedArr;
}

void Task2SolutionForm::CreateDbButton_Click(Object^ sender, EventArgs^ e)
{
    try
    {
        Tasks::CreateAccessDbFile();
        Tasks::CreateAccessDbTables();
    }
    catch (Exception^ ex)
    {
        MessageBox::Show("Не удалось создать базу данных Microsoft Access:\n" + ex->Message, "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
}

void Task2SolutionForm::Task2SolutionForm_FormClosed(Object^ sender, FormClosedEventArgs^ e)
{
    if (Application::OpenForms->Count == 0)
        Application::Exit();
}
