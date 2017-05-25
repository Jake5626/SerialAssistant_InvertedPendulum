#ifndef PID_H
#define PID_H

#include <QWidget>

namespace Ui {
class PID;
}

class PID : public QWidget
{
    Q_OBJECT

public:
    explicit PID(QWidget *parent = 0);
    ~PID();

signals:
    void PIDSignal(QString);

public slots:
    void on_pushButton_confirm_clicked();

private:
    Ui::PID *ui;
};

#endif // PID_H
