#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

//-------------------------------------------
int player1=0;
int player2=0;
int a=3;
int t1=0;
int t2=0;

int value1=1200000;
int value2=1200000;

int value3=6000000;
int value4=6000000;
//-------------------------------------------

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

//-----------------------------
    timer= new QTimer(this);
    timer1= new QTimer(this);
    timer->start(1000);
    timer1->start(1000);
//----------------------------------------------------------------------------------
     connect(ui->switchPlayer1,SIGNAL(clicked()), this, SLOT(on_switchPlayer1_clicked()));
     connect(ui->switchPlayer2,SIGNAL(clicked()), this, SLOT(on_switchPlayer2_clicked()));

     connect(ui->start, SIGNAL(clicked()), this, SLOT(on_start_clicked()));
     connect(ui->stop, SIGNAL(clicked()), this, SLOT(on_stop_clicked()));

//----------------------------------------------------------------------------------

}

MainWindow::~MainWindow()
{
    delete ui;
    delete timer;
    delete timer1;
    timer=nullptr;
    timer1=nullptr;
}

//huono prototyyppi miten olisi sanut ajat laitettua kuntoon
//-----------------------------------------
// void MainWindow::tiimalasi1(){
//     QPushButton * button = (QPushButton*)sender();

//     connect(timer, SIGNAL(timeout()), this, SLOT(tiimalasi1()));
//
// }

// void MainWindow::tiimalasi2(){
//     QPushButton * button = (QPushButton*)sender();

//     connect(timer1, SIGNAL(timeout()), this,    SLOT(tiimalasi2()));
//

// }
//--------------------------------------------------

void MainWindow::on_start_clicked(){
    ui->gameInfo->setText("Game Start");
    player1=1;
    player2=0;


}


void MainWindow::on_stop_clicked(){
    ui->gameInfo->setText("Game stop");
    player1=0;
    player2=0;
    t1=0;
    t2=0;
    ui->progressBar->setValue(value1);
    ui->progressBar_2->setValue(value2);

}

void MainWindow::on_gameTime1_clicked(){
    ui->gameInfo->setText("Game time 120s");

    t1=1;
    t2=0;
        //tiimalasi1();

        ui->progressBar->setMaximum(12000000);
        ui->progressBar->setMinimum(0);
        ui->progressBar_2->setMaximum(12000000);
        ui->progressBar_2->setMinimum(0);



        while(player1==1 && t1==1){
            ui->progressBar->setValue(value1);
            value1=value1-1;
            qApp->processEvents();
        }

        while(player2==1 && t1==1){
            ui->progressBar_2->setValue(value2);
            value2=value2-1;
            qApp->processEvents();
        }

}


void MainWindow::on_gameTime2_clicked()
{   ui->gameInfo->setText("Game time 5min");
    a=1;
    t1=0;
    t2=1;
    //tiimalasi2();


    ui->progressBar->setMinimum(0);
    ui->progressBar->setMaximum(6000000);

    ui->progressBar_2->setMinimum(0);
    ui->progressBar_2->setMaximum(6000000);




    while(player1==1 && t2==1){
        ui->progressBar->setValue(value3);
        value3=value3-1;
        qApp->processEvents();
    }

    while(player2==1 && t2==1){
        ui->progressBar_2->setValue(value4);
        value4=value4-1;
        qApp->processEvents();
    }


}
//-------------------------------------------------

//jos tämä koodi olisi eläin, ampuisisin sen heti ja päästäisin pois kitumasta

//Switch players

//player switch ei toimi kuin vaan kerran
//-------------------------------------------------
void MainWindow::on_switchPlayer1_clicked(){
    player1=0;
    player2=1;

}


void MainWindow::on_switchPlayer2_clicked(){
    player1=1;
    player2=0;

}
//------------------------------------------------

//progressbaarit
//-------------------------------------------------
void MainWindow::on_progressBar_valueChanged(int value)
{

}


void MainWindow::on_progressBar_2_valueChanged(int value)
{

}




