#include "mainwindow.h"
#include <QSpinBox>
#include <QPushButton>
#include <QLabel>
#include <QGridLayout>
#include <QMenuBar>
#include <QStatusBar>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), coffe(10), milk(10) {
    // центральный виджет
    QWidget *centralWidget = new QWidget(this);
    setCentralWidget(centralWidget);

    // сетка
    QGridLayout *gridLayout = new QGridLayout();

    // Количество кофе
    QLabel *labelCoffee = new QLabel("Количество кофе", centralWidget);
    gridLayout->addWidget(labelCoffee, 1, 0);

    // ввод кофе
    coffeeCount = new QSpinBox(centralWidget);
    coffeeCount->setValue(coffe);
    gridLayout->addWidget(coffeeCount, 1, 1);

    // Количество молока
    QLabel *labelMilk = new QLabel("Количество молока", centralWidget);
    gridLayout->addWidget(labelMilk, 2, 0);

    // ввод молока
    milkCount = new QSpinBox(centralWidget);
    milkCount->setValue(milk);
    gridLayout->addWidget(milkCount, 2, 1);

    // Сварить черный кофе
    QPushButton *doCoffeeButton = new QPushButton("Сварить черный кофе", centralWidget);
    connect(doCoffeeButton, QPushButton::clicked, this, MainWindow::on_do_coffe_clicked);
    gridLayout->addWidget(doCoffeeButton, 3, 0);

    // Сварить капучино
    QPushButton *doCapuButton = new QPushButton("Сварить капучино", centralWidget);
    connect(doCapuButton, QPushButton::clicked, this, MainWindow::on_do_capu_clicked);
    gridLayout->addWidget(doCapuButton, 3, 1);

    // Сколько осталось
    QPushButton *statusButton = new QPushButton("Сколько осталось", centralWidget);
    connect(statusButton, QPushButton::clicked, this, MainWindow::on_pushButton_clicked);
    gridLayout->addWidget(statusButton, 4, 0);

    // Установка сетки
    centralWidget->setLayout(gridLayout);

    // сигналы изменения значений
    connect(coffeeCount, qOverload<int>(QSpinBox::valueChanged), this, MainWindow::on_coffe_count_valueChanged);
    connect(milkCount, qOverload<int>(QSpinBox::valueChanged), this, MainWindow::on_milk_count_valueChanged);

    resize(350, 200);
}

MainWindow::~MainWindow() {}

void MainWindow::on_do_coffe_clicked() {
    get_dark();
    coffeeCount->setValue(coffe);
}

void MainWindow::on_do_capu_clicked() {
    get_capu();
    coffeeCount->setValue(coffe);
    milkCount->setValue(milk);
}

void MainWindow::on_coffe_count_valueChanged() {
    coffe = coffeeCount->value();
}

void MainWindow::on_milk_count_valueChanged() {
    milk = milkCount->value();
}

void MainWindow::on_pushButton_clicked() {
    how_can_get();
}
