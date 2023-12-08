/********************************************************************************
** Form generated from reading UI file 'iu.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IU_H
#define UI_IU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_IU
{
public:
    QTabWidget *tab_machines;
    QWidget *tab_ajout;
    QLabel *label_pic_3;
    QGroupBox *groupBox_6;
    QPushButton *pb_ajouter_2;
    QPushButton *pb_modifier;
    QLineEdit *le_nom;
    QLineEdit *le_date;
    QLineEdit *le_id;
    QLineEdit *le_type;
    QLineEdit *le_cout;
    QLineEdit *le_status;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_9;
    QLabel *label_20;
    QLabel *label_17;
    QLabel *label_19;
    QLineEdit *le_durab;
    QLabel *label_21;
    QPushButton *pb_menu;
    QWidget *tab_supp;
    QLabel *label_pic_4;
    QGroupBox *groupBox_7;
    QLabel *label_18;
    QPushButton *pb_supprimer_2;
    QLineEdit *le_numero_supp_2;
    QWidget *tab_rech;
    QPushButton *chercher_numero;
    QLabel *label_2;
    QLineEdit *pbrecherche;
    QTableView *tab_mac;
    QPushButton *chercher_nom;
    QPushButton *chercher_type;
    QPushButton *pb_tri_asc;
    QPushButton *pb_tri_desc;
    QPushButton *pb_tri_type;
    QPushButton *pb_tri_nom;
    QPushButton *pb_stat;
    QPushButton *pb_PDF;
    QPushButton *pb_stat_2;
    QPushButton *pb_stat_3;
    QWidget *tab_hist;
    QTextBrowser *tableView_historique_f_2;
    QWidget *tab_qr;
    QLabel *qrcodecommande;
    QPushButton *qrcodegen;
    QPushButton *qrcode;
    QLineEdit *le_qr;
    QPushButton *redirect;

    void setupUi(QDialog *IU)
    {
        if (IU->objectName().isEmpty())
            IU->setObjectName(QStringLiteral("IU"));
        IU->resize(965, 594);
        QPalette palette;
        QBrush brush(QColor(177, 177, 177, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush2(QColor(177, 177, 177, 128));
        brush2.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        QBrush brush3(QColor(177, 177, 177, 128));
        brush3.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush3);
#endif
        QBrush brush4(QColor(64, 64, 64, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        QBrush brush5(QColor(177, 177, 177, 128));
        brush5.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush5);
#endif
        IU->setPalette(palette);
        IU->setStyleSheet(QLatin1String(" /* Set background color for the entire page */\n"
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
"/* Style for"
                        " the QPushButton when hovered */\n"
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
        tab_machines = new QTabWidget(IU);
        tab_machines->setObjectName(QStringLiteral("tab_machines"));
        tab_machines->setGeometry(QRect(30, 30, 911, 531));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush6(QColor(170, 0, 0, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::HighlightedText, brush6);
        palette1.setBrush(QPalette::Active, QPalette::Link, brush6);
        QBrush brush7(QColor(177, 177, 177, 128));
        brush7.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush7);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Link, brush6);
        QBrush brush8(QColor(177, 177, 177, 128));
        brush8.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::Link, brush6);
        QBrush brush9(QColor(177, 177, 177, 128));
        brush9.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush9);
#endif
        tab_machines->setPalette(palette1);
        tab_machines->setStyleSheet(QStringLiteral("font: 11pt \"Arial\";"));
        tab_ajout = new QWidget();
        tab_ajout->setObjectName(QStringLiteral("tab_ajout"));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush10(QColor(177, 177, 177, 128));
        brush10.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Active, QPalette::PlaceholderText, brush10);
#endif
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        QBrush brush11(QColor(177, 177, 177, 128));
        brush11.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush11);
#endif
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        QBrush brush12(QColor(177, 177, 177, 128));
        brush12.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush12);
