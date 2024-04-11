#include <iostream>

using namespace std;

// Нахождение произведения ненулевых элементов
int Product(int list[], int n) {
    int x = 1;
    for (int i = 0; i < n; ++i) {
        if (list[i] != 0) x *= list[i];
    }
    return x;
}

// Нахождение среднего арифметического
double Average(int arr[], int n) {
    float sum = 0;
    float count = 0;
    for (int i = 0; i < n / 2; ++i) {
        sum += arr[i];
        count++;
    }
    return sum / count;
}

// Формирование массива C
void makeC(int arrA[], int arrB[], int n) {
    int arrC[n];
    for (int i = 0; i < n; ++i) {
        arrC[i] = (arrA[i] + arrB[i]) * (arrA[i] + arrB[i]);
    }

    // Находим индексы наибольшего и наименьшего элементов
    int max = 0, min = 0;
    for (int i = 1; i < n; ++i) {
        if (arrC[i] > arrC[max]) {
            max = i;
        }else if (arrC[i] < arrC[min]) {
            min = i;
        }
    }

    // Удаляем наибольший и наименьший элементы
    int newS= n - 2;
    int newArr[newS];
    for (int i = 0, j = 0; i < n; ++i) {
        if (i != max && i != min) {
            newArr[j] = arrC[i];
            j++;
        }
    }

    // Выводим результат
    cout << "Массив C после удаления элементов:" << endl;
    for (int i = 0; i < newS; ++i) {
        cout << newArr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Размер массива: "; cin >> n; cout << endl;
    int arrA[n], arrB[n];

    cout << "Введите элементы массива A: ";
    for (int i = 0; i < n; ++i) {
        cin >> arrA[i];
    }

    cout << "Введите элементы массива B:";
    for (int i = 0; i < n; ++i) {
        cin >> arrB[i];
    }

    cout << "Произведение ненулевых элементов массива A: " << Product(arrA, n) << endl;
    cout << "Среднее арифметическое элементов первой половины массива A: " << Average(arrA, n) << endl;
    makeC(arrA, arrB, n);

    system("pause");
    return 0;
}
