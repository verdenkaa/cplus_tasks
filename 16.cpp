#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ifstream inputFile("input.txt");
    ofstream outputFile("output.txt");

    vector<string> lines;
    string line;

    // Чтение строк из файла
    while (getline(inputFile, line)) {
        lines.push_back(line);
    }


    // Находим самую короткую и самую длинную строки
    auto shortest = min_element(lines.begin(), lines.end(), [](string a, string b) {
        return a.length() < b.length();
    });

    auto longest = max_element(lines.begin(), lines.end(), [](string a, string b) {
        return a.length() < b.length();
    });

    // Меняем местами самую короткую и самую длинную строки
    swap(*shortest, *longest);

    for (auto str : lines) {
        outputFile << str << endl;
    }

    inputFile.close();
    outputFile.close();
    system("pause");
    return 0;
}
