#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <random>
#include <algorithm>
#include <iostream>
#include <QObject>
#include <QAbstractTableModel>
#include <QList>

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


private:
    Ui::MainWindow *ui;
};


class CustomModel : public QAbstractTableModel
{
public:
    CustomModel(QObject* parent = nullptr)
        : QAbstractTableModel(parent)
    {
        // initialize data
    }
    int rowCount(const QModelIndex& parent = QModelIndex()) const override
    {
        // return number of rows
    }
    int columnCount(const QModelIndex& parent = QModelIndex()) const override
    {
        // return number of columns
    }
    QVariant data(const QModelIndex& index, int role = Qt::DisplayRole) const override
    {
        // return data for the given index and role
    }
};


#endif // MAINWINDOW_H
