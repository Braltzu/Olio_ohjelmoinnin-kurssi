#include "mainwindow.h"
#include "ui_mainwindow.h"



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //ui->ResultLine->setText(QString::number(result));

    //näppäimien yhdistäminen tapahtuu tässä "n0-9" on itse näppäin objekti
    //clicked on että mitä tapahtuessa tämä tapahtuu
    //ja numberClick on itse funktio mihin yhdistyy
//-----------------------------------------------------------------------------------------------------------
    connect(ui->n0,SIGNAL(clicked()), this, SLOT(numberClick()));       //numbers MASON WHAT DO THEY MEAN????
    connect(ui->n1,SIGNAL(clicked()), this, SLOT(numberClick()));       //näppäimiä sitä nämä ovat
    connect(ui->n2,SIGNAL(clicked()), this, SLOT(numberClick()));
    connect(ui->n3,SIGNAL(clicked()), this, SLOT(numberClick()));
    connect(ui->n4,SIGNAL(clicked()), this, SLOT(numberClick()));
    connect(ui->n5,SIGNAL(clicked()), this, SLOT(numberClick()));
    connect(ui->n6,SIGNAL(clicked()), this, SLOT(numberClick()));
    connect(ui->n7,SIGNAL(clicked()), this, SLOT(numberClick()));
    connect(ui->n8,SIGNAL(clicked()), this, SLOT(numberClick()));
    connect(ui->n9,SIGNAL(clicked()), this, SLOT(numberClick()));

    //erikois nibbelit(+,-,*,/)

    connect(ui->plus,SIGNAL(clicked()), this, SLOT(erikoistoimintoNapit()));
    connect(ui->minus,SIGNAL(clicked()), this, SLOT(erikoistoimintoNapit()));
    connect(ui->kertaa,SIGNAL(clicked()), this, SLOT(erikoistoimintoNapit()));
    connect(ui->jako,SIGNAL(clicked()), this, SLOT(erikoistoimintoNapit()));

    //erikoisemmat nibbelit
    //clear ja enter napit kummallakin oma metodi, koska miksipäs ei
    connect(ui->Enter,SIGNAL(clicked()), this, SLOT(enterButton()));
    connect(ui->Clear,SIGNAL(clicked()), this, SLOT(clearButton()));
//------------------------------------------------------------------------------------------------------------

}

MainWindow::~MainWindow(){
    delete ui;
}


//-------------------------------------------------------------
void MainWindow::on_NumB1_textChanged(const QString &arg1){          //näytöt
    number1 = arg1.toFloat();                                           //tallentaa näyttöihin laitetut numerot number1 ja 2 floattiin
}
void MainWindow::on_NumB2_textChanged(const QString &arg1){
    number2 = arg1.toFloat();
}
void MainWindow::on_ResultLine_textChanged(const QString &arg1){

}
//---------------------------------------------------------------


void MainWindow::numberClick()              //numberClick funktio yhdistää näppäimet ja numerot näytälle myöhemmin
{

    QPushButton * button = (QPushButton*)sender();


//-----------------------------------------------------------------------------------
    //osa sitä että saa enemmän numeroita yhteen boksiin
    //vain jumala tietää miten tämä tomii mutta se toimii
    double numeroese1;
    double numeroese2;

    QString newb1;
    QString newb2;

    numeroese1 = (ui->NumB1->text() + button->text()).toDouble();
    numeroese2 = (ui->NumB2->text() + button->text()).toDouble();

    newb1 = QString::number(numeroese1, 'g',15);    //numeroesen jälkeen tuleva koodin pätkä ", 'g',15);" tarkoittaa sitä kuinka monta numeroa voidaan laittaa boksiin ennen exponentiksi menemistä
    newb2 = QString::number(numeroese2, 'g',15);    //jos sen jättää kokonaan pois on rajana 6 merkkiä mikä on jo tarpeeksi
//------------------------------------------------------------------------------------

    if (state==2){                                  //säätelee kumpaan näyttöön laittaa numeroita state:lla 1 state=1 näyttö etc
        ui->NumB2->setText(newb2);
    }
    else {

        ui->NumB1->setText(newb1);

    }

}


//------------------------------------------------------------- numero näppäimet
void MainWindow::on_n1_clicked()
{
    numberClick();                                  //lähettää signaalin etiäppäin tuonne missä kauhea rivi connecteja

}

void MainWindow::on_n2_clicked()
{
    numberClick();

}

void MainWindow::on_n3_clicked()
{
    numberClick();

}

void MainWindow::on_n4_clicked()
{
    numberClick();

}

void MainWindow::on_n5_clicked()
{
    numberClick();

}

void MainWindow::on_n6_clicked()
{
    numberClick();

}

void MainWindow::on_n7_clicked()
{

    numberClick();


}

void MainWindow::on_n8_clicked()
{
    numberClick();

}

void MainWindow::on_n9_clicked()
{
    numberClick();

}

void MainWindow::on_n0_clicked()
{
    numberClick();

}
//------------------------------------------------- numerot loppuu
//-------------------------------------------------toiminto näppäimet alkavat

void MainWindow::on_Clear_clicked()
{
    state=1;
    ui->ResultLine->setText(" ");
    ui->NumB1->setText(" ");
    ui->NumB2->setText(" ");
    result=0;
}


void MainWindow::on_Enter_clicked()
{
    if(operand==0){

        result= number1+number2;
        ui->ResultLine->setText(QString::number(result));
    }
    else if(operand==1){

        result=number1-number2;
        ui->ResultLine->setText(QString::number(result));
    }
    else if(operand==2){

        result=number1*number2;
        ui->ResultLine->setText(QString::number(result));
    }
    else if(operand==3){

        result=number1/number2;
        ui->ResultLine->setText(QString::number(result));
    }

}

void MainWindow::on_plus_clicked()
{
    operand=0;
    state=2;

}


void MainWindow::on_minus_clicked()
{
    operand=1;
    state=2;
}


void MainWindow::on_kertaa_clicked()
{
    operand=2;
    state=2;
}


void MainWindow::on_jako_clicked()
{
    operand=3;
    state=2;
}

