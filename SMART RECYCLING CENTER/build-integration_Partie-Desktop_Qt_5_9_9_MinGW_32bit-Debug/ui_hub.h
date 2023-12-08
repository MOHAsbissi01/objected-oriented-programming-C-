/********************************************************************************
** Form generated from reading UI file 'hub.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HUB_H
#define UI_HUB_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Hub
{
public:
    QTabWidget *Tab;
    QWidget *EasyFix;
    QWidget *widget;
    QLabel *label2;
    QPushButton *pb_notif;
    QLineEdit *le_idp;
    QLabel *label;
    QLineEdit *le_statusp;
    QTableView *tab_panne;
    QWidget *Historique2;
    QTextBrowser *tab_histp;
    QCalendarWidget *calendarWidget;

    void setupUi(QDialog *Hub)
    {
        if (Hub->objectName().isEmpty())
            Hub->setObjectName(QStringLiteral("Hub"));
        Hub->resize(922, 658);
        Hub->setStyleSheet(QLatin1String("/* Set background color for the entire page */\n"
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
        Tab = new QTabWidget(Hub);
        Tab->setObjectName(QStringLiteral("Tab"));
        Tab->setGeometry(QRect(20, 10, 891, 621));
        Tab->setStyleSheet(QLatin1String("/* Set background color for the entire page */\n"
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
        EasyFix = new QWidget();
        EasyFix->setObjectName(QStringLiteral("EasyFix"));
        widget = new QWidget(EasyFix);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 30, 881, 551));
        label2 = new QLabel(widget);
        label2->setObjectName(QStringLiteral("label2"));
        label2->setGeometry(QRect(20, 50, 81, 31));
        label2->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 12pt \"Math Sans Serif\";"));
        pb_notif = new QPushButton(widget);
        pb_notif->setObjectName(QStringLiteral("pb_notif"));
        pb_notif->setGeometry(QRect(290, 70, 141, 51));
        le_idp = new QLineEdit(widget);
        le_idp->setObjectName(QStringLiteral("le_idp"));
        le_idp->setGeometry(QRect(110, 40, 131, 41));
        le_idp->setStyleSheet(QLatin1String("QLineEdit {\n"
"    border: 2px solid gray;\n"
"    border-radius: 10px;\n"
"    padding: 0 8px;\n"
"    background: white;\n"
"    selection-background-color: darkgray;\n"
"}"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 110, 101, 41));
        label->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 12pt \"Math Sans Serif\";"));
        le_statusp = new QLineEdit(widget);
        le_statusp->setObjectName(QStringLiteral("le_statusp"));
        le_statusp->setGeometry(QRect(120, 110, 121, 41));
        le_statusp->setStyleSheet(QLatin1String("QLineEdit {\n"
"    border: 2px solid gray;\n"
"    border-radius: 10px;\n"
"    padding: 0 8px;\n"
"    background: white;\n"
"    selection-background-color: darkgray;\n"
"}"));
        tab_panne = new QTableView(widget);
        tab_panne->setObjectName(QStringLiteral("tab_panne"));
        tab_panne->setGeometry(QRect(20, 191, 841, 351));
        Tab->addTab(EasyFix, QString());
        Historique2 = new QWidget();
        Historique2->setObjectName(QStringLiteral("Historique2"));
        tab_histp = new QTextBrowser(Historique2);
        tab_histp->setObjectName(QStringLiteral("tab_histp"));
        tab_histp->setGeometry(QRect(0, 250, 881, 301));
        calendarWidget = new QCalendarWidget(Historique2);
        calendarWidget->setObjectName(QStringLiteral("calendarWidget"));
        calendarWidget->setGeometry(QRect(0, 0, 881, 241));
        Tab->addTab(Historique2, QString());

        retranslateUi(Hub);

        Tab->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Hub);
    } // setupUi

    void retranslateUi(QDialog *Hub)
    {
        Hub->setWindowTitle(QApplication::translate("Hub", "Dialog", Q_NULLPTR));
        label2->setText(QApplication::translate("Hub", "ID", Q_NULLPTR));
        pb_notif->setText(QApplication::translate("Hub", "Envoi requ\303\252te", Q_NULLPTR));
        label->setText(QApplication::translate("Hub", "PANNE", Q_NULLPTR));
        Tab->setTabText(Tab->indexOf(EasyFix), QApplication::translate("Hub", "EasyFix", Q_NULLPTR));
        Tab->setTabText(Tab->indexOf(Historique2), QApplication::translate("Hub", "Historique", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Hub: public Ui_Hub {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HUB_H
