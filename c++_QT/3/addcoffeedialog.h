#ifndef ADDCOFFEEDIALOG_H
#define ADDCOFFEEDIALOG_H

#include <QDialog>
#include "mainwindow.h" // Для доступа к CoffeeTableModel::CoffeeData

namespace Ui {
class AddCoffeeDialog;
}

class AddCoffeeDialog : public QDialog {
    Q_OBJECT

public:
    explicit AddCoffeeDialog(QWidget *parent = nullptr);
    ~AddCoffeeDialog();

    // Метод для получения заполненной структуры
    CoffeeTableModel::CoffeeData getCoffeeData() const;

    Ui::AddCoffeeDialog *ui;
};

#endif // ADDCOFFEEDIALOG_H
