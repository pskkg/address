#include <QLabel>
#include <QLineEdit>
#include <QFormLayout>
#include "qtcontactform.h"



QtContactForm::QtContactForm(QWidget *parent) : 
        QFormLayout(parent), firstNameField(new QLineEdit()),
        lastNameField(new QLineEdit()),
        addressField(new QLineEdit()),
        phoneNumberField(new QLineEdit()),
        emailField(new QLineEdit()),
        bgpField(new QLineEdit())

{
    QPalette palette;
    palette.setColor(QPalette::Text,Qt::blue);
    QFont font("Times", 12, QFont::Bold,false);
    firstNameField->setPlaceholderText("Enter Your First Name");
    firstNameField->setFont(font);
    firstNameField->setPalette(palette);
    addRow("First Name", firstNameField);
    lastNameField->setPlaceholderText("Enter Your Last Name");
    lastNameField->setFont(font);
    lastNameField->setPalette(palette);
    addRow("Last Name", lastNameField);
    addressField->setPlaceholderText("Enter Your Address");
    addressField->setFont(font);
    addressField->setPalette(palette);
    addRow("Address", addressField);
    phoneNumberField->setPlaceholderText("Enter Your Mobile Phone Number");
    phoneNumberField->setFont(font);
    phoneNumberField->setPalette(palette);
    addRow("Phone Number", phoneNumberField);
    emailField->setPlaceholderText("Enter Your E-Mail ID");
    emailField->setFont(font);
    emailField->setPalette(palette);
    addRow("Email", emailField);
    bgpField->setPlaceholderText("Enter Your Blood Group");
    bgpField->setFont(font);
    bgpField->setPalette(palette);
    addRow("Blood Group", bgpField);
}

void QtContactForm::clear()
{
    firstNameField->setText("");
    lastNameField->setText("");
    addressField->setText("");
    phoneNumberField->setText("");
    emailField->setText("");
    bgpField->setText("");
}
