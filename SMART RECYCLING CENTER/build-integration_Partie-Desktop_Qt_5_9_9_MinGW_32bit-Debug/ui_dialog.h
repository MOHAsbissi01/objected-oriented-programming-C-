/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QPushButton *pb_GestionMachine;
    QPushButton *pb_GestionFournisseur;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(1115, 729);
        Dialog->setStyleSheet(QLatin1String("/* Set background color for the entire page */\n"
"QWidget {\n"
"    background-color: #ffffff; /* White background */\n"
"}\n"
"\n"
"/* Style for the QLabel elements */\n"
"QLabel {\n"
"    color: #000000; /* Black text */\n"
"}\n"
"\n"
"/* Style for the QLineEdit elements */\n"
"QLineEdit {\n"
"    background-color: #f0f0f0; /* Light gray background */\n"
"    border: 1px solid #000000; /* Black border */\n"
"    padding: 5px; /* Add some padding */\n"
"    color: #000000; /* Black text */\n"
"}\n"
"\n"
"/* Style for the QComboBox elements */\n"
"QComboBox {\n"
"    background-color: #f0f0f0; /* Light gray background */\n"
"    border: 1px solid #000000; /* Black border */\n"
"    color: #000000; /* Black text */\n"
"}\n"
"\n"
"/* Style for the QPushButton elements */\n"
"QPushButton {\n"
"    background-color: #4CAF50; /* Green background */\n"
"    color: #ffffff; /* White text */\n"
"    border: 1px solid #4CAF50; /* Green border */\n"
"    padding: 5px 10px; /* Add padding */\n"
"}\n"
"\n"
"/* Style for "
                        "the QPushButton when hovered */\n"
"QPushButton:hover {\n"
"    background-color: #45a049; /* Darker green on hover */\n"
"    border: 1px solid #45a049; /* Darker green border on hover */\n"
"}\n"
"\n"
"/* Style for the QPushButton when pressed */\n"
"QPushButton:pressed {\n"
"    background-color: #3d8b40; /* Even darker green on press */\n"
"    border: 1px solid #3d8b40; /* Even darker green border on press */\n"
"}\n"
""));
        pb_GestionMachine = new QPushButton(Dialog);
        pb_GestionMachine->setObjectName(QStringLiteral("pb_GestionMachine"));
        pb_GestionMachine->setGeometry(QRect(390, 440, 321, 81));
        pb_GestionFournisseur = new QPushButton(Dialog);
        pb_GestionFournisseur->setObjectName(QStringLiteral("pb_GestionFournisseur"));
        pb_GestionFournisseur->setGeometry(QRect(390, 150, 321, 81));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", Q_NULLPTR));
        pb_GestionMachine->setText(QApplication::translate("Dialog", "GestionMachine", Q_NULLPTR));
        pb_GestionFournisseur->setText(QApplication::translate("Dialog", "GestionFournisseur ", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
