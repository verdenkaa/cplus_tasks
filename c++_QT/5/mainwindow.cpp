#include "mainwindow.h"
#include <QComboBox>
#include <QHBoxLayout>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent) {
    // Центральный виджет
    QWidget *centralWidget = new QWidget(this);
    setCentralWidget(centralWidget);

    // Горизонтальный макет
    QHBoxLayout *topLayout = new QHBoxLayout();

    spinBox = new QSpinBox(this);
    updateButton = new QPushButton("Обновить", this);

    topLayout->addWidget(spinBox);
    topLayout->addWidget(updateButton);

    scrollArea = new QScrollArea(this);
    scrollArea->setWidgetResizable(true);

    scrollContent = new QWidget(this);
    listLayout = new QVBoxLayout(scrollContent);
    scrollContent->setLayout(listLayout);
    scrollArea->setWidget(scrollContent);

    // Основной макет
    QVBoxLayout *mainLayout = new QVBoxLayout();
    mainLayout->addLayout(topLayout);
    mainLayout->addWidget(scrollArea);

    centralWidget->setLayout(mainLayout);

    // Подключение сигналов
    connect(updateButton, QPushButton::clicked, this, &MainWindow::updateComboBoxes);

    resize(400, 300);
}

MainWindow::~MainWindow() {
    clearComboBoxes();
}

void MainWindow::updateComboBoxes() {
    clearComboBoxes();

    int count = spinBox->value();

    // Создание нового списка QComboBox
    for (int i = 0; i < count; i++) {
        QComboBox *comboBox = new QComboBox(this);
        comboBox->addItems({"A", "B", "C", "D"});
        listLayout->addWidget(comboBox);
        comboBoxes.push_back(comboBox);
        connect(comboBox, QComboBox::currentTextChanged, this, MainWindow::syncComboBoxes);
    }
}

void MainWindow::syncComboBoxes(const QString &text) {
    // Обновление всех QComboBox на выбранное значение
    for (QComboBox *comboBox : comboBoxes) {
        if (comboBox->currentText() != text) {
            comboBox->blockSignals(true);  // Отключить сигнал из-за рекурсии
            comboBox->setCurrentText(text);
            comboBox->blockSignals(false); // Включить сигнал
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
