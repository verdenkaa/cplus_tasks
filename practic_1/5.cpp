#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

struct PRICE {
    string productName;
    string storeName;
    int price;
};

// Функция для ввода данных в массив структур
void inputPrices(PRICE prices[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << "Введите название товара: ";
        cin >> ws; // Убирает лишние пробелы
        getline(cin, prices[i].productName);
        cout << "Введите название магазина: ";
        cin >> ws;
        getline(cin, prices[i].storeName);
        cout << "Введите стоимость товара в рублях: ";
        cin >> prices[i].price;
    }
}

// Функция для вывода информации о товаре
void printPriceInfo(const PRICE& price) {
    cout << "Название товара: " << price.productName << endl;
    cout << "Название магазина: " << price.storeName << endl;
    cout << "Стоимость товара в рублях: " << price.price << endl;
}

// Функция для сортировки массива по алфавиту
void sortPrices(PRICE prices[], int size) {
    sort(prices, prices + size, [](const PRICE& a, const PRICE& b) {
        return a.productName < b.productName;
    });
}

// Функция для поиска товара по названию
bool findPrice(const PRICE prices[], int size, const string& productName, PRICE& foundPrice) {
    for (int i = 0; i < size; ++i) {
        if (prices[i].productName == productName) {
            foundPrice = prices[i];
            return true;
        }
    }
    return false;
}

int main() {
    // Количество записей
    const int SIZE = 3;
    PRICE prices[SIZE];
    
    // Ввод данных в массив структур
    inputPrices(prices, SIZE);
    
    // Сортировка массива по названиям товаров
    sortPrices(prices, SIZE);
    
    // Ввод названия товара для поиска
    cout << endl;
    string searchProductName;
    cout << "Введите название товара для поиска: ";
    cin >> ws; // Убираем лишние пробелы
    getline(cin, searchProductName);
    
    // Поиск товара по названию
    PRICE foundPrice;
    if (findPrice(prices, SIZE, searchProductName, foundPrice)) {
        // Вывод информации о найденном товаре
        printPriceInfo(foundPrice);
    } else {
        cout << "Товар с названием \"" << searchProductName << "\" не найден." << endl;
    }
    
    return 0;
}
