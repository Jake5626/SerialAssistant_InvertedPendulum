#include "pid.h"
#include "ui_pid.h"
#include "mainwindow.h"
#include "qdebug.h"

PID::PID(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PID)
{
    //MainWindow *mainw = new MainWindow();
    ui->setupUi(this);
//    connect(SIGNAL(PIDSignal()),mainw->sendPID(),SLOT(sendPID()));
}


PID::~PID()
{
    delete ui;
}

void PID::on_pushButton_confirm_clicked()
{
    QString P = ui->textEdit_P->toPlainText();
    //qDebug()<<P;
    QString I = ui->textEdit_I->toPlainText();
    QString D = ui->textEdit_D->toPlainText();
    //qDebug()<<P+I+D;
    emit PIDSignal(P+I+D);
    qDebug()<<P+I+D;

}
