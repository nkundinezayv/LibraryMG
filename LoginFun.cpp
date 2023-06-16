

using namespace System::Windows::Forms;
using namespace System;
using namespace System::Data::SqlClient;
#include "LoginFun.h"
#include "user.h"
#include "Db_CONN.h"
#include "LoginForm.h"
#include "MainForm.h"
#include <iostream>


void Login::AuthenticateUser(String^ email, String^ password)
    {
        if (email->Length == 0 || password->Length == 0) {
            MessageBox::Show("Please enter email and password",
                "Email or Password Empty", MessageBoxButtons::OK);
            return;
        }

        try {
            SqlConnection^ sqlConn = Db_CONN::GetSqlConnection();
            sqlConn->Open();

            String^ sqlQuery = "SELECT * FROM users WHERE email=@email AND password=@pwd";
            SqlCommand^ command = gcnew SqlCommand(sqlQuery, sqlConn);
            command->Parameters->AddWithValue("@email", email);
            command->Parameters->AddWithValue("@pwd", password);

            SqlDataReader^ reader = command->ExecuteReader();
            if (reader->Read()) {
                // Authentication successful
                user = gcnew User;
                user->id = reader->GetInt32(0);
                user->name = reader->GetString(1);
                user->email = reader->GetString(2);
                user->isAdmin = reader->GetString(3);
                user->password = reader->GetString(4);
                user->username = reader->GetString(5);
                user->pwdhintl = reader->GetString(6);
                std::cout << "User ID: " << user->id << std::endl;
                // Close the database connection
                sqlConn->Close();
            }
            else {
                user = nullptr;
                // Authentication failed
                MessageBox::Show("Email or password is incorrect", "Try again", MessageBoxButtons::OK);
            }
        }
        catch (Exception^ e) {
            // Handle any exceptions
            MessageBox::Show("Failed to connect to the database", "Database Connection Error", MessageBoxButtons::OK);
        }

    }


