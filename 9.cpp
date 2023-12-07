#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cout << "Введите длину массива: ";
    cin >> n;
    int A[n];
    cout << "Введите массив A: ";
    for (int i = 0; i < n; i++){
        cin >> A[i];
    }

    int proizv = 1;
    float arifm = 0;

    for (int i = 0; i < n; i++){
        if (A[i] != 0) proizv *= A[i];
    }

    for (int i = 0; i < n / 2; i++){
        arifm += A[i];
    }

    cout << "Произведение равно: " << proizv << endl;
    cout << "Среднее арифметическое равно:" << arifm / (n / 2) << endl;

    int B[n], C[n];
    cout << "Введите массив B: ";
    for (int i = 0; i < n; i++){
        cin >> B[i];
    }

    for (int i = 0; i < n; i++){
        C[i] = pow(A[i] + B[i], 2);
    }

    int max = C[0], min = C[0];
    for (int i = 1; i < n; i++){
        if (C[i] < min) min = C[i];
        if (C[i] > max) max = C[i];
    }

    cout << "Подлежат удалению элементы: " << min << " " << max;

    for (int i = 0; i < n; i++){
        cout << C[i];
    }


}