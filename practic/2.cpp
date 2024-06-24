#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

// Структура точки
struct Point {
    double x, y;
};

// Функция для вычисления расстояния
double distance(const Point& p1, const Point& p2) {
    return sqrt((p1.x - p2.x) * (p1.x - p2.x) + (p1.y - p2.y) * (p1.y - p2.y));
}

int main() {
    int N1, N2;
    
    // Вводим количество точек в множествах A и B
    cout << "Введите количество точек в множестве A: ";
    cin >> N1;
    vector<Point> A(N1);
    
    cout << "Введите точки множества A (x y): " << endl;
    for (int i = 0; i < N1; ++i) {
        cin >> A[i].x >> A[i].y;
    }
    
    cout << "Введите количество точек в множестве B: ";
    cin >> N2;
    vector<Point> B(N2);
    
    cout << "Введите точки множества B (x y): " << endl;
    for (int i = 0; i < N2; ++i) {
        cin >> B[i].x >> B[i].y;
    }
    
    double max = 0;
    Point maxPointA, maxPointB;
    
    // Находим максимальное расстояние и его точки
    for (Point pA : A) {
        for (Point pB : B) {
            double d = distance(pA, pB);
            if (d > max) {
                max = d;
                maxPointA = pA;
                maxPointB = pB;
            }
        }
    }
    
    cout << "Максимальное расстояние: " << max << endl;
    cout << "Между точками A(" << maxPointA.x << ", " << maxPointA.y << ") и B(" << maxPointB.x << ", " << maxPointB.y << ")" << endl;
    
    
    // Находим массив расстояний от найденной точки множества A до всех точек множества B
    vector<double> distances;
    for (Point pB : B) {
        distances.push_back(distance(maxPointA, pB));
    }
    
    // Сортируем массив расстояний по возрастанию
    sort(distances.begin(), distances.end());
    
    cout << "Массив расстояний от найденной точки A(" << maxPointA.x << ", " << maxPointA.y << ") до всех точек множества B:" << endl;
    for (double d : distances) {
        cout << d << " ";
    }
    cout << endl;

    
    return 0;
}
