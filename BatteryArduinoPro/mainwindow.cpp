#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTime>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , serial(new QSerialPort(this))
    , timer(new QTimer(this))
    , maxPower(5000.0)  // 5000 mW atau 5 W, sesuaikan dengan baterai Anda
{
    ui->setupUi(this);

    currentTimeLabel = ui->currentTimeLabel;
    busVoltageLabel = ui->busVoltageLabel;
    shuntVoltageLabel = ui->shuntVoltageLabel;
    loadVoltageLabel = ui->loadVoltageLabel;
    currentLabel = ui->currentLabel;
    powerLabel = ui->powerLabel;

    initializeHistoricalLabels();

    batteryProgressBar = ui->batteryProgressBar;
    batteryProgressBar->setRange(0, 100);
    batteryProgressBar->setValue(0);

    serial->setPortName("COM9");
    serial->setBaudRate(QSerialPort::Baud115200);
    serial->setDataBits(QSerialPort::Data8);
    serial->setParity(QSerialPort::NoParity);
    serial->setStopBits(QSerialPort::OneStop);
    serial->setFlowControl(QSerialPort::NoFlowControl);

    connect(serial, &QSerialPort::readyRead, this, &MainWindow::readData);

    if (serial->open(QIODevice::ReadOnly)) {
        qDebug() << "Serial port opened successfully.";
    } else {
        qDebug() << "Failed to open serial port.";
    }

    connect(timer, &QTimer::timeout, this, &MainWindow::updateHistoricalData);
    timer->start(2000);  // Update historical data every 2 seconds
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::readData()
{
    QByteArray data = serial->readAll();
    QString dataString(data);
    QStringList lines = dataString.split('\n', Qt::SkipEmptyParts);

    for (const QString& line : lines) {
        QStringList parts = line.split(':');
        if (parts.size() == 2) {
            QString key = parts[0].trimmed();
            QString value = parts[1].trimmed();

            if (key == "Bus Voltage") {
                busVoltageLabel->setText(value);
            } else if (key == "Shunt Voltage") {
                shuntVoltageLabel->setText(value);
            } else if (key == "Load Voltage") {
                loadVoltageLabel->setText(value);
            } else if (key == "Current") {
                currentLabel->setText(value);
            } else if (key == "Power") {
                powerLabel->setText(value);

                // Update battery percentage
                float power = value.split(' ')[0].toFloat();
                int percentage = qRound((power / maxPower) * 100);
                percentage = qMin(percentage, 100);  // Ensure it doesn't exceed 100%
                batteryProgressBar->setValue(percentage);
                batteryProgressBar->setFormat(QString("%1% (%2mW / %3mW)").arg(percentage).arg(power, 0, 'f', 1).arg(maxPower, 0, 'f', 1));
            }
        }
    }

    currentTimeLabel->setText(QTime::currentTime().toString("hh:mm:ss"));
}

void MainWindow::updateHistoricalData()
{
    QString currentTime = QTime::currentTime().toString("hh:mm:ss");
    QString data = QString("%1,%2,%3,%4,%5,%6")
                       .arg(currentTime)
                       .arg(busVoltageLabel->text())
                       .arg(shuntVoltageLabel->text())
                       .arg(loadVoltageLabel->text())
                       .arg(currentLabel->text())
                       .arg(powerLabel->text());

    historicalData.append(data);
    if (historicalData.size() > 10) {
        historicalData.removeFirst();
    }

    // Update historical data labels
    for (int i = 0; i < historicalData.size(); ++i) {
        QStringList values = historicalData[i].split(',');
        if (values.size() == 6) {
            historicalTimeLabels[i]->setText(values[0]);
            historicalBusVoltageLabels[i]->setText(values[1]);
            historicalShuntVoltageLabels[i]->setText(values[2]);
            historicalLoadVoltageLabels[i]->setText(values[3]);
            historicalCurrentLabels[i]->setText(values[4]);
            historicalPowerLabels[i]->setText(values[5]);
        }
    }
}

void MainWindow::initializeHistoricalLabels()
{
    historicalTimeLabels = {ui->historicalTimeLabel1, ui->historicalTimeLabel2, ui->historicalTimeLabel3, ui->historicalTimeLabel4, ui->historicalTimeLabel5,
                            ui->historicalTimeLabel6, ui->historicalTimeLabel7, ui->historicalTimeLabel8, ui->historicalTimeLabel9, ui->historicalTimeLabel10};
    historicalBusVoltageLabels = {ui->historicalBusVoltageLabel1, ui->historicalBusVoltageLabel2, ui->historicalBusVoltageLabel3, ui->historicalBusVoltageLabel4, ui->historicalBusVoltageLabel5,
                                  ui->historicalBusVoltageLabel6, ui->historicalBusVoltageLabel7, ui->historicalBusVoltageLabel8, ui->historicalBusVoltageLabel9, ui->historicalBusVoltageLabel10};
    historicalShuntVoltageLabels = {ui->historicalShuntVoltageLabel1, ui->historicalShuntVoltageLabel2, ui->historicalShuntVoltageLabel3, ui->historicalShuntVoltageLabel4, ui->historicalShuntVoltageLabel5,
                                    ui->historicalShuntVoltageLabel6, ui->historicalShuntVoltageLabel7, ui->historicalShuntVoltageLabel8, ui->historicalShuntVoltageLabel9, ui->historicalShuntVoltageLabel10};
    historicalLoadVoltageLabels = {ui->historicalLoadVoltageLabel1, ui->historicalLoadVoltageLabel2, ui->historicalLoadVoltageLabel3, ui->historicalLoadVoltageLabel4, ui->historicalLoadVoltageLabel5,
                                   ui->historicalLoadVoltageLabel6, ui->historicalLoadVoltageLabel7, ui->historicalLoadVoltageLabel8, ui->historicalLoadVoltageLabel9, ui->historicalLoadVoltageLabel10};
    historicalCurrentLabels = {ui->historicalCurrentLabel1, ui->historicalCurrentLabel2, ui->historicalCurrentLabel3, ui->historicalCurrentLabel4, ui->historicalCurrentLabel5,
                               ui->historicalCurrentLabel6, ui->historicalCurrentLabel7, ui->historicalCurrentLabel8, ui->historicalCurrentLabel9, ui->historicalCurrentLabel10};
    historicalPowerLabels = {ui->historicalPowerLabel1, ui->historicalPowerLabel2, ui->historicalPowerLabel3, ui->historicalPowerLabel4, ui->historicalPowerLabel5,
                             ui->historicalPowerLabel6, ui->historicalPowerLabel7, ui->historicalPowerLabel8, ui->historicalPowerLabel9, ui->historicalPowerLabel10};
}