#endif
        tab_ajout->setPalette(palette2);
        label_pic_3 = new QLabel(tab_ajout);
        label_pic_3->setObjectName(QStringLiteral("label_pic_3"));
        label_pic_3->setGeometry(QRect(20, 30, 911, 381));
        label_pic_3->setPixmap(QPixmap(QString::fromUtf8("../../../../../Downloads/Atelier_Connexion (2) (1)/Atelier_Connexion (2)/equipe-travail-travaillant-ordinateur-portable-dans-bureau-espace-ouvert-rapport-reunion-cours_11304-682.jpg")));
        groupBox_6 = new QGroupBox(tab_ajout);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        groupBox_6->setGeometry(QRect(20, 40, 761, 431));
        pb_ajouter_2 = new QPushButton(groupBox_6);
        pb_ajouter_2->setObjectName(QStringLiteral("pb_ajouter_2"));
        pb_ajouter_2->setGeometry(QRect(450, 140, 164, 41));
        pb_ajouter_2->setStyleSheet(QStringLiteral(""));
        pb_modifier = new QPushButton(groupBox_6);
        pb_modifier->setObjectName(QStringLiteral("pb_modifier"));
        pb_modifier->setGeometry(QRect(450, 200, 164, 41));
        pb_modifier->setStyleSheet(QStringLiteral(""));
        le_nom = new QLineEdit(groupBox_6);
        le_nom->setObjectName(QStringLiteral("le_nom"));
        le_nom->setGeometry(QRect(200, 30, 148, 28));
        le_nom->setStyleSheet(QLatin1String("QLineEdit {\n"
"    border: 2px solid gray;\n"
"    border-radius: 10px;\n"
"    padding: 0 8px;\n"
"    background: white;\n"
"    selection-background-color: darkgray;\n"
"}"));
        le_date = new QLineEdit(groupBox_6);
        le_date->setObjectName(QStringLiteral("le_date"));
        le_date->setGeometry(QRect(200, 200, 148, 28));
        le_date->setStyleSheet(QLatin1String("QLineEdit {\n"
"    border: 2px solid gray;\n"
"    border-radius: 10px;\n"
"    padding: 0 8px;\n"
"    background: white;\n"
"    selection-background-color: darkgray;\n"
"}"));
        le_id = new QLineEdit(groupBox_6);
        le_id->setObjectName(QStringLiteral("le_id"));
        le_id->setGeometry(QRect(200, 80, 148, 28));
        le_id->setStyleSheet(QLatin1String("QLineEdit {\n"
"    border: 2px solid gray;\n"
"    border-radius: 10px;\n"
"    padding: 0 8px;\n"
"    background: white;\n"
"    selection-background-color: darkgray;\n"
"}"));
        le_type = new QLineEdit(groupBox_6);
        le_type->setObjectName(QStringLiteral("le_type"));
        le_type->setGeometry(QRect(200, 140, 148, 28));
        le_type->setStyleSheet(QLatin1String("QLineEdit {\n"
"    border: 2px solid gray;\n"
"    border-radius: 10px;\n"
"    padding: 0 8px;\n"
"    background: white;\n"
"    selection-background-color: darkgray;\n"
"}"));
        le_cout = new QLineEdit(groupBox_6);
        le_cout->setObjectName(QStringLiteral("le_cout"));
        le_cout->setGeometry(QRect(200, 250, 148, 28));
        le_cout->setStyleSheet(QLatin1String("QLineEdit {\n"
"    border: 2px solid gray;\n"
"    border-radius: 10px;\n"
"    padding: 0 8px;\n"
"    background: white;\n"
"    selection-background-color: darkgray;\n"
"}"));
        le_status = new QLineEdit(groupBox_6);
        le_status->setObjectName(QStringLiteral("le_status"));
        le_status->setGeometry(QRect(200, 310, 148, 28));
        le_status->setStyleSheet(QLatin1String("QLineEdit {\n"
"    border: 2px solid gray;\n"
"    border-radius: 10px;\n"
"    padding: 0 8px;\n"
"    background: white;\n"
"    selection-background-color: darkgray;\n"
"}"));
        label_10 = new QLabel(groupBox_6);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(11, 144, 71, 23));
        label_10->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 12pt \"Math Sans Serif\";"));
        label_11 = new QLabel(groupBox_6);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(11, 88, 61, 23));
        label_11->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 14pt \"Math Sans Serif\";"));
        label_9 = new QLabel(groupBox_6);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(11, 32, 81, 23));
        label_9->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 12pt \"Math Sans Serif\";"));
        label_20 = new QLabel(groupBox_6);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(11, 255, 101, 23));
        label_20->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 12pt \"Math Sans Serif\";"));
        label_17 = new QLabel(groupBox_6);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(11, 199, 161, 23));
        label_17->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 12pt \"Math Sans Serif\";"));
        label_19 = new QLabel(groupBox_6);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(11, 311, 111, 23));
        label_19->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 12pt \"Math Sans Serif\";"));
        le_durab = new QLineEdit(groupBox_6);
        le_durab->setObjectName(QStringLiteral("le_durab"));
        le_durab->setGeometry(QRect(199, 369, 148, 28));
        le_durab->setStyleSheet(QLatin1String("QLineEdit {\n"
"    border: 2px solid gray;\n"
"    border-radius: 10px;\n"
"    padding: 0 8px;\n"
"    background: white;\n"
"    selection-background-color: darkgray;\n"
"}"));
        label_21 = new QLabel(groupBox_6);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(10, 370, 111, 23));
        label_21->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 12pt \"Math Sans Serif\";"));
        pb_menu = new QPushButton(groupBox_6);
        pb_menu->setObjectName(QStringLiteral("pb_menu"));
        pb_menu->setGeometry(QRect(502, 347, 191, 61));
        tab_machines->addTab(tab_ajout, QString());
        tab_supp = new QWidget();
        tab_supp->setObjectName(QStringLiteral("tab_supp"));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush13(QColor(177, 177, 177, 128));
        brush13.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Active, QPalette::PlaceholderText, brush13);
