#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float x1, yl;
    cout << "Введиет координаты точки: ";
    cin >> x1 >> yl;
    bool x, y;
    if ((-1.0 <= x1 && x1 <= 0.0) || (4.0 <= x1 && x1 <= 6.0)){
    x = true;
    }else{
        x = false;}
    if ((-1.0 <= y1 && y1 <= 0.0) || (4.0 <= y1 && y1 <= 6.0)){
    y = true;
    }else{
        y = false;}
    if (x && y){
    cout << "Точка попадает в диапазон";
    }else{cout<<"Точка не попадает";}
}
