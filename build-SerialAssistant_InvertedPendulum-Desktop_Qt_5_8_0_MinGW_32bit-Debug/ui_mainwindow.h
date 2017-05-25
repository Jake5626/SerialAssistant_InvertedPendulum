/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QComboBox *comboBox_StopBit;
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_7;
    QComboBox *comboBox_DataBit;
    QPushButton *pushButton_ClearData;
    QWidget *horizontalLayoutWidget_5;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_8;
    QComboBox *comboBox_CheckBit;
    QPushButton *pushButton_connect;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_9;
    QComboBox *comboBox_BaudRate;
    QCheckBox *checkBox_hex;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton_PIDSetting;
    QPushButton *pushButton_7;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_10;
    QComboBox *comboBox_SerialPort;
    QGroupBox *groupBox;
    QTextEdit *textEdit_dataSend;
    QPushButton *pushButton_send;
    QGroupBox *groupBox_2;
    QTextEdit *textEdit_dataRec;
    QPushButton *pushButton;
    QWidget *tab_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(887, 613);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 10, 871, 551));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        horizontalLayoutWidget_3 = new QWidget(tab);
        horizontalLayoutWidget_3->setObjectName(QStringLiteral("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(60, 100, 160, 24));
        horizontalLayout_6 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(horizontalLayoutWidget_3);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_6->addWidget(label_6);

        comboBox_StopBit = new QComboBox(horizontalLayoutWidget_3);
        comboBox_StopBit->setObjectName(QStringLiteral("comboBox_StopBit"));

        horizontalLayout_6->addWidget(comboBox_StopBit);

        horizontalLayoutWidget_4 = new QWidget(tab);
        horizontalLayoutWidget_4->setObjectName(QStringLiteral("horizontalLayoutWidget_4"));
        horizontalLayoutWidget_4->setGeometry(QRect(60, 140, 160, 24));
        horizontalLayout_7 = new QHBoxLayout(horizontalLayoutWidget_4);
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(horizontalLayoutWidget_4);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_7->addWidget(label_7);

        comboBox_DataBit = new QComboBox(horizontalLayoutWidget_4);
        comboBox_DataBit->setObjectName(QStringLiteral("comboBox_DataBit"));

        horizontalLayout_7->addWidget(comboBox_DataBit);

        pushButton_ClearData = new QPushButton(tab);
        pushButton_ClearData->setObjectName(QStringLiteral("pushButton_ClearData"));
        pushButton_ClearData->setGeometry(QRect(60, 290, 71, 31));
        horizontalLayoutWidget_5 = new QWidget(tab);
        horizontalLayoutWidget_5->setObjectName(QStringLiteral("horizontalLayoutWidget_5"));
        horizontalLayoutWidget_5->setGeometry(QRect(60, 180, 160, 24));
        horizontalLayout_8 = new QHBoxLayout(horizontalLayoutWidget_5);
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(horizontalLayoutWidget_5);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_8->addWidget(label_8);

        comboBox_CheckBit = new QComboBox(horizontalLayoutWidget_5);
        comboBox_CheckBit->setObjectName(QStringLiteral("comboBox_CheckBit"));

        horizontalLayout_8->addWidget(comboBox_CheckBit);

        pushButton_connect = new QPushButton(tab);
        pushButton_connect->setObjectName(QStringLiteral("pushButton_connect"));
        pushButton_connect->setGeometry(QRect(140, 220, 71, 31));
        horizontalLayoutWidget_2 = new QWidget(tab);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(60, 60, 160, 24));
        horizontalLayout_9 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(horizontalLayoutWidget_2);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_9->addWidget(label_9);

        comboBox_BaudRate = new QComboBox(horizontalLayoutWidget_2);
        comboBox_BaudRate->setObjectName(QStringLiteral("comboBox_BaudRate"));

        horizontalLayout_9->addWidget(comboBox_BaudRate);

        checkBox_hex = new QCheckBox(tab);
        checkBox_hex->setObjectName(QStringLiteral("checkBox_hex"));
        checkBox_hex->setGeometry(QRect(60, 260, 91, 20));
        gridLayoutWidget = new QWidget(tab);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(50, 340, 160, 131));
        gridLayout_2 = new QGridLayout(gridLayoutWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_PIDSetting = new QPushButton(gridLayoutWidget);
        pushButton_PIDSetting->setObjectName(QStringLiteral("pushButton_PIDSetting"));

        gridLayout_2->addWidget(pushButton_PIDSetting, 0, 0, 1, 1);

        pushButton_7 = new QPushButton(gridLayoutWidget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));

        gridLayout_2->addWidget(pushButton_7, 1, 0, 1, 1);

        horizontalLayoutWidget = new QWidget(tab);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(60, 20, 160, 24));
        horizontalLayout_10 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(horizontalLayoutWidget);
        label_10->setObjectName(QStringLiteral("label_10"));

        horizontalLayout_10->addWidget(label_10);

        comboBox_SerialPort = new QComboBox(horizontalLayoutWidget);
        comboBox_SerialPort->setObjectName(QStringLiteral("comboBox_SerialPort"));

        horizontalLayout_10->addWidget(comboBox_SerialPort);

        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(230, 340, 591, 171));
        textEdit_dataSend = new QTextEdit(groupBox);
        textEdit_dataSend->setObjectName(QStringLiteral("textEdit_dataSend"));
        textEdit_dataSend->setGeometry(QRect(20, 30, 551, 101));
        pushButton_send = new QPushButton(groupBox);
        pushButton_send->setObjectName(QStringLiteral("pushButton_send"));
        pushButton_send->setGeometry(QRect(490, 140, 80, 20));
        textEdit_dataSend->raise();
        textEdit_dataSend->raise();
        pushButton_send->raise();
        groupBox_2 = new QGroupBox(tab);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(230, 10, 591, 321));
        textEdit_dataRec = new QTextEdit(groupBox_2);
        textEdit_dataRec->setObjectName(QStringLiteral("textEdit_dataRec"));
        textEdit_dataRec->setGeometry(QRect(20, 30, 551, 281));
        pushButton = new QPushButton(tab);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(60, 220, 71, 31));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tabWidget->addTab(tab_2, QString());
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 887, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "\345\201\234\346\255\242\344\275\215", Q_NULLPTR));
        comboBox_StopBit->clear();
        comboBox_StopBit->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "1", Q_NULLPTR)
         << QApplication::translate("MainWindow", "2", Q_NULLPTR)
        );
        label_7->setText(QApplication::translate("MainWindow", "\346\225\260\346\215\256\344\275\215", Q_NULLPTR));
        comboBox_DataBit->clear();
        comboBox_DataBit->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "5", Q_NULLPTR)
         << QApplication::translate("MainWindow", "6", Q_NULLPTR)
         << QApplication::translate("MainWindow", "7", Q_NULLPTR)
         << QApplication::translate("MainWindow", "8", Q_NULLPTR)
        );
        pushButton_ClearData->setText(QApplication::translate("MainWindow", "\346\270\205\347\251\272\346\225\260\346\215\256", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "\346\240\241\351\252\214\344\275\215", Q_NULLPTR));
        comboBox_CheckBit->clear();
        comboBox_CheckBit->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "No", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Even", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Odd", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Space", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Mark", Q_NULLPTR)
        );
        pushButton_connect->setText(QApplication::translate("MainWindow", "\350\277\236\346\216\245\344\270\262\345\217\243", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "\346\263\242\347\211\271\347\216\207", Q_NULLPTR));
        comboBox_BaudRate->clear();
        comboBox_BaudRate->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "2400", Q_NULLPTR)
         << QApplication::translate("MainWindow", "4800", Q_NULLPTR)
         << QApplication::translate("MainWindow", "9600", Q_NULLPTR)
         << QApplication::translate("MainWindow", "19200", Q_NULLPTR)
         << QApplication::translate("MainWindow", "115200", Q_NULLPTR)
        );
        comboBox_BaudRate->setCurrentText(QApplication::translate("MainWindow", "9600", Q_NULLPTR));
        checkBox_hex->setText(QApplication::translate("MainWindow", "16\350\277\233\345\210\266\346\230\276\347\244\272", Q_NULLPTR));
        pushButton_PIDSetting->setText(QApplication::translate("MainWindow", "PID\344\277\256\346\224\271", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("MainWindow", "PushButton", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "\344\270\262\345\217\243\345\217\267", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainWindow", "\345\217\221\351\200\201", Q_NULLPTR));
        pushButton_send->setText(QApplication::translate("MainWindow", "\345\217\221\351\200\201", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "\346\216\245\346\224\266", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "\346\211\253\346\217\217\344\270\262\345\217\243", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Tab 1", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Tab 2", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
