#include <iostream>
#include <cmath>
#define _USE_MATH_DEFINES
using namespace std;

int main(){
	float x, y;
	cin >> x;
	y = (pow(x, 5) / sin(abs(x - 7))) + (pow(log2(pow(x, 2) + 2.5), 2)) - pow(pow(M_PI - 6.1 * pow(x, 2), 2), 1/3.0);
	cout << y;
}