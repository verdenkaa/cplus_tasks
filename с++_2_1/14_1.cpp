#include <iostream>
#include "14_1.h"
using namespace std;


int main() {
    Equal obj1(5, 10);
    Equal obj2(5, 10);
    Equal obj3(7, 10);

    // Проверка равенства объектов
   cout << "obj1 и obj2 равны: " << (obj1 == obj2) << endl;

    cout << "obj1 и obj3 равны: " << (obj1 == obj3) << endl;


    return 0;
}