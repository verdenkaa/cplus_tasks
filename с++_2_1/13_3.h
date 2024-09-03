#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <cstdlib>
#include <ctime>
using namespace std;

class Vector {
    public:
    vector<int> data;

    // Конструктор
    Vector(size_t size) {
        data.resize(size);
        srand(time(0));
        for (int i = 0; i < size; i++) {
            data[i] = rand() % 100; 
        }
    }

    // Конструктор копирования
    Vector(vector<int> other){
        data = other;
    }

    // Сороировка по возрастанию
    void sorting() {
        sort(data.begin(), data.end());
    }

    // Среднее значение
    void average() {
        int sum = accumulate(data.begin(), data.end(), 0);
        cout << "Среднее арифметическое: " << sum / data.size() << endl;
    }

    // Вывод
    void print() {
        for (int i = 0; i < data.size(); i++) {
            cout << data[i] << " ";
        }
        cout << endl;
    }
};
