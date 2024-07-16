/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget1;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayoutTime;
    QLabel *currentTimeLabel;
    QLabel *currentTimeValue;
    QVBoxLayout *verticalLayoutVoltage;
    QLabel *busVoltageLabel;
    QLabel *currentBusVoltageValue;
    QVBoxLayout *verticalLayoutCurrent;
    QLabel *shuntVoltageLabel;
    QLabel *currentShuntVoltageValue;
    QVBoxLayout *verticalLayoutPower;
    QLabel *loadVoltageLabel;
    QLabel *currentLoadVoltageValue;
    QVBoxLayout *verticalLayoutEnergy;
    QLabel *currentLabel;
    QLabel *currentCurrentValue;
    QVBoxLayout *verticalLayoutFrequency;
    QLabel *powerLabel;
    QLabel *currentPowerValue;
    QProgressBar *batteryProgressBar;
    QWidget *centralwidget_2;
    QGroupBox *historicalDataGroupBox;
    QWidget *widget;
    QWidget *layoutWidget_2;
    QHBoxLayout *historicalHeaderLayout;
    QLabel *historicalTimeHeaderLabel;
    QLabel *historicalBusVoltageHeaderLabel;
    QLabel *historicalShuntVoltageHeaderLabel;
    QLabel *historicaLoadVoltageHeaderLabel;
    QLabel *historicalECurrentHeaderLabel;
    QLabel *historicalPowerHeaderLabel;
    QWidget *layoutWidget_3;
    QHBoxLayout *historicalDataLayout1;
    QLabel *historicalTimeLabel1;
    QLabel *historicalBusVoltageLabel1;
    QLabel *historicalShuntVoltageLabel1;
    QLabel *historicalLoadVoltageLabel1;
    QLabel *historicalCurrentLabel1;
    QLabel *historicalPowerLabel1;
    QWidget *layoutWidget_4;
    QHBoxLayout *historicalDataLayout2;
    QLabel *historicalTimeLabel2;
    QLabel *historicalBusVoltageLabel2;
    QLabel *historicalShuntVoltageLabel2;
    QLabel *historicalLoadVoltageLabel2;
    QLabel *historicalCurrentLabel2;
    QLabel *historicalPowerLabel2;
    QWidget *layoutWidget_5;
    QHBoxLayout *historicalDataLayout3;
    QLabel *historicalTimeLabel3;
    QLabel *historicalBusVoltageLabel3;
    QLabel *historicalShuntVoltageLabel3;
    QLabel *historicalLoadVoltageLabel3;
    QLabel *historicalCurrentLabel3;
    QLabel *historicalPowerLabel3;
    QWidget *layoutWidget_6;
    QHBoxLayout *historicalDataLayout4;
    QLabel *historicalTimeLabel4;
    QLabel *historicalBusVoltageLabel4;
    QLabel *historicalShuntVoltageLabel4;
    QLabel *historicalLoadVoltageLabel4;
    QLabel *historicalCurrentLabel4;
    QLabel *historicalPowerLabel4;
    QWidget *layoutWidget_7;
    QHBoxLayout *historicalDataLayout5;
    QLabel *historicalTimeLabel5;
    QLabel *historicalBusVoltageLabel5;
    QLabel *historicalShuntVoltageLabel5;
    QLabel *historicalLoadVoltageLabel5;
    QLabel *historicalCurrentLabel5;
    QLabel *historicalPowerLabel5;
    QWidget *layoutWidget_8;
    QHBoxLayout *historicalDataLayout6;
    QLabel *historicalTimeLabel6;
    QLabel *historicalBusVoltageLabel6;
    QLabel *historicalShuntVoltageLabel6;
    QLabel *historicalLoadVoltageLabel6;
    QLabel *historicalCurrentLabel6;
    QLabel *historicalPowerLabel6;
    QWidget *layoutWidget_9;
    QHBoxLayout *historicalDataLayout7;
    QLabel *historicalTimeLabel7;
    QLabel *historicalBusVoltageLabel7;
    QLabel *historicalShuntVoltageLabel7;
    QLabel *historicalLoadVoltageLabel7;
    QLabel *historicalCurrentLabel7;
    QLabel *historicalPowerLabel7;
    QWidget *layoutWidget_10;
    QHBoxLayout *historicalDataLayout8;
    QLabel *historicalTimeLabel8;
    QLabel *historicalBusVoltageLabel8;
    QLabel *historicalShuntVoltageLabel8;
    QLabel *historicalLoadVoltageLabel8;
    QLabel *historicalCurrentLabel8;
    QLabel *historicalPowerLabel8;
    QWidget *layoutWidget_11;
    QHBoxLayout *historicalDataLayout9;
    QLabel *historicalTimeLabel9;
    QLabel *historicalBusVoltageLabel9;
    QLabel *historicalShuntVoltageLabel9;
    QLabel *historicalLoadVoltageLabel9;
    QLabel *historicalCurrentLabel9;
    QLabel *historicalPowerLabel9;
    QWidget *layoutWidget_12;
    QHBoxLayout *historicalDataLayout10;
    QLabel *historicalTimeLabel10;
    QLabel *historicalBusVoltageLabel10;
    QLabel *historicalShuntVoltageLabel10;
    QLabel *historicalLoadVoltageLabel10;
    QLabel *historicalCurrentLabel10;
    QLabel *historicalPowerLabel10;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(806, 628);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(10, 30, 771, 71));
        layoutWidget = new QWidget(layoutWidget1);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 0, 741, 51));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayoutTime = new QVBoxLayout();
        verticalLayoutTime->setObjectName("verticalLayoutTime");
        currentTimeLabel = new QLabel(layoutWidget);
        currentTimeLabel->setObjectName("currentTimeLabel");

        verticalLayoutTime->addWidget(currentTimeLabel);

        currentTimeValue = new QLabel(layoutWidget);
        currentTimeValue->setObjectName("currentTimeValue");

        verticalLayoutTime->addWidget(currentTimeValue);


        horizontalLayout_2->addLayout(verticalLayoutTime);

        verticalLayoutVoltage = new QVBoxLayout();
        verticalLayoutVoltage->setObjectName("verticalLayoutVoltage");
        busVoltageLabel = new QLabel(layoutWidget);
        busVoltageLabel->setObjectName("busVoltageLabel");

        verticalLayoutVoltage->addWidget(busVoltageLabel);

        currentBusVoltageValue = new QLabel(layoutWidget);
        currentBusVoltageValue->setObjectName("currentBusVoltageValue");

        verticalLayoutVoltage->addWidget(currentBusVoltageValue);


        horizontalLayout_2->addLayout(verticalLayoutVoltage);

        verticalLayoutCurrent = new QVBoxLayout();
        verticalLayoutCurrent->setObjectName("verticalLayoutCurrent");
        shuntVoltageLabel = new QLabel(layoutWidget);
        shuntVoltageLabel->setObjectName("shuntVoltageLabel");

        verticalLayoutCurrent->addWidget(shuntVoltageLabel);

        currentShuntVoltageValue = new QLabel(layoutWidget);
        currentShuntVoltageValue->setObjectName("currentShuntVoltageValue");

        verticalLayoutCurrent->addWidget(currentShuntVoltageValue);


        horizontalLayout_2->addLayout(verticalLayoutCurrent);

        verticalLayoutPower = new QVBoxLayout();
        verticalLayoutPower->setObjectName("verticalLayoutPower");
        loadVoltageLabel = new QLabel(layoutWidget);
        loadVoltageLabel->setObjectName("loadVoltageLabel");

        verticalLayoutPower->addWidget(loadVoltageLabel);

        currentLoadVoltageValue = new QLabel(layoutWidget);
        currentLoadVoltageValue->setObjectName("currentLoadVoltageValue");

        verticalLayoutPower->addWidget(currentLoadVoltageValue);


        horizontalLayout_2->addLayout(verticalLayoutPower);

        verticalLayoutEnergy = new QVBoxLayout();
        verticalLayoutEnergy->setObjectName("verticalLayoutEnergy");
        currentLabel = new QLabel(layoutWidget);
        currentLabel->setObjectName("currentLabel");

        verticalLayoutEnergy->addWidget(currentLabel);

        currentCurrentValue = new QLabel(layoutWidget);
        currentCurrentValue->setObjectName("currentCurrentValue");

        verticalLayoutEnergy->addWidget(currentCurrentValue);


        horizontalLayout_2->addLayout(verticalLayoutEnergy);

        verticalLayoutFrequency = new QVBoxLayout();
        verticalLayoutFrequency->setObjectName("verticalLayoutFrequency");
        powerLabel = new QLabel(layoutWidget);
        powerLabel->setObjectName("powerLabel");

        verticalLayoutFrequency->addWidget(powerLabel);

        currentPowerValue = new QLabel(layoutWidget);
        currentPowerValue->setObjectName("currentPowerValue");

        verticalLayoutFrequency->addWidget(currentPowerValue);


        horizontalLayout_2->addLayout(verticalLayoutFrequency);

        batteryProgressBar = new QProgressBar(centralwidget);
        batteryProgressBar->setObjectName("batteryProgressBar");
        batteryProgressBar->setGeometry(QRect(290, 520, 221, 51));
        batteryProgressBar->setValue(24);
        centralwidget_2 = new QWidget(centralwidget);
        centralwidget_2->setObjectName("centralwidget_2");
        centralwidget_2->setGeometry(QRect(10, 100, 771, 400));
        historicalDataGroupBox = new QGroupBox(centralwidget_2);
        historicalDataGroupBox->setObjectName("historicalDataGroupBox");
        historicalDataGroupBox->setGeometry(QRect(0, 0, 771, 401));
        widget = new QWidget(historicalDataGroupBox);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(10, 40, 751, 351));
        layoutWidget_2 = new QWidget(widget);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(20, 10, 711, 22));
        historicalHeaderLayout = new QHBoxLayout(layoutWidget_2);
        historicalHeaderLayout->setObjectName("historicalHeaderLayout");
        historicalHeaderLayout->setContentsMargins(0, 0, 0, 0);
        historicalTimeHeaderLabel = new QLabel(layoutWidget_2);
        historicalTimeHeaderLabel->setObjectName("historicalTimeHeaderLabel");

        historicalHeaderLayout->addWidget(historicalTimeHeaderLabel);

        historicalBusVoltageHeaderLabel = new QLabel(layoutWidget_2);
        historicalBusVoltageHeaderLabel->setObjectName("historicalBusVoltageHeaderLabel");

        historicalHeaderLayout->addWidget(historicalBusVoltageHeaderLabel);

        historicalShuntVoltageHeaderLabel = new QLabel(layoutWidget_2);
        historicalShuntVoltageHeaderLabel->setObjectName("historicalShuntVoltageHeaderLabel");

        historicalHeaderLayout->addWidget(historicalShuntVoltageHeaderLabel);

        historicaLoadVoltageHeaderLabel = new QLabel(layoutWidget_2);
        historicaLoadVoltageHeaderLabel->setObjectName("historicaLoadVoltageHeaderLabel");

        historicalHeaderLayout->addWidget(historicaLoadVoltageHeaderLabel);

        historicalECurrentHeaderLabel = new QLabel(layoutWidget_2);
        historicalECurrentHeaderLabel->setObjectName("historicalECurrentHeaderLabel");

        historicalHeaderLayout->addWidget(historicalECurrentHeaderLabel);

        historicalPowerHeaderLabel = new QLabel(layoutWidget_2);
        historicalPowerHeaderLabel->setObjectName("historicalPowerHeaderLabel");

        historicalHeaderLayout->addWidget(historicalPowerHeaderLabel);

        layoutWidget_3 = new QWidget(widget);
        layoutWidget_3->setObjectName("layoutWidget_3");
        layoutWidget_3->setGeometry(QRect(20, 40, 711, 22));
        historicalDataLayout1 = new QHBoxLayout(layoutWidget_3);
        historicalDataLayout1->setObjectName("historicalDataLayout1");
        historicalDataLayout1->setContentsMargins(0, 0, 0, 0);
        historicalTimeLabel1 = new QLabel(layoutWidget_3);
        historicalTimeLabel1->setObjectName("historicalTimeLabel1");

        historicalDataLayout1->addWidget(historicalTimeLabel1);

        historicalBusVoltageLabel1 = new QLabel(layoutWidget_3);
        historicalBusVoltageLabel1->setObjectName("historicalBusVoltageLabel1");

        historicalDataLayout1->addWidget(historicalBusVoltageLabel1);

        historicalShuntVoltageLabel1 = new QLabel(layoutWidget_3);
        historicalShuntVoltageLabel1->setObjectName("historicalShuntVoltageLabel1");

        historicalDataLayout1->addWidget(historicalShuntVoltageLabel1);

        historicalLoadVoltageLabel1 = new QLabel(layoutWidget_3);
        historicalLoadVoltageLabel1->setObjectName("historicalLoadVoltageLabel1");

        historicalDataLayout1->addWidget(historicalLoadVoltageLabel1);

        historicalCurrentLabel1 = new QLabel(layoutWidget_3);
        historicalCurrentLabel1->setObjectName("historicalCurrentLabel1");

        historicalDataLayout1->addWidget(historicalCurrentLabel1);

        historicalPowerLabel1 = new QLabel(layoutWidget_3);
        historicalPowerLabel1->setObjectName("historicalPowerLabel1");

        historicalDataLayout1->addWidget(historicalPowerLabel1);

        layoutWidget_4 = new QWidget(widget);
        layoutWidget_4->setObjectName("layoutWidget_4");
        layoutWidget_4->setGeometry(QRect(20, 70, 711, 22));
        historicalDataLayout2 = new QHBoxLayout(layoutWidget_4);
        historicalDataLayout2->setObjectName("historicalDataLayout2");
        historicalDataLayout2->setContentsMargins(0, 0, 0, 0);
        historicalTimeLabel2 = new QLabel(layoutWidget_4);
        historicalTimeLabel2->setObjectName("historicalTimeLabel2");

        historicalDataLayout2->addWidget(historicalTimeLabel2);

        historicalBusVoltageLabel2 = new QLabel(layoutWidget_4);
        historicalBusVoltageLabel2->setObjectName("historicalBusVoltageLabel2");

        historicalDataLayout2->addWidget(historicalBusVoltageLabel2);

        historicalShuntVoltageLabel2 = new QLabel(layoutWidget_4);
        historicalShuntVoltageLabel2->setObjectName("historicalShuntVoltageLabel2");

        historicalDataLayout2->addWidget(historicalShuntVoltageLabel2);

        historicalLoadVoltageLabel2 = new QLabel(layoutWidget_4);
        historicalLoadVoltageLabel2->setObjectName("historicalLoadVoltageLabel2");

        historicalDataLayout2->addWidget(historicalLoadVoltageLabel2);

        historicalCurrentLabel2 = new QLabel(layoutWidget_4);
        historicalCurrentLabel2->setObjectName("historicalCurrentLabel2");

        historicalDataLayout2->addWidget(historicalCurrentLabel2);

        historicalPowerLabel2 = new QLabel(layoutWidget_4);
        historicalPowerLabel2->setObjectName("historicalPowerLabel2");

        historicalDataLayout2->addWidget(historicalPowerLabel2);

        layoutWidget_5 = new QWidget(widget);
        layoutWidget_5->setObjectName("layoutWidget_5");
        layoutWidget_5->setGeometry(QRect(20, 100, 711, 22));
        historicalDataLayout3 = new QHBoxLayout(layoutWidget_5);
        historicalDataLayout3->setObjectName("historicalDataLayout3");
        historicalDataLayout3->setContentsMargins(0, 0, 0, 0);
        historicalTimeLabel3 = new QLabel(layoutWidget_5);
        historicalTimeLabel3->setObjectName("historicalTimeLabel3");

        historicalDataLayout3->addWidget(historicalTimeLabel3);

        historicalBusVoltageLabel3 = new QLabel(layoutWidget_5);
        historicalBusVoltageLabel3->setObjectName("historicalBusVoltageLabel3");

        historicalDataLayout3->addWidget(historicalBusVoltageLabel3);

        historicalShuntVoltageLabel3 = new QLabel(layoutWidget_5);
        historicalShuntVoltageLabel3->setObjectName("historicalShuntVoltageLabel3");

        historicalDataLayout3->addWidget(historicalShuntVoltageLabel3);

        historicalLoadVoltageLabel3 = new QLabel(layoutWidget_5);
        historicalLoadVoltageLabel3->setObjectName("historicalLoadVoltageLabel3");

        historicalDataLayout3->addWidget(historicalLoadVoltageLabel3);

        historicalCurrentLabel3 = new QLabel(layoutWidget_5);
        historicalCurrentLabel3->setObjectName("historicalCurrentLabel3");

        historicalDataLayout3->addWidget(historicalCurrentLabel3);

        historicalPowerLabel3 = new QLabel(layoutWidget_5);
        historicalPowerLabel3->setObjectName("historicalPowerLabel3");

        historicalDataLayout3->addWidget(historicalPowerLabel3);

        layoutWidget_6 = new QWidget(widget);
        layoutWidget_6->setObjectName("layoutWidget_6");
        layoutWidget_6->setGeometry(QRect(20, 130, 711, 22));
        historicalDataLayout4 = new QHBoxLayout(layoutWidget_6);
        historicalDataLayout4->setObjectName("historicalDataLayout4");
        historicalDataLayout4->setContentsMargins(0, 0, 0, 0);
        historicalTimeLabel4 = new QLabel(layoutWidget_6);
        historicalTimeLabel4->setObjectName("historicalTimeLabel4");

        historicalDataLayout4->addWidget(historicalTimeLabel4);

        historicalBusVoltageLabel4 = new QLabel(layoutWidget_6);
        historicalBusVoltageLabel4->setObjectName("historicalBusVoltageLabel4");

        historicalDataLayout4->addWidget(historicalBusVoltageLabel4);

        historicalShuntVoltageLabel4 = new QLabel(layoutWidget_6);
        historicalShuntVoltageLabel4->setObjectName("historicalShuntVoltageLabel4");

        historicalDataLayout4->addWidget(historicalShuntVoltageLabel4);

        historicalLoadVoltageLabel4 = new QLabel(layoutWidget_6);
        historicalLoadVoltageLabel4->setObjectName("historicalLoadVoltageLabel4");

        historicalDataLayout4->addWidget(historicalLoadVoltageLabel4);

        historicalCurrentLabel4 = new QLabel(layoutWidget_6);
        historicalCurrentLabel4->setObjectName("historicalCurrentLabel4");

        historicalDataLayout4->addWidget(historicalCurrentLabel4);

        historicalPowerLabel4 = new QLabel(layoutWidget_6);
        historicalPowerLabel4->setObjectName("historicalPowerLabel4");

        historicalDataLayout4->addWidget(historicalPowerLabel4);

        layoutWidget_7 = new QWidget(widget);
        layoutWidget_7->setObjectName("layoutWidget_7");
        layoutWidget_7->setGeometry(QRect(20, 160, 711, 22));
        historicalDataLayout5 = new QHBoxLayout(layoutWidget_7);
        historicalDataLayout5->setObjectName("historicalDataLayout5");
        historicalDataLayout5->setContentsMargins(0, 0, 0, 0);
        historicalTimeLabel5 = new QLabel(layoutWidget_7);
        historicalTimeLabel5->setObjectName("historicalTimeLabel5");

        historicalDataLayout5->addWidget(historicalTimeLabel5);

        historicalBusVoltageLabel5 = new QLabel(layoutWidget_7);
        historicalBusVoltageLabel5->setObjectName("historicalBusVoltageLabel5");

        historicalDataLayout5->addWidget(historicalBusVoltageLabel5);

        historicalShuntVoltageLabel5 = new QLabel(layoutWidget_7);
        historicalShuntVoltageLabel5->setObjectName("historicalShuntVoltageLabel5");

        historicalDataLayout5->addWidget(historicalShuntVoltageLabel5);

        historicalLoadVoltageLabel5 = new QLabel(layoutWidget_7);
        historicalLoadVoltageLabel5->setObjectName("historicalLoadVoltageLabel5");

        historicalDataLayout5->addWidget(historicalLoadVoltageLabel5);

        historicalCurrentLabel5 = new QLabel(layoutWidget_7);
        historicalCurrentLabel5->setObjectName("historicalCurrentLabel5");

        historicalDataLayout5->addWidget(historicalCurrentLabel5);

        historicalPowerLabel5 = new QLabel(layoutWidget_7);
        historicalPowerLabel5->setObjectName("historicalPowerLabel5");

        historicalDataLayout5->addWidget(historicalPowerLabel5);

        layoutWidget_8 = new QWidget(widget);
        layoutWidget_8->setObjectName("layoutWidget_8");
        layoutWidget_8->setGeometry(QRect(20, 190, 711, 22));
        historicalDataLayout6 = new QHBoxLayout(layoutWidget_8);
        historicalDataLayout6->setObjectName("historicalDataLayout6");
        historicalDataLayout6->setContentsMargins(0, 0, 0, 0);
        historicalTimeLabel6 = new QLabel(layoutWidget_8);
        historicalTimeLabel6->setObjectName("historicalTimeLabel6");

        historicalDataLayout6->addWidget(historicalTimeLabel6);

        historicalBusVoltageLabel6 = new QLabel(layoutWidget_8);
        historicalBusVoltageLabel6->setObjectName("historicalBusVoltageLabel6");

        historicalDataLayout6->addWidget(historicalBusVoltageLabel6);

        historicalShuntVoltageLabel6 = new QLabel(layoutWidget_8);
        historicalShuntVoltageLabel6->setObjectName("historicalShuntVoltageLabel6");

        historicalDataLayout6->addWidget(historicalShuntVoltageLabel6);

        historicalLoadVoltageLabel6 = new QLabel(layoutWidget_8);
        historicalLoadVoltageLabel6->setObjectName("historicalLoadVoltageLabel6");

        historicalDataLayout6->addWidget(historicalLoadVoltageLabel6);

        historicalCurrentLabel6 = new QLabel(layoutWidget_8);
        historicalCurrentLabel6->setObjectName("historicalCurrentLabel6");

        historicalDataLayout6->addWidget(historicalCurrentLabel6);

        historicalPowerLabel6 = new QLabel(layoutWidget_8);
        historicalPowerLabel6->setObjectName("historicalPowerLabel6");

        historicalDataLayout6->addWidget(historicalPowerLabel6);

        layoutWidget_9 = new QWidget(widget);
        layoutWidget_9->setObjectName("layoutWidget_9");
        layoutWidget_9->setGeometry(QRect(20, 220, 711, 22));
        historicalDataLayout7 = new QHBoxLayout(layoutWidget_9);
        historicalDataLayout7->setObjectName("historicalDataLayout7");
        historicalDataLayout7->setContentsMargins(0, 0, 0, 0);
        historicalTimeLabel7 = new QLabel(layoutWidget_9);
        historicalTimeLabel7->setObjectName("historicalTimeLabel7");

        historicalDataLayout7->addWidget(historicalTimeLabel7);

        historicalBusVoltageLabel7 = new QLabel(layoutWidget_9);
        historicalBusVoltageLabel7->setObjectName("historicalBusVoltageLabel7");

        historicalDataLayout7->addWidget(historicalBusVoltageLabel7);

        historicalShuntVoltageLabel7 = new QLabel(layoutWidget_9);
        historicalShuntVoltageLabel7->setObjectName("historicalShuntVoltageLabel7");

        historicalDataLayout7->addWidget(historicalShuntVoltageLabel7);

        historicalLoadVoltageLabel7 = new QLabel(layoutWidget_9);
        historicalLoadVoltageLabel7->setObjectName("historicalLoadVoltageLabel7");

        historicalDataLayout7->addWidget(historicalLoadVoltageLabel7);

        historicalCurrentLabel7 = new QLabel(layoutWidget_9);
        historicalCurrentLabel7->setObjectName("historicalCurrentLabel7");

        historicalDataLayout7->addWidget(historicalCurrentLabel7);

        historicalPowerLabel7 = new QLabel(layoutWidget_9);
        historicalPowerLabel7->setObjectName("historicalPowerLabel7");

        historicalDataLayout7->addWidget(historicalPowerLabel7);

        layoutWidget_10 = new QWidget(widget);
        layoutWidget_10->setObjectName("layoutWidget_10");
        layoutWidget_10->setGeometry(QRect(20, 250, 711, 22));
        historicalDataLayout8 = new QHBoxLayout(layoutWidget_10);
        historicalDataLayout8->setObjectName("historicalDataLayout8");
        historicalDataLayout8->setContentsMargins(0, 0, 0, 0);
        historicalTimeLabel8 = new QLabel(layoutWidget_10);
        historicalTimeLabel8->setObjectName("historicalTimeLabel8");

        historicalDataLayout8->addWidget(historicalTimeLabel8);

        historicalBusVoltageLabel8 = new QLabel(layoutWidget_10);
        historicalBusVoltageLabel8->setObjectName("historicalBusVoltageLabel8");

        historicalDataLayout8->addWidget(historicalBusVoltageLabel8);

        historicalShuntVoltageLabel8 = new QLabel(layoutWidget_10);
        historicalShuntVoltageLabel8->setObjectName("historicalShuntVoltageLabel8");

        historicalDataLayout8->addWidget(historicalShuntVoltageLabel8);

        historicalLoadVoltageLabel8 = new QLabel(layoutWidget_10);
        historicalLoadVoltageLabel8->setObjectName("historicalLoadVoltageLabel8");

        historicalDataLayout8->addWidget(historicalLoadVoltageLabel8);

        historicalCurrentLabel8 = new QLabel(layoutWidget_10);
        historicalCurrentLabel8->setObjectName("historicalCurrentLabel8");

        historicalDataLayout8->addWidget(historicalCurrentLabel8);

        historicalPowerLabel8 = new QLabel(layoutWidget_10);
        historicalPowerLabel8->setObjectName("historicalPowerLabel8");

        historicalDataLayout8->addWidget(historicalPowerLabel8);

        layoutWidget_11 = new QWidget(widget);
        layoutWidget_11->setObjectName("layoutWidget_11");
        layoutWidget_11->setGeometry(QRect(20, 280, 711, 22));
        historicalDataLayout9 = new QHBoxLayout(layoutWidget_11);
        historicalDataLayout9->setObjectName("historicalDataLayout9");
        historicalDataLayout9->setContentsMargins(0, 0, 0, 0);
        historicalTimeLabel9 = new QLabel(layoutWidget_11);
        historicalTimeLabel9->setObjectName("historicalTimeLabel9");

        historicalDataLayout9->addWidget(historicalTimeLabel9);

        historicalBusVoltageLabel9 = new QLabel(layoutWidget_11);
        historicalBusVoltageLabel9->setObjectName("historicalBusVoltageLabel9");

        historicalDataLayout9->addWidget(historicalBusVoltageLabel9);

        historicalShuntVoltageLabel9 = new QLabel(layoutWidget_11);
        historicalShuntVoltageLabel9->setObjectName("historicalShuntVoltageLabel9");

        historicalDataLayout9->addWidget(historicalShuntVoltageLabel9);

        historicalLoadVoltageLabel9 = new QLabel(layoutWidget_11);
        historicalLoadVoltageLabel9->setObjectName("historicalLoadVoltageLabel9");

        historicalDataLayout9->addWidget(historicalLoadVoltageLabel9);

        historicalCurrentLabel9 = new QLabel(layoutWidget_11);
        historicalCurrentLabel9->setObjectName("historicalCurrentLabel9");

        historicalDataLayout9->addWidget(historicalCurrentLabel9);

        historicalPowerLabel9 = new QLabel(layoutWidget_11);
        historicalPowerLabel9->setObjectName("historicalPowerLabel9");

        historicalDataLayout9->addWidget(historicalPowerLabel9);

        layoutWidget_12 = new QWidget(widget);
        layoutWidget_12->setObjectName("layoutWidget_12");
        layoutWidget_12->setGeometry(QRect(20, 310, 711, 22));
        historicalDataLayout10 = new QHBoxLayout(layoutWidget_12);
        historicalDataLayout10->setObjectName("historicalDataLayout10");
        historicalDataLayout10->setContentsMargins(0, 0, 0, 0);
        historicalTimeLabel10 = new QLabel(layoutWidget_12);
        historicalTimeLabel10->setObjectName("historicalTimeLabel10");

        historicalDataLayout10->addWidget(historicalTimeLabel10);

        historicalBusVoltageLabel10 = new QLabel(layoutWidget_12);
        historicalBusVoltageLabel10->setObjectName("historicalBusVoltageLabel10");

        historicalDataLayout10->addWidget(historicalBusVoltageLabel10);

        historicalShuntVoltageLabel10 = new QLabel(layoutWidget_12);
        historicalShuntVoltageLabel10->setObjectName("historicalShuntVoltageLabel10");

        historicalDataLayout10->addWidget(historicalShuntVoltageLabel10);

        historicalLoadVoltageLabel10 = new QLabel(layoutWidget_12);
        historicalLoadVoltageLabel10->setObjectName("historicalLoadVoltageLabel10");

        historicalDataLayout10->addWidget(historicalLoadVoltageLabel10);

        historicalCurrentLabel10 = new QLabel(layoutWidget_12);
        historicalCurrentLabel10->setObjectName("historicalCurrentLabel10");

        historicalDataLayout10->addWidget(historicalCurrentLabel10);

        historicalPowerLabel10 = new QLabel(layoutWidget_12);
        historicalPowerLabel10->setObjectName("historicalPowerLabel10");

        historicalDataLayout10->addWidget(historicalPowerLabel10);

        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 10, 91, 20));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 806, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        currentTimeLabel->setText(QCoreApplication::translate("MainWindow", "Time :", nullptr));
        currentTimeValue->setText(QString());
        busVoltageLabel->setText(QCoreApplication::translate("MainWindow", "Bus Voltage (V) :", nullptr));
        currentBusVoltageValue->setText(QString());
        shuntVoltageLabel->setText(QCoreApplication::translate("MainWindow", "Shunt Voltage (mV) :", nullptr));
        currentShuntVoltageValue->setText(QString());
        loadVoltageLabel->setText(QCoreApplication::translate("MainWindow", "Load Voltage (V) :", nullptr));
        currentLoadVoltageValue->setText(QString());
        currentLabel->setText(QCoreApplication::translate("MainWindow", "Current (mA) :", nullptr));
        currentCurrentValue->setText(QString());
        powerLabel->setText(QCoreApplication::translate("MainWindow", "Power (mW) :", nullptr));
        currentPowerValue->setText(QString());
        historicalDataGroupBox->setTitle(QCoreApplication::translate("MainWindow", "Historical Data", nullptr));
        historicalTimeHeaderLabel->setText(QCoreApplication::translate("MainWindow", "Time", nullptr));
        historicalBusVoltageHeaderLabel->setText(QCoreApplication::translate("MainWindow", "Bus Voltage (V)", nullptr));
        historicalShuntVoltageHeaderLabel->setText(QCoreApplication::translate("MainWindow", "Shunt Voltage (mV)", nullptr));
        historicaLoadVoltageHeaderLabel->setText(QCoreApplication::translate("MainWindow", "Load Voltage (V)", nullptr));
        historicalECurrentHeaderLabel->setText(QCoreApplication::translate("MainWindow", "Current (mA)", nullptr));
        historicalPowerHeaderLabel->setText(QCoreApplication::translate("MainWindow", "Power (mW)", nullptr));
        historicalTimeLabel1->setText(QString());
        historicalBusVoltageLabel1->setText(QString());
        historicalShuntVoltageLabel1->setText(QString());
        historicalLoadVoltageLabel1->setText(QString());
        historicalCurrentLabel1->setText(QString());
        historicalPowerLabel1->setText(QString());
        historicalTimeLabel2->setText(QString());
        historicalBusVoltageLabel2->setText(QString());
        historicalShuntVoltageLabel2->setText(QString());
        historicalLoadVoltageLabel2->setText(QString());
        historicalCurrentLabel2->setText(QString());
        historicalPowerLabel2->setText(QString());
        historicalTimeLabel3->setText(QString());
        historicalBusVoltageLabel3->setText(QString());
        historicalShuntVoltageLabel3->setText(QString());
        historicalLoadVoltageLabel3->setText(QString());
        historicalCurrentLabel3->setText(QString());
        historicalPowerLabel3->setText(QString());
        historicalTimeLabel4->setText(QString());
        historicalBusVoltageLabel4->setText(QString());
        historicalShuntVoltageLabel4->setText(QString());
        historicalLoadVoltageLabel4->setText(QString());
        historicalCurrentLabel4->setText(QString());
        historicalPowerLabel4->setText(QString());
        historicalTimeLabel5->setText(QString());
        historicalBusVoltageLabel5->setText(QString());
        historicalShuntVoltageLabel5->setText(QString());
        historicalLoadVoltageLabel5->setText(QString());
        historicalCurrentLabel5->setText(QString());
        historicalPowerLabel5->setText(QString());
        historicalTimeLabel6->setText(QString());
        historicalBusVoltageLabel6->setText(QString());
        historicalShuntVoltageLabel6->setText(QString());
        historicalLoadVoltageLabel6->setText(QString());
        historicalCurrentLabel6->setText(QString());
        historicalPowerLabel6->setText(QString());
        historicalTimeLabel7->setText(QString());
        historicalBusVoltageLabel7->setText(QString());
        historicalShuntVoltageLabel7->setText(QString());
        historicalLoadVoltageLabel7->setText(QString());
        historicalCurrentLabel7->setText(QString());
        historicalPowerLabel7->setText(QString());
        historicalTimeLabel8->setText(QString());
        historicalBusVoltageLabel8->setText(QString());
        historicalShuntVoltageLabel8->setText(QString());
        historicalLoadVoltageLabel8->setText(QString());
        historicalCurrentLabel8->setText(QString());
        historicalPowerLabel8->setText(QString());
        historicalTimeLabel9->setText(QString());
        historicalBusVoltageLabel9->setText(QString());
        historicalShuntVoltageLabel9->setText(QString());
        historicalLoadVoltageLabel9->setText(QString());
        historicalCurrentLabel9->setText(QString());
        historicalPowerLabel9->setText(QString());
        historicalTimeLabel10->setText(QString());
        historicalBusVoltageLabel10->setText(QString());
        historicalShuntVoltageLabel10->setText(QString());
        historicalLoadVoltageLabel10->setText(QString());
        historicalCurrentLabel10->setText(QString());
        historicalPowerLabel10->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "Current Data", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
