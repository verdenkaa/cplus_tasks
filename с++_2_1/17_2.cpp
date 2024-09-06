#include <iostream>
#include <fstream>
#include <vector>

using namespace std;


void crate_data(){
    ofstream outFile("numbers.bin", ios::binary);

    int data[12] = {3, 5, 8, 1, 9, 4, 5, 2, 0, 3, 7, 5};
    outFile.write(reinterpret_cast<char*>(&data), sizeof(data));
    outFile.close();
}

int main() {
    crate_data();

    ifstream inFile("numbers.bin", ios::in | ios::binary);  // Открытие файла в двоичном режиме

    // Чтение элементов
    vector<int> numbers;
    int number;
    
    while (inFile.read(reinterpret_cast<char*>(&number), sizeof(int))) {// сслыка так как принимает адрес памяти
        numbers.push_back(number);
    }

    inFile.close();

    // Определение размера четверти
    int num = numbers.size();
    int quarter = num / 4;
    int offset = num - quarter;

    int sum = 0;
    for (int i = offset; i < num; ++i) {
        sum += numbers[i];
    }

    cout << "Сумма четверти файла: " << sum << endl;

    return 0;
}
