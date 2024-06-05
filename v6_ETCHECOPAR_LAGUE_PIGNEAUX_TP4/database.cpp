#include "database.h"

#include <QDebug>
#include <QSqlQuery>
#include <QSqlError>


Database::Database()
{
}

bool Database::openDataBase()
{
    mydb = QSqlDatabase::addDatabase(CONNECT_TYPE);
    mydb.setDatabaseName(DATABASE_NAME);
    mydb.setUserName("tlague_bd");
    mydb.setPassword("tlague_bd");

    if(mydb.open()){

        return true;
    }
    else{
        return false;
    }

}

void Database::closeDataBase()
{
    mydb.close();
}
