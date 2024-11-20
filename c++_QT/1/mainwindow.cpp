#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->coffe_count->setValue(coffe);
    ui->milk_count->setValue(milk);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_do_coffe_clicked()
{
    get_dark(1);
    ui->coffe_count->setValue(coffe);
}


void MainWindow::on_do_capu_clicked()
{
    get_capu(1);
    ui->coffe_count->setValue(coffe);
    ui->milk_count->setValue(milk);
}


void MainWindow::on_coffe_count_valueChanged()
{
    coffe = ui->coffe_count->value();
}


void MainWindow::on_milk_count_valueChanged()
{
    milk = ui->milk_count->value();
}

void MainWindow::new_materials(){
    coffe = ui->coffe_count->value();
    milk = ui->milk_count->value();

}


void MainWindow::on_pushButton_clicked()
{
    new_materials();
    how_can_get();
}

