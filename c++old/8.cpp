#include <iostream>
using namespace std;

int main()
{
	int NUM = 0;
	int a, k, a2;
	cout << "Количество наборов: "; 
	cin >> k;
	cout << endl << "Наборы чисел разделенные 0 (в конце тоже): ";
	for (int i = 0; i < k; i++){
		bool t = true;
		cin >> a;
		while(a != 0){
			cin >> a2;
			if (a2 < a && a2 != 0){
			t = false;
			break;}
			a = a2;
		}
		if (t){NUM++;}
		}
	cout <<endl << "Количество наборов: " << NUM;
}
