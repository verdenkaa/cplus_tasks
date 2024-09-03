#include <iostream>
#include <complex>
using namespace std;

int main() {
    cout << "Введите комплексное число a: ";
    double a1, a2;
    cin >> a1 >> a2;
    complex<double> a(a1, a2);

    cout << "Введите комплексное число b: ";
    double b1, b2;
    cin >> b1 >> b2;
    complex<double> b(b1, b2);

    cout << "Введите комплексное число c: ";
    double c1, c2;
    cin >> c1 >> c2;
    complex<double> c(c1, c2);


    complex<double> d = (pow(a, 2) - b + c) / (b - pow(c, 3));

    cout << "d = " << d << endl;
    
    system("pause");
    return 0;

}
