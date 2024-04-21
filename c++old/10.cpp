#include <iostream>
#include <string>
using namespace std;


// Функция для удаления элемента массива, взята из методички
int del(int *x, int k, int n) {
    int i;
    if (k > n - 1)
        return n;
    else {
        for (i = k; i < n - 1; i++)
            x[i] = x[i + 1];
        n--;
        return n;
    }
}


int main() {
    int a;
    cout << "Введите длину массива: ";
    cin >> a;
    int A[a];
    cout << "Введите массив: ";
    for (int i = 0; i < a; i++) {
        cin >> A[i];
    }

    int minA = 0;
    for (int i = 0; i < a; i++){ // нужен самый большой элемент, так как нужное нам чило <= этому
        if(A[i] > A[minA]){
            minA = i;
        }
    }

    for (int i = 0; i < a; i++){
        bool f = true;
        string StringA = to_string(A[i]);
        for (int j = 0; j < StringA.length() - 1; j++){
            if (StringA.substr(j, 1) > StringA.substr(j + 1, 1)){   // проверка на возрастрание
                f = false;
        }}
        if (f && A[minA] > A[i] && A[i] % 2 == 0) minA = i;
    }
    a = del(A, minA, a);


    cout << "Результат: ";
    for (int i = 0; i < a; i++) {
        cout << A[i] << " ";
    }
    cout << endl;
    return 0;
}

