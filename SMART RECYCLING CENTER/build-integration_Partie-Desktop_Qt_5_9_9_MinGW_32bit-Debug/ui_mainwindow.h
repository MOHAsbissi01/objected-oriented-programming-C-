/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *tab_;
    QWidget *tab;
    QGroupBox *groupBox_2;
    QLabel *label;
    QLineEdit *le_id;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *le_nom;
    QLineEdit *le_prenom;
    QPushButton *pb_ajouter;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLineEdit *le_nom_entreprise;
    QComboBox *le_type_fournisseur;
    QComboBox *le_matiere_recyclee;
    QComboBox *le_contrat;
    QComboBox *le_sexe;
    QLineEdit *le_quantite;
    QLabel *label_21;
    QLineEdit *lineEdit_rfid;
    QPushButton *pb_BackM;
    QWidget *widget;
    QLabel *label_2;
    QPushButton *pb_supprimer;
    QTableView *tab_fournisseur_3;
    QComboBox *le_id_supp;
    QWidget *tab_2;
    QTableView *tab_fournisseur;
    QPushButton *pb_sort;
    QPushButton *pb_SortSexe;
    QPushButton *pb_SortDiscount;
    QPushButton *pb_SortQuantite;
    QWidget *tab_3;
    QPushButton *pb_modifier;
    QLabel *label_10;
    QComboBox *le_matiere_recyclee_2;
    QLabel *label_11;
    QComboBox *le_contrat_2;
    QLabel *label_12;
    QLabel *label_13;
    QComboBox *le_sexe_2;
    QLabel *label_14;
    QLineEdit *le_id_2;
    QLineEdit *le_nom_2;
    QLineEdit *le_prenom_2;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QLineEdit *le_nom_entreprise_2;
    QComboBox *le_type_fournisseur_2;
    QTableView *tab_fournisseur_2;
    QLineEdit *le_quantite_2;
    QLabel *label_22;
    QWidget *tab_4;
    QPushButton *generate_pdf;
    QLabel *label_18;
    QLabel *label_19;
    QPushButton *display_Charts;
    QPushButton *display_Charts_Evaluation;
    QPushButton *display_Charts_matiere_recyclee;
    QWidget *tab_6;
    QLabel *label_20;
    QLineEdit *le_search;
    QPushButton *bp_search;
    QTableView *search_table_view;
    QWidget *tab_5;
    QComboBox *le_id_3;
    QComboBox *le_quantite_3;
    QLabel *label_23;
    QLabel *label_24;
    QComboBox *le_matiere_recyclee_3;
    QLabel *label_25;
    QPushButton *addAchatButton;
    QLabel *label_28;
    QWidget *tab_7;
    QComboBox *le_id_4;
    QLabel *label_26;
    QLabel *label_27;
    QPushButton *bp_evaluation;
    QPushButton *bp_discount;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1017, 727);
        MainWindow->setStyleSheet(QLatin1String("QLineEdit {\n"
"	font: 8pt \"MS Shell Dlg 2\";\n"
"    background-color: #E5FFD5; /* Light Green */\n"
"    border: 1.5px solid #80C783; /* Light Green Border */\n"
"    border-radius: 5px;\n"
"    padding: 2px;\n"
"    selection-background-color: #A0EFA7; /* Light Green Selection */\n"
"}\n"
"\n"
"/* Labels */\n"
"QLabel {\n"
"    color: #006400; /* Dark Green Text Color */\n"
"    background-color: transparent; /* Transparent Background */\n"
"}\n"
"\n"
"/* Push Buttons */\n"
"QPushButton\n"
"{\n"
"     background-color: green;\n"
"     border-style: outset;\n"
"     border-width: 2px;\n"
"     border-radius: 10px;\n"
"    \n"
"	border-color: rgb(0, 85, 0);\n"
"     font: bold 14px;\n"
"     min-width: 10em;\n"
"     padding: 6px;\n"
" \n"
"}\n"
"\n"
"\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #A0FFB7; /* Light Green Hover Color */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #6FD990; /* Light Green Pressed Color */\n"
"}"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tab_ = new QTabWidget(centralWidget);
        tab_->setObjectName(QStringLiteral("tab_"));
        tab_->setEnabled(true);
        tab_->setGeometry(QRect(50, 30, 961, 621));
        tab_->setStyleSheet(QLatin1String("/* Set background color for the entire page */\n"
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
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        groupBox_2 = new QGroupBox(tab);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(60, 0, 861, 601));
        groupBox_2->setStyleSheet(QLatin1String("/* Set background color for the entire page */\n"
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
        label = new QLabel(groupBox_2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(180, 40, 56, 16));
        label->setStyleSheet(QStringLiteral("font: 9pt \"MS Shell Dlg 2\";"));
        le_id = new QLineEdit(groupBox_2);
        le_id->setObjectName(QStringLiteral("le_id"));
        le_id->setGeometry(QRect(252, 40, 241, 22));
        le_id->setStyleSheet(QStringLiteral(""));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(170, 90, 56, 16));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(160, 140, 56, 16));
        le_nom = new QLineEdit(groupBox_2);
        le_nom->setObjectName(QStringLiteral("le_nom"));
        le_nom->setGeometry(QRect(252, 90, 241, 22));
        le_nom->setStyleSheet(QStringLiteral(""));
        le_prenom = new QLineEdit(groupBox_2);
        le_prenom->setObjectName(QStringLiteral("le_prenom"));
        le_prenom->setGeometry(QRect(252, 140, 241, 22));
        le_prenom->setStyleSheet(QStringLiteral(""));
        pb_ajouter = new QPushButton(groupBox_2);
        pb_ajouter->setObjectName(QStringLiteral("pb_ajouter"));
        pb_ajouter->setGeometry(QRect(160, 520, 401, 51));
        pb_ajouter->setStyleSheet(QStringLiteral(""));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(110, 420, 121, 16));
        label_5->setStyleSheet(QLatin1String("font: 8pt \"MS Shell Dlg 2\";\n"
" "));
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(100, 250, 111, 20));
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(170, 190, 56, 21));
        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(110, 310, 131, 16));
        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(160, 360, 51, 20));
        le_nom_entreprise = new QLineEdit(groupBox_2);
        le_nom_entreprise->setObjectName(QStringLiteral("le_nom_entreprise"));
        le_nom_entreprise->setGeometry(QRect(252, 310, 241, 21));
        le_nom_entreprise->setStyleSheet(QStringLiteral(""));
        le_type_fournisseur = new QComboBox(groupBox_2);
        le_type_fournisseur->setObjectName(QStringLiteral("le_type_fournisseur"));
        le_type_fournisseur->setGeometry(QRect(250, 250, 241, 22));
        le_type_fournisseur->setStyleSheet(QStringLiteral(""));
        le_matiere_recyclee = new QComboBox(groupBox_2);
        le_matiere_recyclee->setObjectName(QStringLiteral("le_matiere_recyclee"));
        le_matiere_recyclee->setGeometry(QRect(250, 420, 241, 22));
        le_matiere_recyclee->setStyleSheet(QStringLiteral(""));
        le_contrat = new QComboBox(groupBox_2);
        le_contrat->setObjectName(QStringLiteral("le_contrat"));
        le_contrat->setGeometry(QRect(250, 360, 241, 22));
        le_contrat->setStyleSheet(QStringLiteral(""));
        le_sexe = new QComboBox(groupBox_2);
        le_sexe->setObjectName(QStringLiteral("le_sexe"));
        le_sexe->setGeometry(QRect(250, 200, 241, 22));
        le_sexe->setStyleSheet(QStringLiteral(""));
        le_quantite = new QLineEdit(groupBox_2);
        le_quantite->setObjectName(QStringLiteral("le_quantite"));
        le_quantite->setGeometry(QRect(250, 470, 241, 21));
        le_quantite->setStyleSheet(QStringLiteral(""));
        label_21 = new QLabel(groupBox_2);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(160, 470, 61, 16));
        label_21->setStyleSheet(QLatin1String("font: 8pt \"MS Shell Dlg 2\";\n"
" "));
        lineEdit_rfid = new QLineEdit(groupBox_2);
        lineEdit_rfid->setObjectName(QStringLiteral("lineEdit_rfid"));
        lineEdit_rfid->setGeometry(QRect(590, 260, 241, 22));
        lineEdit_rfid->setStyleSheet(QStringLiteral(""));
        pb_BackM = new QPushButton(groupBox_2);
        pb_BackM->setObjectName(QStringLiteral("pb_BackM"));
        pb_BackM->setGeometry(QRect(640, 500, 192, 28));
        tab_->addTab(tab, QString());
        widget = new QWidget();
        widget->setObjectName(QStringLiteral("widget"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(370, 60, 171, 41));
        label_2->setMinimumSize(QSize(0, 41));
        label_2->setMaximumSize(QSize(16777215, 41));
        label_2->setStyleSheet(QStringLiteral("font: 20pt \"MS Shell Dlg 2\";"));
        pb_supprimer = new QPushButton(widget);
        pb_supprimer->setObjectName(QStringLiteral("pb_supprimer"));
        pb_supprimer->setGeometry(QRect(340, 200, 192, 41));
        pb_supprimer->setStyleSheet(QStringLiteral(""));
        tab_fournisseur_3 = new QTableView(widget);
        tab_fournisseur_3->setObjectName(QStringLiteral("tab_fournisseur_3"));
        tab_fournisseur_3->setGeometry(QRect(30, 310, 841, 231));
        tab_fournisseur_3->setStyleSheet(QLatin1String(" /* Set background color for the entire page */\n"
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
        le_id_supp = new QComboBox(widget);
        le_id_supp->setObjectName(QStringLiteral("le_id_supp"));
        le_id_supp->setGeometry(QRect(190, 140, 461, 22));
        le_id_supp->setStyleSheet(QLatin1String("/* Set background color for the entire page */\n"
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
        tab_->addTab(widget, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tab_fournisseur = new QTableView(tab_2);
        tab_fournisseur->setObjectName(QStringLiteral("tab_fournisseur"));
        tab_fournisseur->setGeometry(QRect(60, 90, 851, 441));
        tab_fournisseur->setStyleSheet(QLatin1String("/* Set background color for the entire page */\n"
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
        pb_sort = new QPushButton(tab_2);
        pb_sort->setObjectName(QStringLiteral("pb_sort"));
        pb_sort->setGeometry(QRect(60, 10, 271, 31));
        pb_sort->setStyleSheet(QStringLiteral(""));
        pb_SortSexe = new QPushButton(tab_2);
        pb_SortSexe->setObjectName(QStringLiteral("pb_SortSexe"));
        pb_SortSexe->setGeometry(QRect(350, 10, 271, 31));
        pb_SortSexe->setStyleSheet(QStringLiteral(""));
        pb_SortDiscount = new QPushButton(tab_2);
        pb_SortDiscount->setObjectName(QStringLiteral("pb_SortDiscount"));
        pb_SortDiscount->setGeometry(QRect(630, 10, 271, 31));
        pb_SortDiscount->setStyleSheet(QStringLiteral(""));
        pb_SortQuantite = new QPushButton(tab_2);
        pb_SortQuantite->setObjectName(QStringLiteral("pb_SortQuantite"));
        pb_SortQuantite->setGeometry(QRect(350, 50, 271, 31));
        pb_SortQuantite->setStyleSheet(QStringLiteral(""));
        tab_->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        pb_modifier = new QPushButton(tab_3);
        pb_modifier->setObjectName(QStringLiteral("pb_modifier"));
        pb_modifier->setGeometry(QRect(460, 310, 351, 31));
        pb_modifier->setStyleSheet(QStringLiteral(""));
        label_10 = new QLabel(tab_3);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(470, 200, 101, 16));
        le_matiere_recyclee_2 = new QComboBox(tab_3);
        le_matiere_recyclee_2->setObjectName(QStringLiteral("le_matiere_recyclee_2"));
        le_matiere_recyclee_2->setGeometry(QRect(600, 260, 201, 22));
        le_matiere_recyclee_2->setStyleSheet(QStringLiteral("background-color: rgb(206, 206, 0);"));
        label_11 = new QLabel(tab_3);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(510, 80, 56, 16));
        le_contrat_2 = new QComboBox(tab_3);
        le_contrat_2->setObjectName(QStringLiteral("le_contrat_2"));
        le_contrat_2->setGeometry(QRect(600, 80, 201, 22));
        le_contrat_2->setStyleSheet(QStringLiteral("background-color: rgb(206, 206, 0);"));
        label_12 = new QLabel(tab_3);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(90, 80, 41, 21));
        label_12->setStyleSheet(QStringLiteral("font: 9pt \"MS Shell Dlg 2\";"));
        label_13 = new QLabel(tab_3);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(70, 200, 56, 16));
        le_sexe_2 = new QComboBox(tab_3);
        le_sexe_2->setObjectName(QStringLiteral("le_sexe_2"));
        le_sexe_2->setGeometry(QRect(150, 260, 201, 22));
        le_sexe_2->setStyleSheet(QStringLiteral("background-color: rgb(206, 206, 0);"));
        label_14 = new QLabel(tab_3);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(80, 140, 56, 16));
        le_id_2 = new QLineEdit(tab_3);
        le_id_2->setObjectName(QStringLiteral("le_id_2"));
        le_id_2->setGeometry(QRect(150, 80, 201, 22));
        le_id_2->setStyleSheet(QStringLiteral("background-color: rgb(208, 208, 103);"));
        le_nom_2 = new QLineEdit(tab_3);
        le_nom_2->setObjectName(QStringLiteral("le_nom_2"));
        le_nom_2->setGeometry(QRect(150, 140, 201, 22));
        le_nom_2->setStyleSheet(QStringLiteral("background-color: rgb(208, 208, 103);"));
        le_prenom_2 = new QLineEdit(tab_3);
        le_prenom_2->setObjectName(QStringLiteral("le_prenom_2"));
        le_prenom_2->setGeometry(QRect(150, 200, 201, 21));
        le_prenom_2->setStyleSheet(QStringLiteral("background-color: rgb(206, 206, 0);"));
        label_15 = new QLabel(tab_3);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(460, 140, 101, 16));
        label_16 = new QLabel(tab_3);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(80, 260, 56, 21));
        label_17 = new QLabel(tab_3);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(460, 260, 121, 16));
        label_17->setStyleSheet(QLatin1String("font: 8pt \"MS Shell Dlg 2\";\n"
" "));
        le_nom_entreprise_2 = new QLineEdit(tab_3);
        le_nom_entreprise_2->setObjectName(QStringLiteral("le_nom_entreprise_2"));
        le_nom_entreprise_2->setGeometry(QRect(600, 200, 201, 21));
        le_nom_entreprise_2->setStyleSheet(QStringLiteral("background-color: rgb(206, 206, 0);"));
        le_type_fournisseur_2 = new QComboBox(tab_3);
        le_type_fournisseur_2->setObjectName(QStringLiteral("le_type_fournisseur_2"));
        le_type_fournisseur_2->setGeometry(QRect(600, 140, 201, 22));
        le_type_fournisseur_2->setStyleSheet(QStringLiteral("background-color: rgb(206, 206, 0);"));
        tab_fournisseur_2 = new QTableView(tab_3);
        tab_fournisseur_2->setObjectName(QStringLiteral("tab_fournisseur_2"));
        tab_fournisseur_2->setGeometry(QRect(40, 360, 821, 191));
        tab_fournisseur_2->setStyleSheet(QLatin1String("QLineEdit {\n"
"	font: 8pt \"MS Shell Dlg 2\";\n"
"    background-color: #E5FFD5; /* Light Green */\n"
"    border: 1.5px solid #80C783; /* Light Green Border */\n"
"    border-radius: 5px;\n"
"    padding: 2px;\n"
"    selection-background-color: #A0EFA7; /* Light Green Selection */\n"
"}\n"
"\n"
"/* Labels */\n"
"QLabel {\n"
"    color: #006400; /* Dark Green Text Color */\n"
"    background-color: transparent; /* Transparent Background */\n"
"}\n"
"\n"
"/* Push Buttons */\n"
"QPushButton\n"
"{\n"
"     background-color: green;\n"
"     border-style: outset;\n"
"     border-width: 2px;\n"
"     border-radius: 10px;\n"
"    \n"
"	border-color: rgb(0, 85, 0);\n"
"     font: bold 14px;\n"
"     min-width: 10em;\n"
"     padding: 6px;\n"
" \n"
"}\n"
"\n"
"\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #A0FFB7; /* Light Green Hover Color */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #6FD990; /* Light Green Pressed Color */\n"
"}"));
        le_quantite_2 = new QLineEdit(tab_3);
        le_quantite_2->setObjectName(QStringLiteral("le_quantite_2"));
        le_quantite_2->setGeometry(QRect(150, 310, 201, 21));
        le_quantite_2->setStyleSheet(QStringLiteral("background-color: rgb(206, 206, 0);"));
        label_22 = new QLabel(tab_3);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(70, 310, 51, 16));
        label_22->setStyleSheet(QLatin1String("font: 8pt \"MS Shell Dlg 2\";\n"
" "));
        tab_->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        generate_pdf = new QPushButton(tab_4);
        generate_pdf->setObjectName(QStringLiteral("generate_pdf"));
        generate_pdf->setGeometry(QRect(300, 400, 261, 31));
        generate_pdf->setStyleSheet(QStringLiteral(""));
        label_18 = new QLabel(tab_4);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(240, 340, 431, 20));
        label_18->setStyleSheet(QStringLiteral("font: 14pt \"MS Shell Dlg 2\";"));
        label_19 = new QLabel(tab_4);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(230, 70, 471, 20));
        label_19->setStyleSheet(QStringLiteral("font: 14pt \"MS Shell Dlg 2\";"));
        display_Charts = new QPushButton(tab_4);
        display_Charts->setObjectName(QStringLiteral("display_Charts"));
        display_Charts->setGeometry(QRect(310, 130, 261, 31));
        display_Charts->setStyleSheet(QStringLiteral(""));
        display_Charts_Evaluation = new QPushButton(tab_4);
        display_Charts_Evaluation->setObjectName(QStringLiteral("display_Charts_Evaluation"));
        display_Charts_Evaluation->setGeometry(QRect(310, 190, 261, 31));
        display_Charts_Evaluation->setStyleSheet(QStringLiteral(""));
        display_Charts_matiere_recyclee = new QPushButton(tab_4);
        display_Charts_matiere_recyclee->setObjectName(QStringLiteral("display_Charts_matiere_recyclee"));
        display_Charts_matiere_recyclee->setGeometry(QRect(310, 240, 261, 31));
        display_Charts_matiere_recyclee->setStyleSheet(QStringLiteral(""));
        tab_->addTab(tab_4, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        label_20 = new QLabel(tab_6);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(330, 60, 311, 41));
        label_20->setMinimumSize(QSize(0, 41));
        label_20->setMaximumSize(QSize(16777215, 41));
        label_20->setStyleSheet(QStringLiteral("font: 20pt \"MS Shell Dlg 2\";"));
        le_search = new QLineEdit(tab_6);
        le_search->setObjectName(QStringLiteral("le_search"));
        le_search->setGeometry(QRect(220, 140, 521, 31));
        le_search->setStyleSheet(QLatin1String("/* Set background color for the entire page */\n"
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
        bp_search = new QPushButton(tab_6);
        bp_search->setObjectName(QStringLiteral("bp_search"));
        bp_search->setGeometry(QRect(380, 200, 192, 41));
        bp_search->setStyleSheet(QStringLiteral(""));
        search_table_view = new QTableView(tab_6);
        search_table_view->setObjectName(QStringLiteral("search_table_view"));
        search_table_view->setGeometry(QRect(90, 290, 771, 192));
        search_table_view->setStyleSheet(QLatin1String("/* Set background color for the entire page */\n"
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
        tab_->addTab(tab_6, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        le_id_3 = new QComboBox(tab_5);
        le_id_3->setObjectName(QStringLiteral("le_id_3"));
        le_id_3->setGeometry(QRect(310, 170, 261, 22));
        le_quantite_3 = new QComboBox(tab_5);
        le_quantite_3->setObjectName(QStringLiteral("le_quantite_3"));
        le_quantite_3->setGeometry(QRect(310, 290, 251, 22));
        label_23 = new QLabel(tab_5);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(420, 120, 56, 16));
        label_23->setStyleSheet(QStringLiteral("font: 12pt \"MS Shell Dlg 2\";"));
        label_24 = new QLabel(tab_5);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(410, 240, 81, 16));
        label_24->setStyleSheet(QStringLiteral("font: 12pt \"MS Shell Dlg 2\";"));
        le_matiere_recyclee_3 = new QComboBox(tab_5);
        le_matiere_recyclee_3->setObjectName(QStringLiteral("le_matiere_recyclee_3"));
        le_matiere_recyclee_3->setGeometry(QRect(310, 400, 251, 22));
        label_25 = new QLabel(tab_5);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setGeometry(QRect(410, 360, 101, 16));
        label_25->setStyleSheet(QStringLiteral("font: 12pt \"MS Shell Dlg 2\";"));
        addAchatButton = new QPushButton(tab_5);
        addAchatButton->setObjectName(QStringLiteral("addAchatButton"));
        addAchatButton->setGeometry(QRect(310, 500, 261, 31));
        addAchatButton->setStyleSheet(QStringLiteral(""));
        label_28 = new QLabel(tab_5);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setGeometry(QRect(380, 20, 111, 41));
        label_28->setMinimumSize(QSize(0, 41));
        label_28->setMaximumSize(QSize(16777215, 41));
        label_28->setStyleSheet(QStringLiteral("font: 20pt \"MS Shell Dlg 2\";"));
        tab_->addTab(tab_5, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QStringLiteral("tab_7"));
        le_id_4 = new QComboBox(tab_7);
        le_id_4->setObjectName(QStringLiteral("le_id_4"));
        le_id_4->setGeometry(QRect(240, 200, 461, 22));
        label_26 = new QLabel(tab_7);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setGeometry(QRect(180, 200, 56, 16));
        label_27 = new QLabel(tab_7);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setGeometry(QRect(200, 40, 521, 41));
        label_27->setMinimumSize(QSize(0, 41));
        label_27->setMaximumSize(QSize(16777215, 41));
        label_27->setStyleSheet(QStringLiteral("font: 20pt \"MS Shell Dlg 2\";"));
        bp_evaluation = new QPushButton(tab_7);
        bp_evaluation->setObjectName(QStringLiteral("bp_evaluation"));
        bp_evaluation->setGeometry(QRect(210, 350, 192, 41));
        bp_evaluation->setStyleSheet(QStringLiteral(""));
        bp_discount = new QPushButton(tab_7);
        bp_discount->setObjectName(QStringLiteral("bp_discount"));
        bp_discount->setGeometry(QRect(560, 350, 192, 41));
        bp_discount->setStyleSheet(QStringLiteral(""));
        tab_->addTab(tab_7, QString());
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1017, 26));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tab_->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Gestion des Fournisseurs", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Ajout :", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "ID", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "Nom", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "Prenom", Q_NULLPTR));
        pb_ajouter->setText(QApplication::translate("MainWindow", "Ajouter", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "Matiere-Recyclee", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "Type-Fournisseur", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "Sexe", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "Nom-Entreprise", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "Contrat", Q_NULLPTR));
        label_21->setText(QApplication::translate("MainWindow", "Quantite", Q_NULLPTR));
        pb_BackM->setText(QApplication::translate("MainWindow", "BACK MENU", Q_NULLPTR));
        tab_->setTabText(tab_->indexOf(tab), QApplication::translate("MainWindow", "Ajouter Fournisseur ", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Identifiant", Q_NULLPTR));
        pb_supprimer->setText(QApplication::translate("MainWindow", "supprimer", Q_NULLPTR));
        tab_->setTabText(tab_->indexOf(widget), QApplication::translate("MainWindow", "Supprimer Fournissuer", Q_NULLPTR));
        pb_sort->setText(QApplication::translate("MainWindow", "Sort List by : ID", Q_NULLPTR));
        pb_SortSexe->setText(QApplication::translate("MainWindow", "Sort List by : SEXE", Q_NULLPTR));
        pb_SortDiscount->setText(QApplication::translate("MainWindow", "Sort List by : DISCOUNT", Q_NULLPTR));
        pb_SortQuantite->setText(QApplication::translate("MainWindow", "Sort List by : QUANTITE", Q_NULLPTR));
        tab_->setTabText(tab_->indexOf(tab_2), QApplication::translate("MainWindow", "Afficher Fournisseur ", Q_NULLPTR));
        pb_modifier->setText(QApplication::translate("MainWindow", "MODIFIER", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "Nom-Entreprise", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "Contrat", Q_NULLPTR));
        label_12->setText(QApplication::translate("MainWindow", "ID", Q_NULLPTR));
        label_13->setText(QApplication::translate("MainWindow", "Prenom", Q_NULLPTR));
        label_14->setText(QApplication::translate("MainWindow", "Nom", Q_NULLPTR));
        label_15->setText(QApplication::translate("MainWindow", "Type-Fournisseur", Q_NULLPTR));
        label_16->setText(QApplication::translate("MainWindow", "Sexe", Q_NULLPTR));
        label_17->setText(QApplication::translate("MainWindow", "Matiere-Recyclee", Q_NULLPTR));
        label_22->setText(QApplication::translate("MainWindow", "Quantite", Q_NULLPTR));
        tab_->setTabText(tab_->indexOf(tab_3), QApplication::translate("MainWindow", "Modifier Fournisseur", Q_NULLPTR));
        generate_pdf->setText(QApplication::translate("MainWindow", "Generate-PDF", Q_NULLPTR));
        label_18->setText(QApplication::translate("MainWindow", "PRESS THIS BUTTON TO GET ALL DATA ", Q_NULLPTR));
        label_19->setText(QApplication::translate("MainWindow", "PRESS THIS BUTTON TO GET THE CHART", Q_NULLPTR));
        display_Charts->setText(QApplication::translate("MainWindow", "CHART SEXE", Q_NULLPTR));
        display_Charts_Evaluation->setText(QApplication::translate("MainWindow", "CHART  EVALUATION", Q_NULLPTR));
        display_Charts_matiere_recyclee->setText(QApplication::translate("MainWindow", "CHART MATIERE_RECYCLEE", Q_NULLPTR));
        tab_->setTabText(tab_->indexOf(tab_4), QApplication::translate("MainWindow", "Stastistics & Documentation", Q_NULLPTR));
        label_20->setText(QApplication::translate("MainWindow", "ID or nom or prenom ", Q_NULLPTR));
        bp_search->setText(QApplication::translate("MainWindow", "Recherche", Q_NULLPTR));
        tab_->setTabText(tab_->indexOf(tab_6), QApplication::translate("MainWindow", "Recherche Fournissuer", Q_NULLPTR));
        label_23->setText(QApplication::translate("MainWindow", "ID", Q_NULLPTR));
        label_24->setText(QApplication::translate("MainWindow", "Quantite", Q_NULLPTR));
        label_25->setText(QApplication::translate("MainWindow", "matriere", Q_NULLPTR));
        addAchatButton->setText(QApplication::translate("MainWindow", "ACHAT", Q_NULLPTR));
        label_28->setText(QApplication::translate("MainWindow", "ACHAT ", Q_NULLPTR));
        tab_->setTabText(tab_->indexOf(tab_5), QApplication::translate("MainWindow", "Achat Fournisseur", Q_NULLPTR));
        label_26->setText(QApplication::translate("MainWindow", "ID", Q_NULLPTR));
        label_27->setText(QApplication::translate("MainWindow", "DISPLAY : EVALUATION DISCOUNT ", Q_NULLPTR));
        bp_evaluation->setText(QApplication::translate("MainWindow", "EVALUATION", Q_NULLPTR));
        bp_discount->setText(QApplication::translate("MainWindow", "DISCOUNT", Q_NULLPTR));
        tab_->setTabText(tab_->indexOf(tab_7), QApplication::translate("MainWindow", "Evaluation & Discount", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
