#include <iostream>
#include <cmath>
using namespace std;

auto f(int x){
    return 5.4 * pow(x, 3) - 2.8 * pow(x, 2) - x + 1.6;
}

int main(){
    int a, b, h;
    cout << "Введите числа a b h: ";
    cin >> a >> b >> h;
    for (int i = a; i <= b; i = i + h){
        cout << f(i) << endl;
    }

}
