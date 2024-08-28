#include <iostream>
#include <algorithm>

using namespace std;

// Функция для транспонирования матрицы
void transpose(int matrix[][100], int transposed[][100], int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            transposed[j][i] = matrix[i][j];
        }
    }
}

// Функция для нахождения минимального элемента в массиве
int min_element(int arr[], int size) {
    int min_val = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] < min_val) {
            min_val = arr[i];
        }
    }
    return min_val;
}

// Функция для сравнения двух массивов по их минимальным элементам
bool compare(int a[], int b[], int size) {
    return min_element(a, size) < min_element(b, size);
}

// Функция для сортировки по минимальным элементам (пузырьковая)
void sorting(int matrix[][100], int n, int m) {
    for (int i = 0; i < m - 1; ++i) {
        for (int j = 0; j < m - i - 1; ++j) {
            if (compare(matrix[j], matrix[j + 1], n)) {
                for (int k = 0; k < n; ++k) {
                    swap(matrix[j][k], matrix[j + 1][k]);
                }
            }
        }
    }
}

int main() {
    int n, m;

    cout << "Введите количество строк (n) и столбцов (m): ";
    cin >> n >> m;

    int matrix[n][m];
    int transposed[m][n];

    cout << "Введите элементы матрицы:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }

    // Транспонируем матрицу
    transpose(matrix, transposed, n, m);

    // Сортируем строки транспонированной матрицы
    sorting(transposed, n, m);

    // Транспонируем матрицу обратно
    transpose(transposed, matrix, m, n);

    cout << "Матрица после сортировки столбцов:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
