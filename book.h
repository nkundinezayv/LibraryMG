#pragma once
#include "DB_CONN.h"
using namespace System;
using namespace System::Data::SqlClient;
using namespace System::Data;

public ref class Book {
public:
    int bookid;
    int bookno;
    String^ title;
    String^ author;
    String^ ISBN;
    String^ isavariable;
    DataTable^ dataTable;

public:
    Book() {
        sqlConn = Db_CONN::GetSqlConnection();
        dataTable = gcnew DataTable();
    }

    void addBook(){
        sqlConn->Open();

        String^ query = "SELECT * FROM users";
        SqlDataAdapter^ dataAdapter = gcnew SqlDataAdapter(query, sqlConn);

        dataAdapter->Fill(dataTable);

        sqlConn->Close();
    }

    void allBook() {
        sqlConn->Open();

        String^ query = "SELECT * FROM users";
        SqlDataAdapter^ dataAdapter = gcnew SqlDataAdapter(query, sqlConn);

        dataAdapter->Fill(dataTable);

        sqlConn->Close();
    }

private:
    SqlConnection^ sqlConn;
};
