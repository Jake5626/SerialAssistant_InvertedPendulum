#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include <pid.h>

#include <qwt.h>
#include <qwt_plot.h>
#include <qwt_system_clock.h>
#include <qwt_plot_curve.h>
#include <QVector>
#include <QPointF>


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
    void sendPID(QString pid);

private slots:
    void SerialPortScan();

    void on_pushButton_connect_clicked();

    void on_pushButton_send_clicked();

    void on_pushButton_PIDSetting_clicked();

private:
    Ui::MainWindow *ui;
    bool isConnected = false;
    QSerialPort serial;
    QString PIDOrder;
    QwtInterval interval;
    void plotCurve();
};

#endif // MAINWINDOW_H
