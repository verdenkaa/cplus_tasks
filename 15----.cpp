#include <iostream>
#include <cmath>

using namespace std;

const int MAX_SIZE = 100; // Максимальный размер матрицы

// Функция для обмена значений двух переменных
void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

// Функция для сортировки столбцов матрицы по возрастанию модулей
void sortColumns(int matrix[MAX_SIZE][MAX_SIZE], int n) {
    for (int j = 0; j < n; ++j) {
        for (int i = 0; i < n - 1; ++i) {
            if (abs(matrix[i][j]) > abs(matrix[i + 1][j])) {
                for (int k = 0; k < n; ++k) {
                    swap(matrix[i][k], matrix[i + 1][k]);
                }
            }
        }
    }
}

int main() {
    int n;
    cout << "Введите размер матрицы: ";
    cin >> n;

    int matrix[MAX_SIZE][MAX_SIZE];

    cout << "Введите элементы матрицы:" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matrix[i][j];
        }
    }

    // Сортировка столбцов по возрастанию модулей
    sortColumns(matrix, n);

    cout << "Измененная матрица 1:" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    // Поменять местами элементы на диагоналях в столбцах
    for (int j = 0; j < n; ++j) {
        swap(matrix[j][j], matrix[n - j - 1][j]);
    }

    cout << "Измененная матрица 2:" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    // Формирование вектора B и подсчет сумм составных значений
    int B[MAX_SIZE] = {0};
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (matrix[i][j] % 2 != 0) { // Если элемент составной
                B[i] += matrix[i][j];
            }
        }
    }

    // Вывод результата
    cout << "Измененная матрица:" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Вектор B:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << B[i] << " ";
    }
    cout << endl;

    return 0;
}