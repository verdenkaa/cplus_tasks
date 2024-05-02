#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Функция для проверки, является ли число простым
bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

// Функция для проверки, содержит ли число цифры 1, 2 или 3
bool cont123(int num) {
    while (num > 0) {
        int i = num % 10;
        if (i == 1 || i == 2 || i == 3) {
            return true;
        }
        num /= 10;
    }
    return false;
}

int main() {
    vector<int> X = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int> Z = {10, 11, 12, 13, 14, 15, 16, 17};


    vector<int> Y;

    // Находим простые числа из массивов X и Z
    for (int i : X) {
        if (isPrime(i) && cont123(i)) {
            Y.push_back(i);
        }
    }
    for (int i : Z) {
        if (isPrime(i) && cont123(i)) {
            Y.push_back(i);
        }
    }

    // Сортируем массив Y по убыванию
    sort(Y.begin(), Y.end());

    cout << "Y: ";
    for (auto x : Y) 
        cout << x << " ";
    cout << endl;

    int max = Y[Y.size() - 1] * Y[Y.size() - 2];
    int min = Y[0] * Y[1] * Y[2];
    
    cout << "Произведение двух наибольших простых чисел массива Y: " << max << endl;
    cout << "Произведение трех наименьших простых чисел массива Y: " << min << endl;

    return 0;
}
