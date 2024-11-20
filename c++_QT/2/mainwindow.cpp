#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>

// Конструктор модели
CoffeeTableModel::CoffeeTableModel(QObject *parent)
    : QAbstractTableModel(parent) {
    coffeeList = {
        {"Кофемашина 1", 50, 0, 2, 5},
        {"Кофемашина 2", 40, 30, 1, 0},
        {"Кофемашина 3", 30, 50, 5, 3},
        {"Кофемашина 4", 60, 0, 1, 10},
        {"Кофемашина 5", 0, 0, 10, 8}
    };
}

int CoffeeTableModel::rowCount(const QModelIndex & /*parent*/) const {
    return coffeeList.size();
}

int CoffeeTableModel::columnCount(const QModelIndex & /*parent*/) const {
    return 5; // Имя, кофе, молоко, сделано черного, сделано капучино
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
