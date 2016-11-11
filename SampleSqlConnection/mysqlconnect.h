#ifndef MYSQLCONNECT_H
#define MYSQLCONNECT_H
#include <QApplication>
#include <QtSql>
#include <QtGui>
#include <QTableView>
#include <QWidget>
#include <QTableWidget>
#include <QMessageBox>
class mysqlconnect
{
public:
    QTableWidget* table;
    QSqlDatabase db;
    void test();
};
#endif // MYSQLCONNECT_H

