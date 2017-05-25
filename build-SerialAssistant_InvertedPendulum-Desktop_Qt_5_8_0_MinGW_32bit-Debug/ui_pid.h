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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PID
{
public:
    QGroupBox *groupBox;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *comboBox_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QComboBox *comboBox_3;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QVBoxLayout *verticalLayout_3;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QComboBox *comboBox;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_4;
    QComboBox *comboBox_4;
    QPushButton *pushButton_confirm;

    void setupUi(QWidget *PID)
    {
        if (PID->objectName().isEmpty())
            PID->setObjectName(QStringLiteral("PID"));
        PID->resize(466, 344);
        groupBox = new QGroupBox(PID);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(40, 20, 381, 301));
        gridLayoutWidget = new QWidget(groupBox);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(60, 30, 241, 260));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignCenter);
        label->setMargin(20);

        horizontalLayout->addWidget(label);

        comboBox_2 = new QComboBox(gridLayoutWidget);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));

        horizontalLayout->addWidget(comboBox_2);


        gridLayout->addLayout(horizontalLayout, 4, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setStyleSheet(QStringLiteral("font: 20pt \"ADMUI3Lg\";"));
        label_3->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_3);

        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_5);


        gridLayout->addLayout(horizontalLayout_2, 3, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(label_2);

        comboBox_3 = new QComboBox(gridLayoutWidget);
        comboBox_3->setObjectName(QStringLiteral("comboBox_3"));

        horizontalLayout_4->addWidget(comboBox_3);


        gridLayout->addLayout(horizontalLayout_4, 6, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        pushButton_3 = new QPushButton(gridLayoutWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        verticalLayout_2->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(gridLayoutWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        verticalLayout_2->addWidget(pushButton_4);


        gridLayout->addLayout(verticalLayout_2, 6, 1, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        pushButton = new QPushButton(gridLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(gridLayoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);


        gridLayout->addLayout(verticalLayout, 4, 1, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        pushButton_5 = new QPushButton(gridLayoutWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));

        verticalLayout_3->addWidget(pushButton_5);

        pushButton_6 = new QPushButton(gridLayoutWidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));

        verticalLayout_3->addWidget(pushButton_6);


        gridLayout->addLayout(verticalLayout_3, 9, 1, 1, 1);

        comboBox = new QComboBox(gridLayoutWidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setInsertPolicy(QComboBox::InsertAtBottom);

        gridLayout->addWidget(comboBox, 3, 1, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(label_4);

        comboBox_4 = new QComboBox(gridLayoutWidget);
        comboBox_4->setObjectName(QStringLiteral("comboBox_4"));

        horizontalLayout_6->addWidget(comboBox_4);


        gridLayout->addLayout(horizontalLayout_6, 9, 0, 1, 1);

        pushButton_confirm = new QPushButton(groupBox);
        pushButton_confirm->setObjectName(QStringLiteral("pushButton_confirm"));
        pushButton_confirm->setGeometry(QRect(280, 260, 80, 20));

        retranslateUi(PID);

        QMetaObject::connectSlotsByName(PID);
    } // setupUi

    void retranslateUi(QWidget *PID)
    {
        PID->setWindowTitle(QApplication::translate("PID", "Form", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("PID", "\350\257\267\350\276\223\345\205\245\350\246\201\344\277\256\346\224\271\347\232\204PID\345\217\202\346\225\260", Q_NULLPTR));
        label->setText(QApplication::translate("PID", "P", Q_NULLPTR));
        label_3->setText(QApplication::translate("PID", "\347\273\204\345\210\253", Q_NULLPTR));
        label_5->setText(QApplication::translate("PID", "\347\262\276\345\272\246", Q_NULLPTR));
        label_2->setText(QApplication::translate("PID", "I", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("PID", "+", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("PID", "-", Q_NULLPTR));
        pushButton->setText(QApplication::translate("PID", "+", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("PID", "-", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("PID", "+", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("PID", "-", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("PID", "L", Q_NULLPTR)
         << QApplication::translate("PID", "R", Q_NULLPTR)
         << QApplication::translate("PID", "G", Q_NULLPTR)
        );
        label_4->setText(QApplication::translate("PID", "D", Q_NULLPTR));
        pushButton_confirm->setText(QApplication::translate("PID", "\347\241\256\345\256\232\344\277\256\346\224\271", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class PID: public Ui_PID {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PID_H
