#include "connection.h"
#include<QtDebug>
Connection::Connection() {}

bool Connection::createconnect() {
    static bool isConnected = false;

    if (isConnected) {
        qDebug() << "Database connection already established.";
        return true;
    }

    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
    db.setDatabaseName("Source_Projet2A");
    db.setUserName("Mohamed");
    db.setPassword("esprit18");

    if (db.open()) {
        isConnected = true;
        return true;
    } else {
        qDebug() << "Database connection failed. Error: " << db.lastError().text();
        return false;
    }
}
void Connection::closeconnect() {
     QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
    if (db.isOpen()) {
        db.close();
        qDebug() << "Database connection closed.";
    }
}




