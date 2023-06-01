#include "LoginForm.h"
#include "MainForm.h"

using namespace System;
using namespace std;
using namespace System::Windows::Forms;
using namespace System::Net;




[STAThread]
int main()
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew LibraryMG::LoginForm);
    return 0;
}