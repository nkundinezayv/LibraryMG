#include "LoginForm.h"
#include "MainForm.h"
#include "LoginFun.h"
#include <iostream>
#include <iostream>

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
    Login^ login = gcnew Login(); // Create an instance of the Login class

    loginForm.ShowDialog();
    User^ user = login->user;
    if (login->user != nullptr) {
        LibraryMG::MainForm mainForm(user);
        Application::Run(% mainForm);
    }
    else {
        // Handle the case when the user is null (authentication failed)
        MessageBox::Show("Authentication failed", "Error", MessageBoxButtons::OK);
    }

    return 0;
}