#include <iostream>
#include <vector>

using namespace std;

// Шаблонная функция для вычисления среднего арифметического значения массива элементов
template <typename Type>
Type calculateAverage(vector<Type> elements) {
    Type sum = 0;
    for (Type element : elements) {
        sum += element;
    }
    return sum / elements.size();
}

int main() {
    vector<int> intArray = {1, 2, 3, 4, 5};
    cout << "int: " << calculateAverage(intArray) << endl;

    vector<double> doubleArray = {1.5, 2.5, 3.5, 4.5, 5.5};
    cout << "double: " << calculateAverage(doubleArray) << endl;

    // Пример с числами с плавающей точкой повышенной точности
    vector<float> floatArray = {1.1f, 2.2f, 3.3f, 4.4f, 5.5f};
    cout << "float: " << calculateAverage(floatArray) << endl;

    return 0;
}
