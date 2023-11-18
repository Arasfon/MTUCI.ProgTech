#include "pch.h"

#include "Task7AssignmentForm.h"
#include "Task7SolutionForm.h"
#include "TitleForm.h"

using namespace Labs;

void Task7AssignmentForm::GoToSolutionButton_Click(Object^ sender, EventArgs^ e)
{
    (gcnew Task7SolutionForm())->Show();
    this->Close();
}


void Task7AssignmentForm::GoToTitleButton_Click(Object^ sender, EventArgs^ e)
{
    (gcnew TitleForm())->Show();
    this->Close();
}

void Task7AssignmentForm::Task7AssignmentForm_FormClosed(Object^ sender, FormClosedEventArgs^ e)
{
    if (Application::OpenForms->Count == 0)
        Application::Exit();
}
