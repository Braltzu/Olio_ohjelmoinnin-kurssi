#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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
    void on_NumB1_textChanged(const QString &arg1);

    void on_NumB2_textChanged(const QString &arg1);

    void on_ResultLine_textChanged(const QString &arg1);

    void on_n2_clicked();

    void on_n1_clicked();

    void on_n3_clicked();

    void on_n4_clicked();

    void on_n5_clicked();

    void on_n6_clicked();

    void on_n7_clicked();

    void on_n8_clicked();

    void on_n9_clicked();

    void on_n0_clicked();

    void on_Clear_clicked();

    void on_Enter_clicked();

    void on_plus_clicked();

    void on_minus_clicked();

    void on_kertaa_clicked();

    void on_jako_clicked();

private:
    Ui::MainWindow *ui;

    QString btnNum;         //mhadollisesti voi käyttää jos erikseen haluaa määrittää arvot num näppäimille, mutta ei ollut tarvetta

    float number1, number2; //tähän tallentuu näytöstä otetut luvut
    int state;              //määrittää kumpaan tauluun tulee numeroita
    float result=0;
    short operand;          //määrittää mikä operandi käytössä

    void numberClick();

};
#endif // MAINWINDOW_H
