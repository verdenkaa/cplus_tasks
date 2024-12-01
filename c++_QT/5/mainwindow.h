#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QScrollArea>
#include <QSpinBox>
#include <QPushButton>
#include <QVBoxLayout>
#include <vector>
#include <QComboBox>

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void updateComboBoxes();
    void syncComboBoxes(const QString &text);
    void clearComboBoxes();

private:
    QScrollArea *scrollArea;
    QSpinBox *spinBox;
    QPushButton *updateButton;
    QVBoxLayout *listLayout;
    QWidget *scrollContent;
    std::vector<QComboBox*> comboBoxes; // Список QComboBox
};

#endif // MAINWINDOW_H
