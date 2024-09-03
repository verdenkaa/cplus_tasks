#include <iostream>
#include "13_2.h"
using namespace std;

int main(){
	CoffeM Machine1;

	Machine1.coffe = 10.0;
	Machine1.milk = 10.0;
	Machine1.coffe_by_person = 2.0;
	Machine1.milk_by_person = 1.0;

	cout << "Можно приготовить кофе:  " << endl;
	Machine1.how_can_get();

	cout << "Готовим кофе..." << endl;
	Machine1.get_dark(1);
	Machine1.get_capu(1);

	cout << "Можно приготовить кофе:  " << endl;
	Machine1.how_can_get();
}
