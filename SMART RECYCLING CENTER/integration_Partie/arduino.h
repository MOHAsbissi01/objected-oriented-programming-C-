#ifndef ARDUINO_H
#define ARDUINO_H

#include <QByteArray>
#include <QSerialPort>
#include <QtSerialPort/QSerialPort>
#include <QDebug>
#include <QSqlQuery>
#include <QSerialPortInfo>
#include <QDebug>
#include <QErrorMessage>
#include "connection.h"

class Arduino : public QObject
{
    Q_OBJECT

public:
    Arduino();
    int connect_arduino();
    int close_arduino();
    int write_to_arduino(QString);
    QByteArray read_from_arduino2();
    QSerialPort* getserial();
    void write_to_arduino2(QString d);
    void write_to_arduino(QByteArray d);

    bool isRFIDRegistered(QString RFID);
     QString getarduino_port_name();

      QByteArray receivedData;

      QString mfrc522_uid;

signals:
     void arduinoDataReceived(const QByteArray &data);

public slots:
    void processRFIDData();
      void read_from_arduino();
private:
    QSerialPort* serial;
    static const quint16 arduino_uno_vendor_id = 9025;
    static const quint16 arduino_uno_producy_id = 67;
    QString arduino_port_name;
    bool arduino_is_available;
    QByteArray data;
    QByteArray serialData;
    QString serialBuffer;
};

#endif // ARDUINO_H
