#include "addressbookcontroller.h"
#include "sqlitedatasource.h"

#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    app.setStyleSheet("QMainWindow{background-image:url(D:/qt/address-book-master/test.jpg)}");
    SQLiteDataSource dSrc("contacts.db", true);  
    AddressBookController myBook(dSrc);
    myBook.start();
    return app.exec();
}

