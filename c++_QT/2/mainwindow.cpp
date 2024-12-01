#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include <QTableView>
#include <QLabel>
#include <QVBoxLayout>

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

int CoffeeTableModel::rowCount(const QModelIndex&) const {
    return coffeeList.size();
}

int CoffeeTableModel::columnCount(const QModelIndex&) const {
    return 5; // Имя, кофе, молоко, сделано черного, сделано капучино
}

// Данные
QVariant CoffeeTableModel::data(const QModelIndex &index, int role) const {
    if (role == Qt::DisplayRole){ // без задания роли появляются чекбоксы

    const CoffeeData coffee = coffeeList[index.row()];
    switch (index.column()) {
    case 0: return coffee.name;
    case 1: return coffee.coffee;
    case 2: return coffee.milk;
    case 3: return coffee.dark_done;
    case 4: return coffee.capu_done;
    default: return QVariant();
    }}
    return QVariant(); // по умолчанию предлагается возвращать функцию даты
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
    : QMainWindow(parent), tableModel(new CoffeeTableModel(this)) {
    // Центральный виджет
    QWidget *centralWidget = new QWidget(this);
    setCentralWidget(centralWidget);

    // Заголовок
    QLabel *titleLabel = new QLabel("Список кофемашин", this);

    // Таблица
    QTableView *tableView = new QTableView(this);
    tableView->setModel(tableModel);
    tableView->resizeColumnsToContents();

    // Расположение виджетов
    QVBoxLayout *layout = new QVBoxLayout();
    layout->addWidget(titleLabel);
    layout->addWidget(tableView);
    centralWidget->setLayout(layout);

    resize(800, 600);
}

MainWindow::~MainWindow() {}
