#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Функция для подсчета суммы цифр числа
int Sum(int num) {
    int sum = 0;
    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}


int main() {
    vector<int> X = {12, 23, 33, 45, 55, 67, 77, 89, 99};
    vector<int> Z;

    for (int num : X) {
        int sum = Sum(num);
        if (sum % 2 == 0) { // Проверяем, является ли сумма цифр четной
            Z.push_back(num); // Добавляем число в вектор Z
        }
    }

    // Сортируем вектор Z по убыванию суммы цифр
    // https://stackoverflow.com/questions/2999135/how-can-i-sort-the-vector-elements-using-members-as-the-key-in-c#:~:text=//%20sort%20by%20name%3A%0Astd%3A%3Asort(students.begin()%2C%20students.end()%2C%20%0A%20%20%20%20%5B%5D(student%20const%20%26a%2C%20student%20const%20%26b)%20%7B%0A%20%20%20%20%20%20%20%20return%20a.name%20%3C%20b.name%3B%20%0A%20%20%20%20%7D)%3B%0A%0A//%20sort%20by%20age%3A%0Astd%3A%3Asort(students.begin()%2C%20students.end()%2C%20%0A%20%20%20%20%5B%5D(student%20const%20%26a%2C%20student%20const%20%26b)%20%7B%0A%20%20%20%20%20%20%20%20return%20a.age%20%3C%20b.age%3B%20%0A%20%20%20%20%7D)%3B
    sort(Z.begin(), Z.end(), [](int a, int b) {return Sum(a) > Sum(b);});

    cout << "Массив Z, отсортированный по убыванию суммы цифр:" << std::endl;
    for (int num : Z) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
