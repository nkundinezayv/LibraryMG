#pragma once
#pragma once
#include "Db_CONN.h"
using namespace System;
using namespace System::Data::SqlClient;
using namespace System::Data;

public ref class Borrow {
public:
    int bookid;
    int userid;
    String^ email;
    DateTime borrowedDate;
    DateTime dateDue;
    DateTime returnedDate;
    DataTable^ dataTable;

public:
    Borrow() {
        sqlConn = Db_CONN::GetSqlConnection();
        dataTable = gcnew DataTable();
    }

    void RentedBook() {
        sqlConn->Open();

        String^ query = "SELECT * FROM Borrowings";
        SqlDataAdapter^ dataAdapter = gcnew SqlDataAdapter(query, sqlConn);

        dataAdapter->Fill(dataTable);

        sqlConn->Close();
    }

    void ReturnedBook() {
        sqlConn->Open();

        String^ query = "SELECT * FROM returnBook";
        SqlDataAdapter^ dataAdapter = gcnew SqlDataAdapter(query, sqlConn);

        dataAdapter->Fill(dataTable);

        sqlConn->Close();
    }

private:
    SqlConnection^ sqlConn;
};




