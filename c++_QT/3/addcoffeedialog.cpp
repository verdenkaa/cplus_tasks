#include "addcoffeedialog.h"
#include <QVBoxLayout>
#include <QFormLayout>

AddCoffeeDialog::AddCoffeeDialog(QWidget *parent)
    : QDialog(parent) {
    lineEditName = new QLineEdit(this);
    spinBoxCoffee = new QSpinBox(this);
    spinBoxMilk = new QSpinBox(this);
    spinBoxDarkDone = new QSpinBox(this);
    spinBoxCapuDone = new QSpinBox(this);

    // кнопки OK и Cancel
    buttonBox = new QDialogButtonBox(QDialogButtonBox::Ok | QDialogButtonBox::Cancel, this);
    connect(buttonBox, QDialogButtonBox::accepted, this, QDialog::accept);
    connect(buttonBox, QDialogButtonBox::rejected, this, QDialog::reject);

    // Создаем макет для формы
    QFormLayout *formLayout = new QFormLayout();
    formLayout->addRow("Название:", lineEditName);
    formLayout->addRow("Кофе осталось:", spinBoxCoffee);
    formLayout->addRow("Молоко осталось:", spinBoxMilk);
    formLayout->addRow("Черного кофе сделано:", spinBoxDarkDone);
    formLayout->addRow("Капучино сделано:", spinBoxCapuDone);

    QVBoxLayout *mainLayout = new QVBoxLayout(this);
    mainLayout->addLayout(formLayout);
    mainLayout->addWidget(buttonBox);

    setLayout(mainLayout);
}

AddCoffeeDialog::~AddCoffeeDialog() {
}

CoffeeTableModel::CoffeeData AddCoffeeDialog::getCoffeeData() const {
    CoffeeTableModel::CoffeeData data;
    data.name = lineEditName->text();
    data.coffee = spinBoxCoffee->value();
    data.milk = spinBoxMilk->value();
    data.dark_done = spinBoxDarkDone->value();
    data.capu_done = spinBoxCapuDone->value();
    return data;
}
