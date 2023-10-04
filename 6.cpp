#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a, b, c, t1, t2, Dt, D;
    cout << "Введите коффициенты a b c: ";
    cin >> a >> b >> c;
    Dt = pow(b, 2) - (-4 * a * c);
    if (Dt > 0){
        cout << "4 корня" << endl;
        auto x0 = sqrt(abs((-1 * b - sqrt(Dt)) / (2 * a))) * -1;
        auto x1 = sqrt(abs((-1 * b - sqrt(Dt)) / (2 * a)));
        auto x2 = sqrt(abs((-1 * b + sqrt(Dt)) / (2 * a))) * -1;
        auto x3 = sqrt(abs((-1 * b + sqrt(Dt)) / (2 * a)));
        cout << "x1: " << x0 << " x2: " << x1 << endl;
        cout << "x3: " << x2 << " x4: " << x3 << endl;
    }else if (Dt == 0){
        cout << "2 корня" << endl;
        auto x0 = sqrt(abs((-1 * b) / (2 * a))) * -1;
        auto x1 = sqrt(abs((-1 * b) / (2 * a)));
        cout << "x1: " << x0 << " x2: " << x1;
    }else{
        cout << "корней нет";
    }

}