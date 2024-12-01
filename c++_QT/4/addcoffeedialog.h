#ifndef ADDCOFFEEDIALOG_H
#define ADDCOFFEEDIALOG_H

#include <QDialog>
#include <QLineEdit>
#include <QSpinBox>
#include <QPushButton>
#include <QDialogButtonBox>
#include "mainwindow.h" // Для доступа к CoffeeTableModel::CoffeeData

class AddCoffeeDialog : public QDialog {
    Q_OBJECT

public:
    explicit AddCoffeeDialog(QWidget *parent = nullptr);
    ~AddCoffeeDialog();

    CoffeeTableModel::CoffeeData getCoffeeData() const;

private:
    QLineEdit *lineEditName;
    QSpinBox *spinBoxCoffee;
    QSpinBox *spinBoxMilk;
    QSpinBox *spinBoxDarkDone;
    QSpinBox *spinBoxCapuDone;
    QDialogButtonBox *buttonBox;
};

#endif // ADDCOFFEEDIALOG_H

