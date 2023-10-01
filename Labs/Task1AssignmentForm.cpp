#include "pch.h"

#include "Task1AssignmentForm.h"
#include "Task1SolutionForm.h"
#include "TitleForm.h"

using namespace Labs;

void Task1AssignmentForm::GoToTitleButton_Click(Object^ sender, EventArgs^ e)
{
    (gcnew TitleForm())->Show();
    this->Close();
}

void Task1AssignmentForm::GoToSolutionButton_Click(Object^ sender, EventArgs^ e)
{
    (gcnew Task1SolutionForm())->Show();
    this->Close();
}

void Task1AssignmentForm::Task1AssignmentForm_FormClosed(Object^ sender, FormClosedEventArgs^ e)
{
    if (Application::OpenForms->Count == 0)
        Application::Exit();
}
