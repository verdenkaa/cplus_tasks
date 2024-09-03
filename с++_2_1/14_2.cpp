#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <Windows.h>
#include "14_2.h"
using namespace std;

int main() {
    Vector v1(10);
    cout << "Вектор 1: " << endl;
    v1.print();

    Sleep(1000);

    Vector v2(10);
    cout << "Вектор 2: " << endl;
    v2.print();

    Vector v3(v1 & v2);
    cout << "Вектор от &: " << endl;
    v3.print();

    cout << "Максимальное: " << ++v3 << endl;


    return 0;
}
