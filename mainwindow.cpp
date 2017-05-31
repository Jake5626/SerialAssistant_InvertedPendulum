#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QtSerialPort/qserialport.h"
#include "QtSerialPort/qserialportinfo.h"
#include "qdebug.h"
#include "qmessagebox.h"
#include "pid.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    PID *pidpage = new PID;
    init();
    connect(&serial,SIGNAL(readyRead()),this,SLOT(DataReceive()));

    //qDebug()<<connect(pidpage,SIGNAL(PPlusSignal(QString)),this,SLOT(sendPID(QString)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::init(){
    SerialPortScan();
    ui->textEdit_dataRec->setReadOnly(true);
}

void MainWindow::SerialPortScan(){
    foreach (const QSerialPortInfo &info, QSerialPortInfo::availablePorts()) {
        ui->comboBox_SerialPort->addItem(info.portName());
    }
}

void MainWindow::DataReceive(){
    qDebug()<<"ok";
    if(ui->checkBox_hex->isChecked()){
        ui->textEdit_dataRec->insertPlainText(serial.readAll().toHex());
    }else{
        ui->textEdit_dataRec->insertPlainText(serial.readAll());
        qDebug()<<serial.readAll();
    }
}

void MainWindow::on_pushButton_connect_clicked()
{
    //qDebug()<<ui->comboBox_BaudRate->currentIndex();
    if(isConnected==false){

        serial.setPortName(ui->comboBox_SerialPort->currentText());

        switch (ui->comboBox_BaudRate->currentIndex()) {
        case 0:serial.setBaudRate(QSerialPort::Baud1200);break;
        case 1:serial.setBaudRate(QSerialPort::Baud2400);break;
        case 2:serial.setBaudRate(QSerialPort::Baud4800);break;
        case 3:serial.setBaudRate(QSerialPort::Baud9600);break;
        case 4:serial.setBaudRate(QSerialPort::Baud19200);break;
        case 5:serial.setBaudRate(QSerialPort::Baud38400);break;
        case 6:serial.setBaudRate(QSerialPort::Baud57600);break;
        case 7:serial.setBaudRate(QSerialPort::Baud115200);break;
        default:serial.setBaudRate(QSerialPort::Baud9600);
            break;
        }
        switch (ui->comboBox_CheckBit->currentIndex()) {
        case 0:serial.setParity(QSerialPort::NoParity);break;
        case 1:serial.setParity(QSerialPort::OddParity);break;
        case 2:serial.setParity(QSerialPort::EvenParity);break;
        case 3:serial.setParity(QSerialPort::SpaceParity);break;
        case 4:serial.setParity(QSerialPort::MarkParity);break;
        default:
            break;
        }
        switch (ui->comboBox_StopBit->currentIndex()) {
        case 0:serial.setStopBits(QSerialPort::OneStop);break;
        case 1:serial.setBaudRate(QSerialPort::TwoStop);break;
        default:
            break;
        }
        switch (ui->comboBox_DataBit->currentIndex()) {
        case 0:serial.setDataBits(QSerialPort::Data5);break;
        case 1:serial.setDataBits(QSerialPort::Data6);break;
        case 2:serial.setDataBits(QSerialPort::Data7);break;
        case 3:serial.setDataBits(QSerialPort::Data8);break;
        default:
            break;
        }

        isConnected = true;

        if(!serial.open(QIODevice::ReadWrite)){
            QMessageBox::critical(this,"error",serial.errorString(),QMessageBox::Yes);
        }else{
            ui->comboBox_BaudRate->setEnabled(false);
            ui->comboBox_CheckBit->setEnabled(false);
            ui->comboBox_DataBit->setEnabled(false);
            ui->comboBox_SerialPort->setEnabled(false);
            ui->comboBox_StopBit->setEnabled(false);
            ui->pushButton_connect->setText("断开串口");
        }
    }else{
        isConnected = false;
        serial.close();
        ui->comboBox_BaudRate->setEnabled(true);
        ui->comboBox_CheckBit->setEnabled(true);
        ui->comboBox_DataBit->setEnabled(true);
        ui->comboBox_SerialPort->setEnabled(true);
        ui->comboBox_StopBit->setEnabled(true);
        ui->pushButton_connect->setText("连接串口");
    }

}

void MainWindow::on_pushButton_send_clicked()
{
    if(serial.isOpen()){
        QByteArray send = ui->textEdit_dataSend->toPlainText().toLatin1();
        serial.write(send,send.length());
    }
}

void MainWindow::on_pushButton_PIDSetting_clicked()
{
    PID *pidpage = new PID;
    connect(pidpage,SIGNAL(PIDSignal(QString)),this,SLOT(sendPID(int)));
    connect(pidpage,SIGNAL(PPlusSignal(int)),this,SLOT(sendPID(int)));
    connect(pidpage,SIGNAL(PMinusSignal(int)),this,SLOT(sendPID(int)));
    connect(pidpage,SIGNAL(IPlusSignal(int)),this,SLOT(sendPID(int)));
    connect(pidpage,SIGNAL(IMinusSignal(int)),this,SLOT(sendPID(int)));
    connect(pidpage,SIGNAL(DPlusSignal(int)),this,SLOT(sendPID(int)));
    connect(pidpage,SIGNAL(DMinusSignal(int)),this,SLOT(sendPID(int)));
    pidpage->show();
}

void MainWindow::sendPID(int pid){
    qDebug()<<pid;

    switch (pid) {
    case 0:
        break;
    case 1:
        break;
    case 2:
        break;
    case 3:
        qDebug()<<"ok";
        break;
    case 4:
        break;
    case 5:
        break;
    case 6:
        break;
    case 7:
        break;
    case 8:
        break;
    default:
        break;
    }
}
