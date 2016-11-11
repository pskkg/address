#include <QApplication>
#include <QtSql>
#include <QtGui>
#include <QTableView>
#include <QWidget>
#include <QTableWidget>
#include <QMessageBox>
#include "mysqlconnect.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    mysqlconnect *t = new mysqlconnect();
    t->test();
    return a.exec();
}