#endif
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        QBrush brush14(QColor(177, 177, 177, 128));
        brush14.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush14);
#endif
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        QBrush brush15(QColor(177, 177, 177, 128));
        brush15.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush15);
#endif
        tab_supp->setPalette(palette3);
        label_pic_4 = new QLabel(tab_supp);
        label_pic_4->setObjectName(QStringLiteral("label_pic_4"));
        label_pic_4->setGeometry(QRect(-170, 40, 911, 381));
        label_pic_4->setStyleSheet(QLatin1String("class Window : public QWidget\n"
"{\n"
"    Q_OBJECT\n"
"\n"
"public:\n"
"    Window(QWidget *parent = nullptr);\n"
"\n"
"public slots:\n"
"    void echoChanged(int);\n"
"    void validatorChanged(int);\n"
"    void alignmentChanged(int);\n"
"    void inputMaskChanged(int);\n"
"    void accessChanged(int);\n"
"\n"
"private:\n"
"    QLineEdit *echoLineEdit;\n"
"    QLineEdit *validatorLineEdit;\n"
"    QLineEdit *alignmentLineEdit;\n"
"    QLineEdit *inputMaskLineEdit;\n"
"    QLineEdit *accessLineEdit;\n"
"};"));
        label_pic_4->setPixmap(QPixmap(QString::fromUtf8("../../../../../Downloads/Atelier_Connexion (2) (1)/Atelier_Connexion (2)/equipe-travail-travaillant-ordinateur-portable-dans-bureau-espace-ouvert-rapport-reunion-cours_11304-682.jpg")));
        groupBox_7 = new QGroupBox(tab_supp);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        groupBox_7->setGeometry(QRect(80, 20, 541, 361));
        label_18 = new QLabel(groupBox_7);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(50, 120, 121, 21));
        label_18->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 14pt \"Math Sans Serif\";"));
        pb_supprimer_2 = new QPushButton(groupBox_7);
        pb_supprimer_2->setObjectName(QStringLiteral("pb_supprimer_2"));
        pb_supprimer_2->setGeometry(QRect(150, 260, 261, 41));
        pb_supprimer_2->setStyleSheet(QStringLiteral(""));
        le_numero_supp_2 = new QLineEdit(groupBox_7);
        le_numero_supp_2->setObjectName(QStringLiteral("le_numero_supp_2"));
        le_numero_supp_2->setGeometry(QRect(200, 111, 141, 31));
        le_numero_supp_2->setStyleSheet(QLatin1String("QLineEdit {\n"
"    border: 2px solid gray;\n"
"    border-radius: 10px;\n"
"    padding: 0 8px;\n"
"    background: white;\n"
"    selection-background-color: darkgray;\n"
"}"));
        tab_machines->addTab(tab_supp, QString());
        tab_rech = new QWidget();
        tab_rech->setObjectName(QStringLiteral("tab_rech"));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush16(QColor(177, 177, 177, 128));
        brush16.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Active, QPalette::PlaceholderText, brush16);
