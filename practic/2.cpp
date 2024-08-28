#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

// Функция для вычисления расстояния
double distance(double x1, double y1, double x2, double y2) {
    return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}

// Сортировка выбором
void choice_sort(double* arr, int n) {
    int min;

    for (int i = 0; i < n - 1; i++) {
        min = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min]) min = j;
        }

        double temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
}

int main() {
    int N1, N2;

    cout << "Введите количество точек в множестве A: ";
    cin >> N1;
    double Ax[N1];
    double Ay[N1];

    cout << "Введите точки множества A (x y): " << endl;
    for (int i = 0; i < N1; ++i) {
        cin >> Ax[i] >> Ay[i];
    }

    cout << "Введите количество точек в множестве B: ";
    cin >> N2;
    double Bx[N2];
    double By[N2];

    cout << "Введите точки множества B (x y): " << endl;
    for (int i = 0; i < N2; ++i) {
        cin >> Bx[i] >> By[i];
    }

    double maxDist = 0;
    int maxIdxA = 0, maxIdxB = 0;

    // Находим максимальное расстояние и его точки
    for (int i = 0; i < N1; ++i) {
        for (int j = 0; j < N2; ++j) {
            double d = distance(Ax[i], Ay[i], Bx[j], By[j]);
            if (d > maxDist) {
                maxDist = d;
                maxIdxA = i;
                maxIdxB = j;
            }
        }
    }

    cout << "Максимальное расстояние: " << maxDist << endl;
    cout << "Между точками A(" << Ax[maxIdxA] << ", " << Ay[maxIdxA] << ") и B(" << Bx[maxIdxB] << ", " << By[maxIdxB] << ")" << endl;

    // Находим массив расстояний от найденной точки множества A до всех точек множества B
    double distances[N2];
    for (int i = 0; i < N2; ++i) {
        distances[i] = distance(Ax[maxIdxA], Ay[maxIdxA], Bx[i], By[i]);
    }

    choice_sort(distances, N2);

    cout << "Массив расстояний от найденной точки A(" << Ax[maxIdxA] << ", " << Ay[maxIdxA] << ") до всех точек множества B:" << endl;
    for (int i = 0; i < N2; ++i) {
        cout << distances[i] << " ";
    }
    cout << endl;
    return 0;
}
