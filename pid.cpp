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

void PID::on_pushButton_PPlus_clicked()
{
    QString order;
    int group = ui->comboBox_Group->currentIndex();
    int acc = ui->comboBox_accuracy->currentIndex();
    switch (group) {
    case 0:order.append("00");break;
    case 1:order.append("03");break;
    case 2:order.append("06");break;
    default:
        break;
    }
    switch (acc) {
    case 0:order.append("00");break;
    case 1:order.append("01");break;
    case 2:order.append("02");break;
    case 3:order.append("03");break;
    case 4:order.append("04");break;
    default:
        break;
    }
    order.append("00");
    emit PPlusSignal(order);
    //return "PPlus signal";
}



void PID::on_pushButton_PMinus_clicked()
{
    QString order;
    int group = ui->comboBox_Group->currentIndex();
    int acc = ui->comboBox_accuracy->currentIndex();
    switch (group) {
    case 0:order.append("00");break;
    case 1:order.append("03");break;
    case 2:order.append("06");break;
    default:
        break;
    }
    switch (acc) {
    case 0:order.append("00");break;
    case 1:order.append("01");break;
    case 2:order.append("02");break;
    case 3:order.append("03");break;
    case 4:order.append("04");break;
    default:
        break;
    }
    order.append("01");
    emit PPlusSignal(order);
}


void PID::on_pushButton_IPlus_clicked()
{
    QString order;
    int group = ui->comboBox_Group->currentIndex();
    int acc = ui->comboBox_accuracy->currentIndex();
    switch (group) {
    case 0:order.append("01");break;
    case 1:order.append("04");break;
    case 2:order.append("07");break;
    default:
        break;
    }
    switch (acc) {
    case 0:order.append("00");break;
    case 1:order.append("01");break;
    case 2:order.append("02");break;
    case 3:order.append("03");break;
    case 4:order.append("04");break;
    default:
        break;
    }
    order.append("00");
    emit PPlusSignal(order);
}



void PID::on_pushButton_IMinus_clicked()
{
    QString order;
    int group = ui->comboBox_Group->currentIndex();
    int acc = ui->comboBox_accuracy->currentIndex();
    switch (group) {
    case 0:order.append("01");break;
    case 1:order.append("04");break;
    case 2:order.append("07");break;
    default:
        break;
    }
    switch (acc) {
    case 0:order.append("00");break;
    case 1:order.append("01");break;
    case 2:order.append("02");break;
    case 3:order.append("03");break;
    case 4:order.append("04");break;
    default:
        break;
    }
    order.append("01");
    emit PPlusSignal(order);
}



void PID::on_pushButton_DPlus_clicked()
{
    QString order;
    int group = ui->comboBox_Group->currentIndex();
    int acc = ui->comboBox_accuracy->currentIndex();
    switch (group) {
    case 0:order.append("02");break;
    case 1:order.append("05");break;
    case 2:order.append("08");break;
    default:
        break;
    }
    switch (acc) {
    case 0:order.append("00");break;
    case 1:order.append("01");break;
    case 2:order.append("02");break;
    case 3:order.append("03");break;
    case 4:order.append("04");break;
    default:
        break;
    }
    order.append("00");
    emit PPlusSignal(order);
}



void PID::on_pushButton_DMinus_clicked()
{
    QString order;
    int group = ui->comboBox_Group->currentIndex();
    int acc = ui->comboBox_accuracy->currentIndex();
    switch (group) {
    case 0:order.append("02");break;
    case 1:order.append("05");break;
    case 2:order.append("08");break;
    default:
        break;
    }
    switch (acc) {
    case 0:order.append("00");break;
    case 1:order.append("01");break;
    case 2:order.append("02");break;
    case 3:order.append("03");break;
    case 4:order.append("04");break;
    default:
        break;
    }
    order.append("01");
    emit PPlusSignal(order);
}