#endif
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        QBrush brush17(QColor(177, 177, 177, 128));
        brush17.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush17);
#endif
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        QBrush brush18(QColor(177, 177, 177, 128));
        brush18.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush18);
#endif
        tab_rech->setPalette(palette4);
        chercher_numero = new QPushButton(tab_rech);
        chercher_numero->setObjectName(QStringLiteral("chercher_numero"));
        chercher_numero->setGeometry(QRect(620, 90, 271, 41));
        chercher_numero->setStyleSheet(QStringLiteral(""));
        label_2 = new QLabel(tab_rech);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(700, 0, 131, 31));
        pbrecherche = new QLineEdit(tab_rech);
        pbrecherche->setObjectName(QStringLiteral("pbrecherche"));
        pbrecherche->setGeometry(QRect(620, 30, 271, 51));
        pbrecherche->setStyleSheet(QLatin1String("QLineEdit {\n"
"    border: 2px solid gray;\n"
"    border-radius: 10px;\n"
"    padding: 0 8px;\n"
"    background: white;\n"
"    selection-background-color: darkgray;\n"
"}"));
        tab_mac = new QTableView(tab_rech);
        tab_mac->setObjectName(QStringLiteral("tab_mac"));
        tab_mac->setGeometry(QRect(20, 20, 561, 461));
        chercher_nom = new QPushButton(tab_rech);
        chercher_nom->setObjectName(QStringLiteral("chercher_nom"));
        chercher_nom->setGeometry(QRect(620, 140, 271, 41));
        chercher_type = new QPushButton(tab_rech);
        chercher_type->setObjectName(QStringLiteral("chercher_type"));
        chercher_type->setGeometry(QRect(620, 190, 271, 41));
        pb_tri_asc = new QPushButton(tab_rech);
        pb_tri_asc->setObjectName(QStringLiteral("pb_tri_asc"));
        pb_tri_asc->setGeometry(QRect(620, 240, 271, 41));
        pb_tri_asc->setStyleSheet(QStringLiteral(""));
        pb_tri_desc = new QPushButton(tab_rech);
        pb_tri_desc->setObjectName(QStringLiteral("pb_tri_desc"));
        pb_tri_desc->setGeometry(QRect(620, 290, 271, 41));
        pb_tri_desc->setStyleSheet(QStringLiteral(""));
        pb_tri_type = new QPushButton(tab_rech);
        pb_tri_type->setObjectName(QStringLiteral("pb_tri_type"));
        pb_tri_type->setGeometry(QRect(620, 380, 271, 31));
        pb_tri_nom = new QPushButton(tab_rech);
        pb_tri_nom->setObjectName(QStringLiteral("pb_tri_nom"));
        pb_tri_nom->setGeometry(QRect(620, 340, 271, 31));
        pb_stat = new QPushButton(tab_rech);
        pb_stat->setObjectName(QStringLiteral("pb_stat"));
        pb_stat->setGeometry(QRect(620, 420, 131, 31));
        pb_stat->setStyleSheet(QStringLiteral(""));
        pb_PDF = new QPushButton(tab_rech);
        pb_PDF->setObjectName(QStringLiteral("pb_PDF"));
        pb_PDF->setGeometry(QRect(620, 460, 131, 31));
        pb_PDF->setStyleSheet(QStringLiteral(""));
        pb_stat_2 = new QPushButton(tab_rech);
        pb_stat_2->setObjectName(QStringLiteral("pb_stat_2"));
        pb_stat_2->setGeometry(QRect(762, 460, 131, 31));
        pb_stat_3 = new QPushButton(tab_rech);
        pb_stat_3->setObjectName(QStringLiteral("pb_stat_3"));
        pb_stat_3->setGeometry(QRect(762, 420, 131, 31));
        tab_machines->addTab(tab_rech, QString());
        tab_hist = new QWidget();
        tab_hist->setObjectName(QStringLiteral("tab_hist"));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette5.setBrush(QPalette::Active, QPalette::Text, brush);
        palette5.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush19(QColor(177, 177, 177, 128));
        brush19.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Active, QPalette::PlaceholderText, brush19);
