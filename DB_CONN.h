#pragma once


using namespace System;
using namespace System::Data::SqlClient;


public ref class Db_CONN {
public:
    static SqlConnection^ GetSqlConnection() {
        String^ connString = "Data Source=161.35.68.179;Initial Catalog=LibraryMG;Persist Security Info=True;User ID=SA;Password=Producer@123";
        return gcnew SqlConnection(connString);
    }
};

