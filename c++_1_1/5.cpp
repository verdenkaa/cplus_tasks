#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float x1, y1;
    cout << "Введиет координаты точки: ";
    cin >> x1 >> y1;
    bool t1, t2;
    if ((-1.0 <= x1 <= 6) && (-1.0 <= y1 <= 6)){
    t1 = true;
    }else{
        t1 = false;}
    if ((x1 >= 4.0 || x1 <= 0.0) || (4.0 <= y1 || y1 <= 0.0)){
    t2 = true;
    }else{
        t2 = false;}
    if (t1 && t2){
    cout << "Точка попадает в диапазон";
    }else{cout<<"Точка не попадает";}
}
