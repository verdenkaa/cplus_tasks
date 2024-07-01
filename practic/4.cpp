#include <iostream>

using namespace std;

// Функция для ввода массива A
void inputArray(int* &A, int N) {
    cout << "Введите элементы массива A: ";
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
}

// Функция для формирования массива B
void formArrayB(int* &B, int* A, int N, int K, int M) {

    int NM = N + M;
    B = new int[NM];
    
    // Копируем элементы до K-го элемента из A в B
    for (int i = 0; i < K; i++) {
        B[i] = A[i];
    }
    
    // Вставляем M нулевых элементов
    for (int i = 0; i < M; i++) {
        B[K + i] = 0;
    }
    
    // Копируем оставшиеся элементы из A в B
    for (int i = K; i < N; i++) {
        B[M + i] = A[i];
    }
}

// Функция для вывода массива
void printArray(int* arr, int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int N, K, M;
    
    cout << "Введите размер массива A (N): ";
    cin >> N;
    cout << "Введите значение K: ";
    cin >> K;
    cout << "Введите значение M: ";
    cin >> M;
    
    int* A = new int[N];
    
    inputArray(A, N);
    
    int* B;
    formArrayB(B, A, N, K, M);
    
    cout << "Массив B: ";
    printArray(B, N + M);
    
    delete[] A;
    delete[] B;
    
    return 0;
}
