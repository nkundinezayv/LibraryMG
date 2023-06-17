#include "LoginForm.h"
#include "MainForm.h"
#include "LibraryPage.h"
using namespace LibraryMG;



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
   
        LibraryMG::MainForm mainForm(user);
        Application::Run(%mainForm);
       
    }
    else {

    }
    
    return 0;
}