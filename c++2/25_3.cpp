#include <iostream>
#include <cmath>
using namespace std;

// Функция для нахождения номера минимального по модулю элемента массива
float MinAbs(float X[], int n) {
    float min = 0;
    float minabs = abs(X[0]);

    for (int i = 1; i < n; ++i) {
        float absv = abs(X[i]);
        if (absv < minabs) {
            min = i;
            minabs = absv;
        }
    }
    return min;
}

// Функция для вычисления среднего арифметического первых k положительных элементов
float SumK(float X[], int n, int k) {
    int count = 0;
    float sum = 0.0;

    for (int i = 0; i < n/2 + 1; ++i) {
        if (X[i] > 0) {
            sum += X[i];
            count++;
        }
    }

    if (count > 0) {
        return sum / count;
    } else {
        return 0.0; // Если нет положительных элементов
    }
}

int main() {
    int n = 6; // Размер массива X
    float X[n] = {1.0, 2.0, 3.0, -1.0, -2.0, -3.0};

    int minAbsIndex = MinAbs(X, n);
    cout << "Номер минимального по модулю элемента: " << minAbsIndex << endl;

    int k = 3; // Количество первых положительных элементов для вычисления среднего
    float avgPositives = SumK(X, n, k);
    cout << "Среднее арифметическое первых " << k << " положительных элементов: " << avgPositives << endl;

    return 0;
}
