#include <iostream>
#include "15_2.h"

int main() {
    House house("Мой дом", 100.0, "Кирпич", "Аренда");
    Cottage cottage("Мой коттедж", 500.0, 1000.0, 3);
    Yurt yurt("Моя юрта", 10.0, 6);

    house.print();
    cottage.print();
    yurt.print();

    return 0;
}
