#include "pch.h"

#include "TitleForm.h"
#include "Task1AssignmentForm.h"
#include "Task2AssignmentForm.h"

using namespace Labs;

void TitleForm::Task1Button_Click(Object^ sender, EventArgs^ e)
{
    (gcnew Task1AssignmentForm())->Show();
    this->Close();
}

void TitleForm::Task2Button_Click(Object^ sender, EventArgs^ e)
{
    (gcnew Task2AssignmentForm())->Show();
    this->Close();
}

void TitleForm::TitleForm_FormClosed(Object^ sender, FormClosedEventArgs^ e)
{
    if (Application::OpenForms->Count == 0)
        Application::Exit();
}
