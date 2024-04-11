#include <iostream>
#include <cmath>
#include <math . h>

using namespace std;
//метод касательных, метод простой итерации 

double f( double x )
{
return ( x∗x−c o s ( 5∗ x ) ) ;
}

double f2( double x ){ //Вторая производная функции f(x).
return (2+25∗ c o s ( 5∗ x ) ) ;
}

//Функция, реализующая метод касательных.
int Tangent ( double a , double b , double c , double eps )
{ in t k=0;
if (f(a) ∗ f2 (a) > 0) c=a ;
else c=b ;
do{
    c=c - f(c) / f1(c) ;
    k++;
}while ( fabs(f(c)) >= eps) ;
return k;
}


int main(){
	cout << "d-----------";
}
