#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QList>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QTableView* tableView = new QTableView;
    CustomModel* model = new CustomModel;
    model->beginInsertColumns(1);
    tableView->setModel(model);

}

MainWindow::~MainWindow()
{
    delete ui;
}


