#include <iostream>
#include <string>

using namespace std;

// Базовый класс Человек
class Person {
public:
    string name;
    string birthDate;
    Person(string name, string birthDate)
        : name(name), birthDate(birthDate) {}

    virtual void print() {
        cout << "Имя: " << name << endl;
        cout << "Дата рождения: " << birthDate << endl;
    }

    virtual ~Person() {}
};

// Класс Студент, наследующий от Человек
class Student : public Person {
public:
    string university;
    string specialty;

    Student(string name, string birthDate, string university, string specialty)
        : Person(name, birthDate), university(university), specialty(specialty) {}

    void print() override {
        Person::print();
        cout << "ВУЗ: " << university << endl;
        cout << "Специальность: " << specialty << endl;
    }
};

// Класс Аспирант, наследующий от Студент
class GraduateStudent : public Student {
public:
    string science;
    GraduateStudent(string name, string birthDate, string university, string specialty, string science)
        : Student(name, birthDate, university, specialty), science(science) {}

    void print() override {
        Student::print();
        cout << "Тема научной работы: " << science << endl;
    }
};

// Класс Докторант, наследующий от Аспирант
class DoctoralStudent : public GraduateStudent {
private:
    string academicRang;
    string academicRang2;

public:
    DoctoralStudent(string name, string birthDate, string university, string specialty, string science, string academicRang, string academicRang2)
        : GraduateStudent(name, birthDate, university, specialty, science), academicRang(academicRang), academicRang2(academicRang2) {}

    void print() override {
        GraduateStudent::print();
        cout << "Ученая степень: " << academicRang << endl;
        cout << "Ученое звание: " << academicRang2 << endl;
    }
};

