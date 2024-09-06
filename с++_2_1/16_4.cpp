#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

struct Worker {
    string name;
    int products[6];
};

int sumProducts(Worker worker) {
    int sum = 0;
    for (int i = 0; i < 6; i++) {
        sum += worker.products[i];
    }
    return sum;
}

int bestDay(Worker worker) {
    int maxDay = 0;
    for (int i = 1; i < 6; i++) {
        if (worker.products[i] > worker.products[maxDay]) {
            maxDay = i;
        }
    }
    return maxDay;
}

// Преобразование в день недели
string dayOfWeek(int day) {
    switch (day) {
        case 0: return "Понедельник";
        case 1: return "Вторник";
        case 2: return "Среда";
        case 3: return "Четверг";
        case 4: return "Пятница";
        case 5: return "Суббота";
        default: return "Неизвестный день";
    }
}


int main() {

    ifstream inputFile("workers.txt");

    Worker bestWorker;
    int bestWorkerSum = 0;
    int bestWorkerDay = 0;
    string line;

    while (getline(inputFile, line)) {
        istringstream data(line); // потоковая передача строки
        Worker worker;
        data >> worker.name; // передача строки до пробела
        for (int i = 0; i < 6; i++) {
            data >> worker.products[i];
        }

        int sum = sumProducts(worker);
        cout << "Фамилия: " << worker.name << ", Количество изделий: " << sum << endl;

        if (sum > bestWorkerSum) {
            bestWorker = worker;
            bestWorkerSum = sum;
            bestWorkerDay = bestDay(worker);
        }
    }

    inputFile.close();

    cout << endl;
    cout << "Больше всего изделий: " << bestWorker.name << endl;
    cout << "Всего: " << bestWorkerSum << endl;
    cout << "Лучший день: " << dayOfWeek(bestWorkerDay) << " (" << bestWorker.products[bestWorkerDay] << " изделий)" << endl;


    return 0;
}
