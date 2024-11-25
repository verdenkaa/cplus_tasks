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

    int rowCount(const QModelIndex &parent = QModelIndex()) const;  // без константы не перезаписывает новый экзепляр абстрактного класса
    int columnCount(const QModelIndex &parent = QModelIndex()) const;
    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const;
    QVariant headerData(int section, Qt::Orientation orientation, int role = Qt::DisplayRole) const;

    struct CoffeeData {
        QString name;
        int coffee;
        int milk;
        int dark_done;
        int capu_done;

    };
    QList<CoffeeData> coffeeList;
};

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    CoffeeTableModel *tableModel;
};

#endif // MAINWINDOW_H
