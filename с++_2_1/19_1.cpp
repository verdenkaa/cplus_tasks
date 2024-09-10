#include <iostream>
#include <string>
#include <stdexcept>

using namespace std;

// Класс для обработки ошибок
class TimeFormatException : public invalid_argument {
public:
    TimeFormatException(string message) : invalid_argument(message) {}
};


void analyzeTime(string time) {
    // Проверка длины строки
    if (time.length() != 8) {
        throw TimeFormatException("Неверный формат времени! Ожидается: чч:мм:сс");
    }

    // Проверка наличия символов ':'
    if (time[2] != ':' || time[5] != ':') {
        throw TimeFormatException("Неверный формат времени! Ожидается: чч:мм:сс");
    }

    // Извлечение часов, минут и секунд
    int hours, minutes, seconds;
    try {
        hours = stoi(time.substr(0, 2));
        minutes = stoi(time.substr(3, 2));
        seconds = stoi(time.substr(6, 2));
    } catch (const invalid_argument&) {
        throw TimeFormatException("Некорректные данные! Время должно содержать только цифры.");
    }

    // Проверка корректности данных
    if (hours < 0 || hours > 23) {
        throw TimeFormatException("Некорректные данные! Часы должны быть в диапазоне от 0 до 23.");
    }

    if (minutes < 0 || minutes > 59) {
        throw TimeFormatException("Некорректные данные! Минуты должны быть в диапазоне от 0 до 59.");
    }

    if (seconds < 0 || seconds > 59) {
        throw TimeFormatException("Некорректные данные! Секунды должны быть в диапазоне от 0 до 59.");
    }

    // Вывод корректного времени
    cout << "Время введено корректно: " << hours << ":" << minutes << ":" << seconds << endl;
}

int main() {
    string time;

    cout << "Введите время в формате чч:мм:сс: ";
    cin >> time;

    try {
        analyzeTime(time);
    } catch (TimeFormatException e) {
        cerr << "Ошибка: " << e.what() << endl;
    }

    return 0;
}
