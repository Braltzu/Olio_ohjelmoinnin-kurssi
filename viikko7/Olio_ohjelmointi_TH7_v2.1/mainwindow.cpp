#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) //timer
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
//--------timerin "uusiminen"--------+
{//setup juttu tulee vakiona
    ui->setupUi(this);

    pQTimer = new QTimer();
}
//--------destructori------------------------------------------------+
MainWindow::~MainWindow()
{
    delete ui;
    delete pQTimer;
    pQTimer = nullptr;
}
//--------gamestatus--------------------------------------------------+
void MainWindow::setGameInfoText(QString a)
{
    ui->GAMESTATUS->setText(a); //pelin tila
}


//---------Prog.timer ajat---------------------------------------------+
void MainWindow::on_TIME120_clicked()
{
    p1Time = 120;
    p2Time = 120;
    ui->PROGRESS1->setMaximum(120);
    ui->PROGRESS1->setValue(p1Time);
    ui->pb2->setMaximum(120);
    ui->pb2->setValue(p2Time);
    setGameInfoText("Ready to play, press start");
    connect(pQTimer,SIGNAL(timeout()),this,SLOT(updateProgressBar()));
}

void MainWindow::on_TIME5MIN_clicked()
{
    p1Time = 300; //5*60
    p2Time = 300;
    ui->PROGRESS1->setMaximum(300);
    ui->PROGRESS1->setValue(p1Time);
    ui->pb2->setMaximum(300);
    ui->pb2->setValue(p2Time);
    setGameInfoText("Ready to play, press start");
    connect(pQTimer,SIGNAL(timeout()),this,SLOT(updateProgressBar()));
}


//-----------update progressbar-------------------------------------------+
void MainWindow::updateProgressBar()
{
    if(currentPlayer == 1){
        ui->PROGRESS1->setValue(p1Time);
        p1Time--;
    }
    else if(currentPlayer == 2){
        ui->pb2->setValue(p2Time);
        p2Time--;
    }
    if(p1Time == 0){
        setGameInfoText("Player 2 WON!");
        pQTimer->stop();
    }
    if(p2Time == 0){
        setGameInfoText("Player 1 WON!");
        pQTimer->stop();
    }

}
//------------------------------------------------------------------------

//---------NIBBELIT-------------------------------------------------------
void MainWindow::on_START_clicked()
{
    currentPlayer=1;
    setGameInfoText("Game ongoing");
    pQTimer->start(1000);
}

void MainWindow::on_SWITCH1_clicked()
{
    currentPlayer = 2;
}

void MainWindow::on_SWITCH2_clicked()
{
    currentPlayer = 1;
}

void MainWindow::on_STOP_clicked()
{
    setGameInfoText("Select playtime to start a new game");
    pQTimer->stop();
}
//--------NIBBELIT LOBBU :(------------------------------------------------
