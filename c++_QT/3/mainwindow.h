#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QAbstractTableModel>

namespace Ui {
class MainWindow;
}

// Модель данных
class CoffeeTableModel : public QAbstractTableModel {
    Q_OBJECT
public:
    CoffeeTableModel(QObject *parent = nullptr);

    int rowCount(const QModelIndex &parent = QModelIndex()) const override;
    int columnCount(const QModelIndex &parent = QModelIndex()) const override;
    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const override;
    QVariant headerData(int section, Qt::Orientation orientation, int role = Qt::DisplayRole) const override;

    struct CoffeeData {
        QString name;
        int coffee;
        int milk;
        int dark_done;
        int capu_done;

    };
    QList<CoffeeData> coffeeList;

    void addCoffeeMachine(const CoffeeData &newMachine);

    void clearCoffeeMachine();

    void deleteCoffeeMachine(int index);

};

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::MainWindow *ui;
    CoffeeTableModel *tableModel;
};

#endif // MAINWINDOW_H
