#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_gameTime1_clicked();

    void on_gameTime2_clicked();

    void on_switchPlayer1_clicked();

    void on_switchPlayer2_clicked();

    void on_progressBar_valueChanged(int value);

    void on_progressBar_2_valueChanged(int value);
    void on_start_clicked();
    void on_stop_clicked();
    // void tiimalasi1();
    // void tiimalasi2();
private:
    Ui::MainWindow *ui;
    QTimer * timer;
    QTimer * timer1;

    void clickHandler();



        //taas lisää prototyyppejä

    //----------------------------------------------
    short gamestart=1;      //false true statementit game infoa varten että saa oikeat tekstit näkyviin
    short gamestop=0;
    short clocktime1=0;    //120 sec ajalle
    short clocktime2=0;    //5min ajalle
    short voittaja=0;           //voittaja tekstille
    short gameIdle=1;       //pelin odotus ruutu ennen alkua
    short peliGo=0;         //pelinaikainen teksti
    //-------------------------------------------------
};
#endif // MAINWINDOW_H
