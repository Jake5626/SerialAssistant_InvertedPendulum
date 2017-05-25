/********************************************************************************
** Form generated from reading UI file 'pid.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PID_H
#define UI_PID_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PID
{
public:
    QGroupBox *groupBox;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QTextEdit *textEdit_P;
    QTextEdit *textEdit_I;
    QLabel *label_2;
    QLabel *label_4;
    QTextEdit *textEdit_D;
    QLabel *label;
    QPushButton *pushButton_confirm;

    void setupUi(QWidget *PID)
    {
        if (PID->objectName().isEmpty())
            PID->setObjectName(QStringLiteral("PID"));
        PID->resize(466, 344);
        groupBox = new QGroupBox(PID);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(40, 20, 381, 291));
        gridLayoutWidget = new QWidget(groupBox);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(60, 40, 241, 181));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        textEdit_P = new QTextEdit(gridLayoutWidget);
        textEdit_P->setObjectName(QStringLiteral("textEdit_P"));

        gridLayout->addWidget(textEdit_P, 3, 1, 1, 1);

        textEdit_I = new QTextEdit(gridLayoutWidget);
        textEdit_I->setObjectName(QStringLiteral("textEdit_I"));

        gridLayout->addWidget(textEdit_I, 4, 1, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 4, 0, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_4, 7, 0, 1, 1);

        textEdit_D = new QTextEdit(gridLayoutWidget);
        textEdit_D->setObjectName(QStringLiteral("textEdit_D"));

        gridLayout->addWidget(textEdit_D, 7, 1, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignCenter);
        label->setMargin(20);

        gridLayout->addWidget(label, 3, 0, 1, 1);

        pushButton_confirm = new QPushButton(groupBox);
        pushButton_confirm->setObjectName(QStringLiteral("pushButton_confirm"));
        pushButton_confirm->setGeometry(QRect(260, 240, 80, 20));

        retranslateUi(PID);

        QMetaObject::connectSlotsByName(PID);
    } // setupUi

    void retranslateUi(QWidget *PID)
    {
        PID->setWindowTitle(QApplication::translate("PID", "Form", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("PID", "\350\257\267\350\276\223\345\205\245\350\246\201\344\277\256\346\224\271\347\232\204PID\345\217\202\346\225\260", Q_NULLPTR));
        label_2->setText(QApplication::translate("PID", "I", Q_NULLPTR));
        label_4->setText(QApplication::translate("PID", "D", Q_NULLPTR));
        label->setText(QApplication::translate("PID", "P", Q_NULLPTR));
        pushButton_confirm->setText(QApplication::translate("PID", "\347\241\256\345\256\232\344\277\256\346\224\271", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class PID: public Ui_PID {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PID_H
