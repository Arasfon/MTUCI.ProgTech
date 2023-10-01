#include "pch.h"

#include "Task2AssignmentForm.h"
#include "Task2SolutionForm.h"
#include "TitleForm.h"

using namespace Labs;

void Task2AssignmentForm::GoToTitleButton_Click(Object^ sender, EventArgs^ e)
{
    (gcnew TitleForm())->Show();
    this->Close();
}

void Task2AssignmentForm::GoToSolutionButton_Click(Object^ sender, EventArgs^ e)
{
    (gcnew Task2SolutionForm())->Show();
    this->Close();
}

void Task2AssignmentForm::Task2AssignmentForm_FormClosed(Object^ sender, FormClosedEventArgs^ e)
{
    if (Application::OpenForms->Count == 0)
        Application::Exit();
}
