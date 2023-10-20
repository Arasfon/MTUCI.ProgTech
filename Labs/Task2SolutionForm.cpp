#include "pch.h"

#include <algorithm>

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

    delete[] trasformedArr;

    // Лабораторная работа №5

    double itemToRemove;

    if (!Double::TryParse(Interaction::InputBox(L"Введите элемент, который следует удалить", L"Ввод", L"10", -1, -1), itemToRemove))
    {
        MessageBox::Show(L"Введите число с плавающей запятой", L"Ошибка",
            MessageBoxButtons::OK, MessageBoxIcon::Error);
        RemovedArrayItemDataGridView->RowCount = 0;
        SortedArrayDataGridView->RowCount = 0;
        return;
    }

    double* removedItemArray = new double[n];
    std::copy(&arr[0], &arr[n], removedItemArray);
    int removedItemArrayLength = n;

    Tasks::RemoveArrayItem(itemToRemove, removedItemArray, removedItemArrayLength);
    Tasks::OutputArray(RemovedArrayItemDataGridView, removedItemArray, removedItemArrayLength);

    delete[] removedItemArray;

    Tasks::OptimizedBubbleSort(arr, n);
    Tasks::OutputArray(SortedArrayDataGridView, arr, n);

    delete[] arr;
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
