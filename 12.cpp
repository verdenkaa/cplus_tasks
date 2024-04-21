#include <iostream>
#include <math.h>

using namespace std;
//метод касательных, метод простой итерации 

double f( double x )
{
return (pow(x, 2) - 3 + pow(0.5, x));
}

double f1( double x )
{
return ((pow(2, x+1) * x - log(2))/ pow(2, x));
}

double f2( double x )
{
return ((pow(2, x+1) + pow(log(2), 2))/ pow(2, x));
}

double fi( double x , double L) //Функция, заданная выражением 4.4 .
{
return ( x+L * f(x));
}


//Функция, реализующая метод касательных.
int Tangent ( double a , double b , double *c , double eps ){
    int k=0;
    if ((f(a) * f2(a)) > 0) *c=a ;
    else *c=b ;
    do{
        *c= *c - (f(*c) / f1(*c)) ;
        k++;
    }while ( fabs(f(*c)) >= eps) ;
    return k;
}

//Функция, реализующая метод простой итерации
int Iteration (double *x , double L , double eps){
     int k=0; double x0 ;
    do{
    x0 = *x;
    *x = fi(x0 , L);
    k++;
    }while ( fabs(x0 - *x) > eps) ;
    return k ;
}


int main(){
	double A, B, X, P;
    double ep = 0.001;
    int K;
    cout << " a = " ; cin >> A; //Интервал изоляции корня.
    cout << " b = " ; cin >> B;
    cout << "Метод касательных: " << endl;
    K = Tangent(A, B, &X, ep);
    cout << " Найденное решение x = " << X ;
    cout << " , количество итераций k = " << K<< endl ;
    cout << "Метод простой итерации: " << endl ;
    X=A;
    cout << " L = (для [1,2] L=-0.1; для [-2, 0] L=0.5" ; cin >> P ;
    K=Iteration (&X, P , ep) ;
    cout << " Найденное решение x = " << X ;
    cout << " , количество итераций k = " << K << endl ;
    system("pause");
    return 0 ;
}
