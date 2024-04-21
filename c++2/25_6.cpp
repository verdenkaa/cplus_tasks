#include <iostream>
#include <vector>
#include <fstream>
using namespace std;


int main() {
    ifstream input("1.txt");
    ofstream output("2.txt");
    vector<string> lines;

    string a;
    while (getline(input, a)) {// Чтение строк из файла
        lines.push_back(a);
    }

    int k = 1;
    for (string a : lines) {// запись строк
        output << k << " " << a << endl;
        k++;
    }

    input.close();
    output.close();
    return 0;
}
