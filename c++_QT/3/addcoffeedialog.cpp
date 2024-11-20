#include "addcoffeedialog.h"
#include "ui_addcoffeedialog.h"

AddCoffeeDialog::AddCoffeeDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddCoffeeDialog) {
    ui->setupUi(this);
}

AddCoffeeDialog::~AddCoffeeDialog() {
    delete ui;
}

CoffeeTableModel::CoffeeData AddCoffeeDialog::getCoffeeData() const {
    CoffeeTableModel::CoffeeData data;
    data.name = ui->lineEditName->text();
    data.coffee = ui->spinBoxCoffee->value();
    data.milk = ui->spinBoxMilk->value();
    data.dark_done = ui->spinBoxDarkDone->value();
    data.capu_done = ui->spinBoxCapuDone->value();
    return data;
}
