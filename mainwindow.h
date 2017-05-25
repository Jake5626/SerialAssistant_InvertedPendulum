#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public slots:
    void init();
    void DataReceive();

private slots:
    void SerialPortScan();

    void on_pushButton_connect_clicked();

    void on_pushButton_send_clicked();

private:
    Ui::MainWindow *ui;


    bool isConnected = false;
    QSerialPort serial;
};

#endif // MAINWINDOW_H
