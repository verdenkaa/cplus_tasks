#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),
    ui(new Ui::MainWindow) {
    ui->setupUi(this);

    QWidget *scrollContent = new QWidget(this);
    listLayout = new QVBoxLayout(scrollContent);
    scrollContent->setLayout(listLayout);
    ui->scrollArea->setWidget(scrollContent);

    connect(ui->updateButton, &QPushButton::clicked, this, &MainWindow::updateComboBoxes);
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::updateComboBoxes() {
    clearComboBoxes();

    int count = ui->spinBox->value();

    // Создание нового списка QComboBox
    for (int i = 0; i < count; i++) {
        QComboBox *comboBox = new QComboBox(this);
        comboBox->addItems({"A", "B", "C", "D"});
        listLayout->addWidget(comboBox);
        comboBoxes.push_back(comboBox);
        connect(comboBox, &QComboBox::currentTextChanged, this, &MainWindow::syncComboBoxes);
    }
}

void MainWindow::syncComboBoxes(const QString &text) {
    // Обновление всех QComboBox на выбранное значение
    for (QComboBox *comboBox : comboBoxes) {
        if (comboBox->currentText() != text) {
            comboBox->blockSignals(true);  // Отключить сигналы, чтобы избежать рекурсии
            comboBox->setCurrentText(text);
            comboBox->blockSignals(false); // Включить сигналы обратно
        }
    }
}

void MainWindow::clearComboBoxes() {
    for (QComboBox *comboBox : comboBoxes) {
        listLayout->removeWidget(comboBox);
        delete comboBox;
    }
    comboBoxes.clear();
}
