#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "ui_mainwindow.h"
#include <QMainWindow>
#include"fournisseur.h"
#include "connection.h"
#include"arduino.h"

#include <QChartView>
#include <QPieSeries>
#include <QPieSlice>
#include <QChart>

#include <QVBoxLayout>
#include <QMessageBox>

#include <QIntValidator>
#include <QSqlQuery>
#include <QtDebug>
#include <QSqlError>
#include <QObject>

#include <QFileDialog>
#include <QPrinter>
#include <QPainter>
#include <QPdfWriter>
#include <QFileDialog>
#include <QFont>

#include <QGraphicsScene>
#include <QGraphicsView>
#include <QMap>
#include <cmath>
#include <QtMath>
#include <QTextTable>
#include <QTextDocument>
#include <QListWidgetItem>
#include <QMainWindow>
#include <QTimer>
#include <QTime>


#include <QSerialPort>
#include <QSerialPortInfo>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

     bool isRFIDRegistered(QString RFID);

       bool rfidProcessing = false;


public slots :

    void processRFIDData(const QByteArray &data) ;
    bool isRFIDCardAuthorized(const QString &rfidData);

    void displayMessageLCD(const QString & message) ;


    bool getNomPrenomFromDatabase(const QString &rfidData, QString &nom, QString &prenom);

private slots:
     void on_pb_ajouter_clicked();

     void on_pb_supprimer_clicked();

     void on_pb_modifier_clicked();

     void on_pb_sort_clicked();

     void on_generate_pdf_clicked();

     void displayCharts();

     void on_display_Charts_clicked();

     void on_bp_search_clicked();

     void searchAndSelectId() ;

     void initializeComboBox() ;

     void on_addAchatButton_clicked();



     void on_bp_evaluation_clicked();

     void on_bp_discount_clicked();

     void on_pb_SortSexe_clicked();

     void on_pb_SortDiscount_clicked();

     void on_pb_SortQuantite_clicked();



     void on_display_Charts_Evaluation_clicked();

     void on_display_Charts_matiere_recyclee_clicked();

     Qt::GlobalColor getColorForMatiere(const QString& matiere_recyclee);



     void setStyles();


      void update_label();



      void on_pb_BackM_clicked();

private:

    Ui::MainWindow *ui;
    Fournisseur F ;

    Arduino arduino ;

     QByteArray buffer;

     QSqlDatabase db;



};

#endif // MAINWINDOW_H
