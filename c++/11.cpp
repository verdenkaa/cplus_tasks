#include <iostream>

using namespace std;

// Функция для подсчёта количества делителей числа
int countDivisors(int num) {
    int count = 0;
    for (int i = 1; i < num ; i++) {
        if (num % i == 0) {
            count++;
        }
    }
    return count;
}

// Функция для подсчёта суммы делителей числа
int sumDivisors(int num) {
    int count = 0;
    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            count += i;
        }
    }
    return count;
}

int main() {
    int n;
    cout << "Введите размерность массива n: ";
    cin >> n;

    // Создание двумерного массива B
    int B[n][n];
    cout << "Введите элементы массива B: ";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> B[i][j];
        }
    }

    // Вычисление суммы квадратов элементов массива B
    int sumOfSquares = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            sumOfSquares += B[i][j] * B[i][j];
        }
    }
    cout << "Сумма квадратов элементов массива B: " << sumOfSquares << endl;


    // количество совершенных чисел
    int perfect_num = 0;
    for (int i = 0; i < n; i++){
        for (int j = i; j < n - i; j++){
            if (B[n - i - 1][j] == sumDivisors(B[n - i - 1][j])){
                perfect_num++;
            }
        }
    }
    cout << "Совершенных чисел: " << perfect_num << endl;



    // Формирование новой матрицы A
    int A[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            A[i][j] = countDivisors(B[i][j]);
        }
    }

    // Вычисление A^2
    int A2[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
        A2[i][j] = 0;
        for (int k = 0; k < n; k++) {
            A2[i][j] += A[i][k] * A[k][j];
            }

        }
    }

    // Вычисление C = B^T - A^2
    int C[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            C[i][j] = B[j][i] - A2[i][j];
        }
    }
    cout << "Значение выражения C = BT - A^2: " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}