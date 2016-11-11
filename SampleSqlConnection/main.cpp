#include <QApplication>
#include <QtSql>
#include <QtGui>
#include <QTableView>
#include <QWidget>
#include <QTableWidget>
#include <QMessageBox>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QTableWidget* table = new QTableWidget();
        table->setWindowTitle("Connect to Mysql Database Example");

        QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
        db.setHostName("localhost");
        db.setDatabaseName("contact");
        db.setUserName("root");
        db.setPassword("root");
        if (!db.open())
        {
          QMessageBox::critical(0, QObject::tr("Database Error"),
                    db.lastError().text());
        }

        QSqlQuery query("SELECT * FROM contacts");

        table->setColumnCount(query.record().count());
        table->setRowCount(query.size());

        int index=0;
        while (query.next())
        {
        table->setItem(index,0,new QTableWidgetItem(query.value(0).toString()));
        table->setItem(index,1,new QTableWidgetItem(query.value(1).toString()));
        table->setItem(index,2,new QTableWidgetItem(query.value(2).toString()));
        table->setItem(index,3,new QTableWidgetItem(query.value(3).toString()));
        table->setItem(index,4,new QTableWidgetItem(query.value(4).toString()));
        table->setItem(index,5,new QTableWidgetItem(query.value(5).toString()));
        table->setItem(index,6,new QTableWidgetItem(query.value(6).toString()));

        index++;
        }

        table->show();
    return a.exec();
}


