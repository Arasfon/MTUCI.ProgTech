#include "pch.h"

#include "Task1SolutionForm.h"
#include "TitleForm.h"

using namespace Labs;
using namespace Labs::SharedDll;

void Task1SolutionForm::GoToTitleButton_Click(Object^ sender, EventArgs^ e)
{
    (gcnew TitleForm())->Show();
    this->Close();
}

void Task1SolutionForm::CalculateButton_Click(Object^ sender, EventArgs^ e)
{
    double x1, y1,
        x2, y2,
        x3, y3,
        x4, y4,
        x5, y5;

    if (!Tasks1::ReadDouble(X1TextBox, x1) ||
        !Tasks1::ReadDouble(Y1TextBox, y1) ||
        !Tasks1::ReadDouble(X2TextBox, x2) ||
        !Tasks1::ReadDouble(Y2TextBox, y2) ||
        !Tasks1::ReadDouble(X3TextBox, x3) ||
        !Tasks1::ReadDouble(Y3TextBox, y3) ||
        !Tasks1::ReadDouble(X4TextBox, x4) ||
        !Tasks1::ReadDouble(Y4TextBox, y4) ||
        !Tasks1::ReadDouble(X5TextBox, x5) ||
        !Tasks1::ReadDouble(Y5TextBox, y5))
    {
        MessageBox::Show(L"В поля ввода допустимо вводить только числа.", L"Ошибка",
            MessageBoxButtons::OK, MessageBoxIcon::Error);
        return;
    }

    const double result = Tasks1::PentagonArea(x1, y1, x2, y2, x3, y3, x4, y4, x5, y5);
    Tasks1::WriteDouble(result, ResultTextBox);
}

void Task1SolutionForm::Task1SolutionForm_FormClosed(Object^ sender, FormClosedEventArgs^ e)
{
    if (Application::OpenForms->Count == 0)
        Application::Exit();
}
