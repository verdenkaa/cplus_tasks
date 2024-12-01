#include "mainwindow.h"
#include "addcoffeedialog.h"
#include <QMessageBox>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QHeaderView>

CoffeeTableModel::CoffeeTableModel(QObject *parent) : QAbstractTableModel(parent) {
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
    return 5;
}

void CoffeeTableModel::addCoffeeMachine(const CoffeeData &newMachine) {
    int newRow = coffeeList.size();
    beginInsertRows(QModelIndex(), newRow, newRow);
    coffeeList.append(newMachine);
    endInsertRows();
}

void CoffeeTableModel::clearCoffeeMachine() {
    beginResetModel();
    coffeeList.clear();
    endResetModel();
}

void CoffeeTableModel::deleteCoffeeMachine(int index) {
    beginRemoveRows(QModelIndex(), index, index);
    coffeeList.removeAt(index);
    endRemoveRows();
}

QVariant CoffeeTableModel::data(const QModelIndex &index, int role) const {
    if (role == Qt::DisplayRole) {
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
    return QVariant();
}

QVariant CoffeeTableModel::headerData(int section, Qt::Orientation orientation, int role) const {
    if (role == Qt::DisplayRole && orientation == Qt::Horizontal) {
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

    // Таблица
    tableView = new QTableView(this);
    tableView->setModel(tableModel);
    tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    // Кнопки
    addButton = new QPushButton("Добавить машину", this);
    deleteButton = new QPushButton("Удалить машину", this);
    clearButton = new QPushButton("Очистить поле", this);

    // Метка
    label = new QLabel("Список кофемашин", this);

    // Подключение сигналов
    connect(addButton, QPushButton::clicked, this, MainWindow::onAddMachineClicked);
    connect(deleteButton, QPushButton::clicked, this, MainWindow::onDeleteMachineClicked);
    connect(clearButton, QPushButton::clicked, this, MainWindow::onClearFieldClicked);

    // Макеты
    QVBoxLayout *mainLayout = new QVBoxLayout();
    mainLayout->addWidget(label);
    mainLayout->addWidget(tableView);

    QHBoxLayout *buttonLayout = new QHBoxLayout();
    buttonLayout->addWidget(addButton);
    buttonLayout->addWidget(deleteButton);
    buttonLayout->addWidget(clearButton);

    mainLayout->addLayout(buttonLayout);
    centralWidget->setLayout(mainLayout);

    // Установка размера окна
    resize(800, 600);
    setWindowTitle("MainWindow");
}


MainWindow::~MainWindow() {}

void MainWindow::onAddMachineClicked() {
    AddCoffeeDialog dialog(this);
    if (dialog.exec() == QDialog::Accepted) {
        CoffeeTableModel::CoffeeData newMachine = dialog.getCoffeeData();
        tableModel->addCoffeeMachine(newMachine);
    }
}

void MainWindow::onDeleteMachineClicked() {
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "", "Уверены что хотите удалить строку?",
                                  QMessageBox::Yes | QMessageBox::No);
    if (reply == QMessageBox::Yes) {
        QModelIndexList indexes = tableView->selectionModel()->selectedRows();
        if (!indexes.isEmpty()) {
            int index = indexes.first().row();
            tableModel->deleteCoffeeMachine(index);
        }
    }
}

void MainWindow::onClearFieldClicked() {
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "", "Уверены что хотите очистить базу?",
                                  QMessageBox::Yes | QMessageBox::No);
    if (reply == QMessageBox::Yes) {
        tableModel->clearCoffeeMachine();
    }
}
