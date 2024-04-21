#include <iostream>
#include <cmath>
#define _USE_MATH_DEFINES
using namespace std;

int main(){
	float a, y;
	cout << "Введите число: ";
	cin >> a;
	if (a < -1.0 * M_PI / 2.0 || (a > M_PI / 2.0)){
		y = -4;}
	else{
		y = tan(a);}
	cout << "f(a) = " << y;
}