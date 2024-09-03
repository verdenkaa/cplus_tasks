#include <iostream>
#include <string>

using namespace std;

// Базовый класс Жилище
class Housing {
public:
    virtual void print() = 0; // Виртуальная функция для вывода
};

// Класс Дом
class House : public Housing {
public:
    string name;
    double area;
    string material;
    string isPrivate;

    House(string name, double area, string material, string isPrivate):
        name(name), area(area), material(material), isPrivate(isPrivate) {}

    // переопределение print
    void print() override {
        cout << "Дом:" << endl;
        cout << "Название: " << name << endl;
        cout << "Площадь: " << area << endl;
        cout << "Материал: " << material << endl;
        cout << "Тип: " << isPrivate << endl;
    }
};

// Класс Коттедж
class Cottage : public Housing {
public:
    string name;
    double area;
    double landArea;
    int floors;

    Cottage(string name, double area, double landArea, int floors):
        name(name), area(area), landArea(landArea), floors(floors) {}

    void print() override {
        cout << "Коттедж:" << endl;
        cout << "Название: " << name << endl;
        cout << "Площадь: " << area << endl;
        cout << "Площадь земельного участка: " << landArea << endl;
        cout << "Количество этажей: " << floors << endl;
    }
};

// Класс Юрта
class Yurt : public Housing {
private:
    string name;
    double area;
    int residents;

public:
    Yurt(string name, double area, int residents)
        : name(name), area(area), residents(residents) {}

    void print() override {
        cout << "Юрта:" << endl;
        cout << "Название: " << name << endl;
        cout << "Площадь: " << area << endl;
        cout << "Количество жителей: " << residents << endl;
    }
};
