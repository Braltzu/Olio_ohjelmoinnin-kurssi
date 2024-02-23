#include "mainwindow.h"
#include "ui_mainwindow.h"

float number1, number2, result=0;              //määritellään Numberit 1&2 numerobokseihin tallennuspaikoiksi

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


// UI namiskuukkelit
//----------------------------------------------------------------+
void MainWindow::on_LaskeNappi_clicked()                             //nappi
{
    result= number1 + number2;

    ui->TulosTulos->setText(QString::number(result));              //lisää "result" tuloksen label laatikkoon näkyville
}
//----------------------------------------------------------------+
void MainWindow::on_ResetNappi_clicked()
{
    ui->TulosTulos->setText(" ");
    ui->numBox1->setText(" ");
    ui->numBox2->setText(" ");
}
//----------------------------------------------------------------+
void MainWindow::on_numBox1_textChanged(const QString &arg1)        //numbox1 eli ensimmäinen laatikko
{
   number1 = arg1.toFloat();
}

//----------------------------------------------------------------+
void MainWindow::on_numBox2_textChanged(const QString &arg1)        //numbox2, toinen laatikko
{
    number2 = arg1.toFloat();
}
//----------------------------------------------------------------+



