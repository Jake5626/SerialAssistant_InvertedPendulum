#include "pid.h"
#include "ui_pid.h"
#include "mainwindow.h"
#include "qdebug.h"

PID::PID(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PID)
{
    ui->setupUi(this);
    //connect(ui->pushButton_DMinus,SIGNAL(clicked()),this,SLOT(PIDChange()));
}


PID::~PID()
{
    delete ui;
}

void PID::on_pushButton_confirm_clicked()
{
    int group = ui->comboBox_Group->currentIndex();
    emit PIDSignal(group);
//    QString P = ui->textEdit_P->toPlainText();
//    //qDebug()<<P;
//    QString I = ui->textEdit_I->toPlainText();
//    QString D = ui->textEdit_D->toPlainText();
    //qDebug()<<P+I+D;
//    emit PIDSignal(P+I+D);
//    qDebug()<<P+I+D;

}


void PID::on_pushButton_PPlus_clicked()
{
    emit PPlusSignal(3);
    //return "PPlus signal";
}



void PID::on_pushButton_PMinus_clicked()
{
    emit PMinusSignal(4);
}


void PID::on_pushButton_IPlus_clicked()
{
    emit IPlusSignal(5);
}



void PID::on_pushButton_IMinus_clicked()
{
    emit IMinusSignal(6);
}



void PID::on_pushButton_DPlus_clicked()
{
    emit DPlusSignal(7);
}



void PID::on_pushButton_DMinus_clicked()
{
    emit DMinusSignal(8);
}
