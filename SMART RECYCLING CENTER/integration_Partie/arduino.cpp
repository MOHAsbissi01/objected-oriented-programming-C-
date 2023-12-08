#include "arduino.h"
#include "connection.h"

Arduino::Arduino() {
    arduino_is_available = false;

    foreach (const QSerialPortInfo &info, QSerialPortInfo::availablePorts()) {
        if (info.hasVendorIdentifier() && info.hasProductIdentifier() &&
            info.vendorIdentifier() == arduino_uno_vendor_id &&
            info.productIdentifier() == arduino_uno_producy_id) {
            arduino_port_name = info.portName();
            arduino_is_available = true;
            break;
        }
    }

    if (arduino_is_available) {
        serial = new QSerialPort(this);
        serial->setPortName(arduino_port_name);
        serial->open(QSerialPort::ReadWrite);
        serial->setBaudRate(QSerialPort::Baud9600);
        serial->setDataBits(QSerialPort::Data8);
        serial->setParity(QSerialPort::NoParity);
        serial->setStopBits(QSerialPort::OneStop);
        QObject::connect(serial, SIGNAL(readyRead()), this, SLOT(read_from_arduino()));
    }
}
int Arduino::connect_arduino()
{ // recherche du port sur lequel la carte arduino identifée par  arduino_uno_vendor_id
    // est connectée
    foreach (const QSerialPortInfo &serial_port_info, QSerialPortInfo::availablePorts())
    {
        if (serial_port_info.hasVendorIdentifier() && serial_port_info.hasProductIdentifier())
        {
            if (serial_port_info.vendorIdentifier() == arduino_uno_vendor_id && serial_port_info.productIdentifier() == arduino_uno_producy_id)
            {
                arduino_is_available = true;
                arduino_port_name = serial_port_info.portName();
            }
        }
    }
    qDebug() << "arduino_port_name is :" << arduino_port_name;
    if (arduino_is_available)
    { // configuration de la communication ( débit...)
        serial->setPortName(arduino_port_name);
        if (serial->open(QSerialPort::ReadWrite))
        {
            serial->setBaudRate(QSerialPort::Baud9600); // débit : 9600 bits/s
            serial->setDataBits(QSerialPort::Data8);    // Longueur des données : 8 bits,
            serial->setParity(QSerialPort::NoParity);   // 1 bit de parité optionnel
            serial->setStopBits(QSerialPort::OneStop);  // Nombre de bits de stop : 1
            serial->setFlowControl(QSerialPort::NoFlowControl);
            return 0;
        }
        return 1;
    }
    return -1;
}


QString Arduino::getarduino_port_name() {
    return arduino_port_name;
}

int Arduino::close_arduino() {
    serial->close();
    return 0;
}

int Arduino::write_to_arduino(QString d) {
    if (serial->isWritable()) {
        serial->write(d.toStdString().c_str());
        return 0;
    }
    return 1;
}

void Arduino::read_from_arduino() {
    QByteArray requestData = serial->readAll();
    emit arduinoDataReceived(requestData);
}

QByteArray Arduino::read_from_arduino2()
{
    if (serial->bytesAvailable() > 0)
    {
        data = serial->readAll(); // Retrieve the received data
        return data;
    }

     return QByteArray();
}


QSerialPort* Arduino::getserial() {
    return serial;
}


bool Arduino::isRFIDRegistered(QString RFID) {

    QSqlQuery query;
    query.prepare("SELECT RFID FROM FOURNISSEUR WHERE RFID = :rfid");
    query.bindValue(":rfid", RFID);

    if (query.exec() && query.next()) {
         return true;
    } else {
         qDebug() << "RFID error:" << query.lastError().text();
        return false;
    }
}



void Arduino::processRFIDData()
{
    QByteArray data = read_from_arduino2();
    emit arduinoDataReceived(data);
}
/*
bool Arduino::isRFIDRegistered(QString RFID) {
    QSqlQuery query;
    query.prepare("SELECT RFID FROM FOURNISSEUR WHERE RFID = :rfid");
    query.bindValue(":rfid", RFID);

    if (query.exec() && query.next()) {
        // If the query is successful and there is a result, RFID is registered
        return true;
    } else {
        // RFID is not registered or an error occurred
        qDebug() << "RFID not registered or database error:" << query.lastError().text();
        return false;
    }
}
*/
