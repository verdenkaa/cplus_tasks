#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm>

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
    Vector(const vector<int>& other) {
        data = other;
    }

    // Перегрузка оператора &
    Vector operator&(Vector other) {
        int size = data.size();
        Vector result(size);
        for (int i = 0; i < size; i++) {
            // условие ? значение_если_истина : значение_если_ложь
            result.data[i] = (data[i] > other.data[i]) ? data[i] : other.data[i];
        }
        return result;
    }

    // Перегрузка оператора ++
    int operator++() {
        // звездочка так как итератор
        return *max_element(data.begin(), data.end());
    }

    // Вывод
    void print() {
        for (int i = 0; i < data.size(); i++) {
            cout << data[i] << " ";
        }
        cout << endl;
    }
};