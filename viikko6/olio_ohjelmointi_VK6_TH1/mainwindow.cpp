#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
    ui=nullptr;
}

void MainWindow::updateResult()
{
    const int sum = ui.inputSpinBox1->value() + ui.inputSpinBox2->value();
    ui.outputWidget->setText(QString::number(sum));
}

void MainWindow::on_pushButton_clicked()
{

}

