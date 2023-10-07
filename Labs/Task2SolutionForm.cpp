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

    if (!Int32::TryParse(Interaction::InputBox(L"Введите количество элементов в массиве", L"Ввод", L"10", -1, -1), n))
    {
        MessageBox::Show(L"Введите целое число", L"Ошибка",
            MessageBoxButtons::OK, MessageBoxIcon::Error);
        return;
    }

    double* arr = Tasks::GenerateArray(n);
    Tasks::OutputArray(SourceDataGridView, arr, n);

    const double maxPositive = Tasks::GetMaxPositive(arr, n);

    if (maxPositive == 0)
    {
        MessageBox::Show(L"В массиве нет положительных чисел", L"Ошибка",
            MessageBoxButtons::OK, MessageBoxIcon::Error);
        MaxPositiveLabel->Text = L"";
        ResultDataGridView->RowCount = 0;
        return;
    }

    MaxPositiveLabel->Text = String::Format(L"Макс. положительное число: {0:F3}", maxPositive);

    double* trasformedArr = Tasks::TransformArray(arr, n, maxPositive, m);
    Tasks::OutputArray(ResultDataGridView, trasformedArr, m);

    Tasks::FillAccessDb(arr, trasformedArr, n, m);
    Tasks::FillWordDocument(arr, trasformedArr, n, m);

    delete[] arr;
    delete[] trasformedArr;
}

void Task2SolutionForm::CreateDbButton_Click(Object^ sender, EventArgs^ e)
{
    try
    {
        Tasks::CreateAccessDbFile();
        Tasks::CreateAccessDbTables();
        MessageBox::Show(L"База данных создана и инициализирована.", L"Успешное создание базы данных", MessageBoxButtons::OK, MessageBoxIcon::Information);
    }
    catch (Exception^ ex)
    {
        MessageBox::Show(L"Не удалось создать базу данных Microsoft Access:\n" + ex->Message, L"Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
}

void Task2SolutionForm::Task2SolutionForm_FormClosed(Object^ sender, FormClosedEventArgs^ e)
{
    if (Application::OpenForms->Count == 0)
        Application::Exit();
}
