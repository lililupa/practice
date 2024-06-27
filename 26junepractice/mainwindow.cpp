#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "task1.h"
#include "task2.h"
#include "task3.h"
using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->lineEdit_2->hide();
    ui->lineEdit_3->hide();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_comboBox_activated(int index)
{
    ui ->label->setText("Answer:");
    if (index == 0){
        ui->lineEdit_2->hide();
        ui->lineEdit_3->hide();
        ui ->lineEdit ->clear();
    }
    if (index == 1) {
        ui->lineEdit_3->hide();
        ui->lineEdit_2 -> setVisible(true);
        ui->lineEdit->clear();
        ui->lineEdit_2->clear();
    }
    if (index == 2){
        ui->lineEdit_2 -> setVisible(true);
        ui->lineEdit_3 -> setVisible(true);
        ui->lineEdit->clear();
        ui->lineEdit_2->clear();
        ui->lineEdit_3->clear();
    }
}



void MainWindow::on_pushButton_clicked()
{
    int index = ui ->comboBox ->currentIndex();
    if (index == 0){
        QString input_text = ui-> lineEdit -> text();
        bool ok;
        int number = input_text.toInt(&ok);
        task1 a;
        QString s = a.my_f1(number);
        ui -> label -> setText(s);
    }
    if (index == 1){
        QString input_text1 = ui-> lineEdit -> text();
        QString input_text2 = ui-> lineEdit_2 -> text();
        bool ok;
        double yg = input_text1.toDouble(&ok);
        double eps = input_text2.toInt(&ok);
        task2 el;
        QString s = el.my_f2(yg, eps);
        ui -> label -> setText(s);
    }
    if (index == 2){
        QString input1 = ui-> lineEdit -> text();
        QString input2 = ui-> lineEdit_2 -> text();
        QString input3 = ui-> lineEdit_3 -> text();
        int a = input1.toInt();
        int b = input2.toInt();
        int c = input3.toInt();
        task3 el;
        QString s = el.my_f3(a, b, c);
        ui -> label -> setText(s);
    }
}

