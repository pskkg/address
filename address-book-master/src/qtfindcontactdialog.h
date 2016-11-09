#ifndef QTFINDCONTACTDIALOG_H
#define QTFINDCONTACTDIALOG_H
#include <Qtwidgets/QPushButton>
#include <QDialog>
#include <QWidget>
#include "qtcontactform.h"
#include "contact.h"

/***********************************************************************
    Class: QtAddContactDialog

    Author: Phil Grohe

    Qt Dialog presenting a form to add a new contact.
***********************************************************************/

class QtFindContactDialog : public QDialog
{

    Q_OBJECT

    public:
        QtFindContactDialog(Contact &c, QWidget *parent=0, Qt::WindowFlags f=0);

    public slots:
        void accept();

    private:
        QtContactForm *contactForm;
        Contact &outContact;
};



#endif // QTFINDCONTACTDIALOG_H
