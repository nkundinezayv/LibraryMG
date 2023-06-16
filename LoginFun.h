#pragma once
#include "user.h"
#pragma once

ref class Login
{
 public:
    User^ user = nullptr ;

    void AuthenticateUser(String^ email, String^ password);
};