#endif
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        QBrush brush20(QColor(177, 177, 177, 128));
        brush20.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush20);
#endif
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette5.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        QBrush brush21(QColor(177, 177, 177, 128));
        brush21.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush21);
#endif
        tab_hist->setPalette(palette5);
        tableView_historique_f_2 = new QTextBrowser(tab_hist);
        tableView_historique_f_2->setObjectName(QStringLiteral("tableView_historique_f_2"));
        tableView_historique_f_2->setGeometry(QRect(90, 40, 701, 411));
        tableView_historique_f_2->setStyleSheet(QStringLiteral(""));
        tab_machines->addTab(tab_hist, QString());
        tab_qr = new QWidget();
        tab_qr->setObjectName(QStringLiteral("tab_qr"));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette6.setBrush(QPalette::Active, QPalette::Text, brush);
        palette6.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette6.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette6.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush22(QColor(177, 177, 177, 128));
        brush22.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Active, QPalette::PlaceholderText, brush22);
#endif
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        QBrush brush23(QColor(177, 177, 177, 128));
        brush23.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush23);
#endif
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette6.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette6.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette6.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        QBrush brush24(QColor(177, 177, 177, 128));
        brush24.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush24);
#endif
        tab_qr->setPalette(palette6);
        qrcodecommande = new QLabel(tab_qr);
        qrcodecommande->setObjectName(QStringLiteral("qrcodecommande"));
        qrcodecommande->setEnabled(true);
        qrcodecommande->setGeometry(QRect(70, 20, 451, 431));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(qrcodecommande->sizePolicy().hasHeightForWidth());
        qrcodecommande->setSizePolicy(sizePolicy);
        qrcodecommande->setMinimumSize(QSize(200, 200));
        qrcodecommande->setMaximumSize(QSize(1400, 1400));
        qrcodecommande->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        qrcodegen = new QPushButton(tab_qr);
        qrcodegen->setObjectName(QStringLiteral("qrcodegen"));
        qrcodegen->setGeometry(QRect(540, 250, 161, 51));
        qrcodegen->setStyleSheet(QStringLiteral(""));
        qrcode = new QPushButton(tab_qr);
        qrcode->setObjectName(QStringLiteral("qrcode"));
        qrcode->setGeometry(QRect(720, 190, 161, 51));
        le_qr = new QLineEdit(tab_qr);
        le_qr->setObjectName(QStringLiteral("le_qr"));
        le_qr->setGeometry(QRect(552, 201, 121, 31));
        redirect = new QPushButton(tab_qr);
        redirect->setObjectName(QStringLiteral("redirect"));
        redirect->setGeometry(QRect(720, 250, 161, 51));
        tab_machines->addTab(tab_qr, QString());

        retranslateUi(IU);

        tab_machines->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(IU);
    } // setupUi

    void retranslateUi(QDialog *IU)
    {
        IU->setWindowTitle(QApplication::translate("IU", "Dialog", Q_NULLPTR));
        label_pic_3->setText(QString());
        groupBox_6->setTitle(QString());
        pb_ajouter_2->setText(QApplication::translate("IU", "Ajouter", Q_NULLPTR));
        pb_modifier->setText(QApplication::translate("IU", "Modifier", Q_NULLPTR));
        label_10->setText(QApplication::translate("IU", "Type", Q_NULLPTR));
        label_11->setText(QApplication::translate("IU", "ID", Q_NULLPTR));
        label_9->setText(QApplication::translate("IU", "Nom", Q_NULLPTR));
        label_20->setText(QApplication::translate("IU", "Cout", Q_NULLPTR));
        label_17->setText(QApplication::translate("IU", "Date ajout", Q_NULLPTR));
        label_19->setText(QApplication::translate("IU", "Status", Q_NULLPTR));
        label_21->setText(QApplication::translate("IU", "Durabilite", Q_NULLPTR));
        pb_menu->setText(QApplication::translate("IU", "BACK MENU", Q_NULLPTR));
        tab_machines->setTabText(tab_machines->indexOf(tab_ajout), QApplication::translate("IU", "Ajouter et Modifier", Q_NULLPTR));
        label_pic_4->setText(QString());
        groupBox_7->setTitle(QApplication::translate("IU", "supprimer", Q_NULLPTR));
        label_18->setText(QApplication::translate("IU", "Numero", Q_NULLPTR));
        pb_supprimer_2->setText(QApplication::translate("IU", "Supprimer une machine", Q_NULLPTR));
        tab_machines->setTabText(tab_machines->indexOf(tab_supp), QApplication::translate("IU", "Suppression", Q_NULLPTR));
        chercher_numero->setText(QApplication::translate("IU", "Rechercher par id", Q_NULLPTR));
        label_2->setText(QApplication::translate("IU", "ID/NOM/TYPE", Q_NULLPTR));
        chercher_nom->setText(QApplication::translate("IU", "Rechercher par nom", Q_NULLPTR));
        chercher_type->setText(QApplication::translate("IU", "Rechercher par type", Q_NULLPTR));
        pb_tri_asc->setText(QApplication::translate("IU", "Tri id asc", Q_NULLPTR));
        pb_tri_desc->setText(QApplication::translate("IU", "Tri id desc", Q_NULLPTR));
        pb_tri_type->setText(QApplication::translate("IU", "Tri type", Q_NULLPTR));
        pb_tri_nom->setText(QApplication::translate("IU", "Tri nom", Q_NULLPTR));
        pb_stat->setText(QApplication::translate("IU", "Stat type", Q_NULLPTR));
        pb_PDF->setText(QApplication::translate("IU", "Pdf", Q_NULLPTR));
        pb_stat_2->setText(QApplication::translate("IU", "Stat cout", Q_NULLPTR));
        pb_stat_3->setText(QApplication::translate("IU", "Stat status", Q_NULLPTR));
        tab_machines->setTabText(tab_machines->indexOf(tab_rech), QApplication::translate("IU", "Rechercher", Q_NULLPTR));
        tab_machines->setTabText(tab_machines->indexOf(tab_hist), QApplication::translate("IU", "Historique", Q_NULLPTR));
        qrcodecommande->setText(QString());
        qrcodegen->setText(QApplication::translate("IU", "EasyFix", Q_NULLPTR));
        qrcode->setText(QApplication::translate("IU", "QRCODE", Q_NULLPTR));
        redirect->setText(QApplication::translate("IU", "Redirect By ID", Q_NULLPTR));
        tab_machines->setTabText(tab_machines->indexOf(tab_qr), QApplication::translate("IU", "CodeQR", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class IU: public Ui_IU {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IU_H
