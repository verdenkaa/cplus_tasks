#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include <QInputDialog>
#include <QMessageBox>
#include <QItemSelectionModel>
#include "addcoffeedialog.h"

// Конструктор модели
CoffeeTableModel::CoffeeTableModel(QObject *parent):
    QAbstractTableModel(parent) {
    coffeeList = {
        {"Кофемашина 1", 50, 0, 2, 5},
        {"Кофемашина 2", 40, 30, 1, 0},
        {"Кофемашина 3", 30, 50, 5, 3},
        {"Кофемашина 4", 60, 0, 1, 10},
        {"Кофемашина 5", 0, 0, 10, 8}
    };
}

int CoffeeTableModel::rowCount(const QModelIndex &) const {
    return coffeeList.size();
}

int CoffeeTableModel::columnCount(const QModelIndex &) const {
    return 5; // Имя, кофе, молоко, сделано черного, сделано капучино
}

void CoffeeTableModel::addCoffeeMachine(const CoffeeData &newMachine) {
    int newRow = coffeeList.size();
    beginInsertRows(QModelIndex(), newRow, newRow);
    coffeeList.append(newMachine);
    endInsertRows();
}

void CoffeeTableModel::clearCoffeeMachine() {
    beginRemoveRows(QModelIndex(), 0, coffeeList.size());
    coffeeList.remove(0, coffeeList.size());
    endRemoveRows();
}

void CoffeeTableModel::deleteCoffeeMachine(int index) {
    beginRemoveRows(QModelIndex(), index, index);
    coffeeList.removeAt(index);
    endRemoveRows();
}

// Данные
QVariant CoffeeTableModel::data(const QModelIndex &index, int role) const {
    if (role != Qt::DisplayRole)
        return QVariant();

    const CoffeeData &coffee = coffeeList[index.row()];
    switch (index.column()) {
    case 0: return coffee.name;
    case 1: return coffee.coffee;
    case 2: return coffee.milk;
    case 3: return coffee.dark_done;
    case 4: return coffee.capu_done;
    default: return QVariant();
    }
}

// Заголовки
QVariant CoffeeTableModel::headerData(int section, Qt::Orientation orientation, int role) const {
    if (orientation == Qt::Horizontal && role == Qt::DisplayRole) {
        switch (section) {
        case 0: return "Имя кофемашины";
        case 1: return "Кофе осталось";
        case 2: return "Молока осталось";
        case 3: return "Черного кофе сделано";
        case 4: return "Капучино сделано";
        default: return QVariant();
        }
    }
    return QVariant();
}


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),
    ui(new Ui::MainWindow),
    tableModel(new CoffeeTableModel(this)) {
    ui->setupUi(this);
    ui->tableView->setModel(tableModel);
    ui->tableView->resizeColumnsToContents();
}

MainWindow::~MainWindow() {
    delete ui;
}


void MainWindow::on_pushButton_clicked() {
    AddCoffeeDialog dialog(this);
    if (dialog.exec() == QDialog::Accepted) {
        CoffeeTableModel::CoffeeData newMachine = dialog.getCoffeeData();
        tableModel->addCoffeeMachine(newMachine); // Добавляем через метод модели
    }
}


void MainWindow::on_pushButton_2_clicked()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "", "Уверены что хотите удалить строку?",
                                  QMessageBox::Yes|QMessageBox::No);
    if (reply == QMessageBox::Yes) {
        QModelIndexList indexes = ui->tableView->selectionModel()->selectedRows();
        int index = indexes.first().row();
        tableModel->deleteCoffeeMachine(index);
    }
}


void MainWindow::on_pushButton_3_clicked()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "", "Уверены что хотите очистить базу?",
                                  QMessageBox::Yes|QMessageBox::No);
    if (reply == QMessageBox::Yes) {
        tableModel->clearCoffeeMachine();
    }
}

