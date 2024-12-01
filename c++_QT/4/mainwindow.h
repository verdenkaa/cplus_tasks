#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTableView>
#include <QPushButton>
#include <QLabel>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QMenuBar>
#include <QStatusBar>
#include <QAction>
#include <QAbstractTableModel>

class CoffeeTableModel : public QAbstractTableModel {
    Q_OBJECT
public:
    explicit CoffeeTableModel(QObject *parent = nullptr);

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

    void addCoffeeMachine(const CoffeeData &newMachine);
    void clearCoffeeMachine();
    void deleteCoffeeMachine(int index);
    void updateData(const QList<CoffeeData> &newData);

private:
    QList<CoffeeData> coffeeList;
};

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void onAddMachineClicked();
    void onDeleteMachineClicked();
    void onClearFieldClicked();
    void saveFile();
    void openFile();

private:
    CoffeeTableModel *tableModel;
    QTableView *tableView;
    QPushButton *addButton;
    QPushButton *deleteButton;
    QPushButton *clearButton;
    QAction *openAction;  // Пункт меню "Открыть"
    QAction *saveAction;  // Пункт меню "Сохранить"
    QLabel *label;
};

#endif // MAINWINDOW_H
