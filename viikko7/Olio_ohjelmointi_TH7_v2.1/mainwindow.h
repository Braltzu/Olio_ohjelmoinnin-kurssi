#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <qtimer.h> //ajastin

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE


//---------luokat---------------------------------
class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

//-----------------------------------------------
private slots:

    void updateProgressBar();
    void on_TIME120_clicked();
    void on_TIME5MIN_clicked();
    void on_START_clicked();
    void on_STOP_clicked();
    void on_SWITCH1_clicked();
    void on_SWITCH2_clicked();

//------------------------------------------------
private:

    Ui::MainWindow *ui;
    short p1Time;
    short p2Time;
    short currentPlayer;
    short gameTime;
    void setGameInfoText(QString);
    QTimer *pQTimer;

//-------------------------------------------------
};
#endif // MAINWINDOW_H
