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
    LibraryMG::LoginForm loginForm;

    loginForm.ShowDialog();
    User^ user = loginForm.user;

    if (user != nullptr) {
        LibraryMG::MainForm mainForm;
        Application::Run(%mainForm);
    }
    else {

    }
    
    return 0;
}