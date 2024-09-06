#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream inputFile("f.txt");

    ofstream outputFile("g.txt");

    string line;
    int num = 1;

    while (getline(inputFile, line)) {
        outputFile << num << ") " << line << endl;
        num++;
    }

    inputFile.close();
    outputFile.close();

    return 0;
}
