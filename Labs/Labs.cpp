#include "pch.h"

#include "TitleForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
int Main()
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    (gcnew Labs::TitleForm())->Show();

    Application::Run();

    return 0;
}