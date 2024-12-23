#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QString>
#include <iostream>
#include <algorithm>
#include <string>
#include <QSpinBox>

using namespace std;

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    int coffe = 10.0;
    int milk = 10.0;
    int coffe_by_person = 2.0;
    int milk_by_person = 1.0;
    int dark_done = 0;
    int capu_done = 0;

    // Сварить тёмный
    void get_dark(){
        if (coffe - coffe_by_person >= 0){
            dark_done++;
            coffe = coffe - coffe_by_person;}else{
            QMessageBox::information(this, "Ошибка", "Недостаточно кофе!");
        }
    }

    // Сварить копучино
    void get_capu(){
        if (coffe - coffe_by_person >= 0 && milk - milk_by_person >= 0){
            capu_done++;
            coffe = coffe - coffe_by_person;
            milk = milk - milk_by_person;
        }else if(coffe - coffe_by_person < 0){
            QMessageBox::information(this, "Ошибка", "Недостаточно кофе!");
        }else{
            QMessageBox::information(this, "Ошибка", "Недостаточно молока!");
        }

    }

    // Подсчет остатков
    void how_can_get(){
        int coffe_can = coffe / coffe_by_person;
        int capu_can = min(coffe / coffe_by_person, milk / milk_by_person);

        QString status = QString("Можно приготовить черного кофе %1 и капучино %2").arg(coffe_can).arg(capu_can);
        QMessageBox::information(this,  "Количество", status);
    }

private slots:
    void on_do_coffe_clicked();

    void on_do_capu_clicked();

    void on_coffe_count_valueChanged();

    void on_milk_count_valueChanged();

    void on_pushButton_clicked();


private:
    QSpinBox *coffeeCount;
    QSpinBox *milkCount;
};
#endif // MAINWINDOW_H
