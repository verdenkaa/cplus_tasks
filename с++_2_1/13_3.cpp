#include <iostream>
#include <algorithm>
#include <numeric>
#include <cstdlib>
#include <ctime>
#include "13_3.h"
using namespace std;

int main() {
    Vector v(10);
    cout << "Вектор: " << endl;
    v.print();

    v.sorting();
    cout << "Отсортированный вектор: " << endl;
    v.print();

    v.average();

    vector<int> other_v;
    int size = 5;
    other_v.resize(size);
    srand(time(0));
    for (int i = 0; i < size; i++) {
        other_v[i] = rand();
    }

    Vector v2(other_v);
    cout << "Вектор копирования: " << endl;
    v2.print();

    return 0;
}
