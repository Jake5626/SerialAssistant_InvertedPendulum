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
    void PIDSignal(int);
    void PPlusSignal(int);
    void PMinusSignal(int);
    void IPlusSignal(int);
    void IMinusSignal(int);
    void DPlusSignal(int);
    void DMinusSignal(int);

public slots:
    void on_pushButton_confirm_clicked();

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
