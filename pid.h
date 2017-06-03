#ifndef PID_H
#define PID_H

#include <QWidget>
#include "mainwindow.h"

namespace Ui {
class PID;
}

class PID : public QWidget
{
    Q_OBJECT

public:
    explicit PID(QWidget *parent = 0);
    ~PID();
//    MainWindow *mainw;

signals:
    void PPlusSignal(QString);
    void PMinusSignal(QString);
    void IPlusSignal(QString);
    void IMinusSignal(QString);
    void DPlusSignal(QString);
    void DMinusSignal(QString);

private:
    Ui::PID *ui;
    //MainWindow *mainw;

private slots:
    //void PIDChange();
    void on_pushButton_PPlus_clicked();
    void on_pushButton_PMinus_clicked();
    void on_pushButton_IPlus_clicked();
    void on_pushButton_IMinus_clicked();
    void on_pushButton_DPlus_clicked();
    void on_pushButton_DMinus_clicked();
};

#endif // PID_H
