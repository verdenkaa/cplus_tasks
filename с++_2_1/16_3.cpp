#include <iostream>
#include <fstream>
#include <algorithm> 

using namespace std;

int main() {
    ifstream inputFile("f.txt");
    ofstream outputFile("g.txt");

    // Чтение содержимого файла в строку
    string content;
    string line;
    while (getline(inputFile, line)){
        content += line + " ";
    }

    // Разворот строки в обратном порядке
    reverse(content.begin(), content.end());

    outputFile << content;

    inputFile.close(); 
    outputFile.close();


    return 0;
}
