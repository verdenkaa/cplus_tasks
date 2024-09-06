#include <iostream>
#include "15_3.h"

using namespace std;

int main() {
    Person person("Иван Иванов", "01.01.01");
    Student student("Иван Иванов 2", "02.02.02", "МГУ", "Информатика");
    GraduateStudent gradStudent("Иван Иванов 3", "03.03.03", "КФУ", "Физика", "Квантовая механика");
    DoctoralStudent docStudent("Иван Иванов 4", "04.04.04", "КАИ", "Социология", "Социальные сети", "Кандидат наук", "Доцент");

    cout << "Человек:\n";
    person.print();
    cout << endl;

    cout << "Студент:\n";
    student.print();
    cout << endl;

    cout << "Аспирант:\n";
    gradStudent.print();
    cout << endl;

    cout << "Докторант:\n";
    docStudent.print();
    cout << endl;

    return 0;
}
