#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSerialPort>
#include <QTimer>
#include <QLabel>
#include <QProgressBar>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void readData();
    void updateHistoricalData();

private:
    Ui::MainWindow *ui;
    QSerialPort *serial;
    QTimer *timer;
    QStringList historicalData;

    QProgressBar *batteryProgressBar;
    float maxPower;  // dalam mW

    QLabel *currentTimeLabel;
    QLabel *busVoltageLabel;
    QLabel *shuntVoltageLabel;
    QLabel *loadVoltageLabel;
    QLabel *currentLabel;
    QLabel *powerLabel;

    QList<QLabel*> historicalTimeLabels;
    QList<QLabel*> historicalBusVoltageLabels;
    QList<QLabel*> historicalShuntVoltageLabels;
    QList<QLabel*> historicalLoadVoltageLabels;
    QList<QLabel*> historicalCurrentLabels;
    QList<QLabel*> historicalPowerLabels;

    void initializeHistoricalLabels();
};

#endif // MAINWINDOW_H
