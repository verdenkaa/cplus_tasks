#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int k = 0;
    for (int i = 10; i < 100; i++){
        if ((i % 2 != 0) && (i % 5 != 0)) k++;
    }
    cout << "Количество чисел удоволетворяющих условию равно: " << k;
}
