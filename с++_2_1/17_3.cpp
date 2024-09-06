#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

void create_data() {
    ofstream outFile("input_numbers.bin", ios::binary);

    int data[12] = {1, 2, 3, 4, 5, -1, -2, -3, -4, -5, 6, 7};
    outFile.write(reinterpret_cast<char*>(&data), sizeof(data));
    outFile.close();
}

int main() {
    create_data();

    ifstream inFile("input_numbers.bin", ios::in | ios::binary);

    vector<int> negative_numbers;
    vector<int> positive_numbers;
    int number;
    
    // Чтение элементов
    while (inFile.read(reinterpret_cast<char*>(&number), sizeof(int))) {
        if (number < 0) {
            negative_numbers.push_back(number);
        } else {
            positive_numbers.push_back(number);
        }
    }

    inFile.close();

    ofstream outFile("output_numbers.bin", ios::binary);

    // Запись сначала отрицательных, затем положительных
    outFile.write(reinterpret_cast<char*>(negative_numbers.data()), negative_numbers.size() * sizeof(int));
    outFile.write(reinterpret_cast<char*>(positive_numbers.data()), positive_numbers.size() * sizeof(int));

    outFile.close();

    for (auto i: negative_numbers) cout << i << " ";
    cout << endl;
    for (auto i: positive_numbers) cout << i << " ";

    return 0;
}
