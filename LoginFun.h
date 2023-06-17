#pragma once
#include "user.h"
#pragma once
#include"LoginForm.h"
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;




ref class Login
{


    void AuthenticateUser(String^ email, String^ password);
       
    
};
