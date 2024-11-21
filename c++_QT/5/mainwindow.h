#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QComboBox>
#include <QVBoxLayout>
#include <vector>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void updateComboBoxes();               // Обновление списка QComboBox
    void syncComboBoxes(const QString &text); // Синхронизация значений
    void clearComboBoxes();

private:
    Ui::MainWindow *ui;          // Указатель на UI форму
    QVBoxLayout *listLayout;     // Макет для размещения QComboBox
    std::vector<QComboBox *> comboBoxes; // Список QComboBox
};

#endif // MAINWINDOW_H