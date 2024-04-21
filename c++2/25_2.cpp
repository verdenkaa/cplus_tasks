#include <iostream>
#include <math.h>

using namespace std;
//метод половинного деления, метод хорд


double f( double x )
{
return (pow(0.5, x) + 1 - pow((x-2), 2));
}



//Функция, реализующая метод хорд.
int Chord(double a , double b, double *c, double eps){
    int k=0;
    do{
        *c=a - f(a) / (f(b) - f(a)) * (b-a) ;
        if ( f(*c ) * f(a) >0) a=*c ;
        else b=*c ;
        k++;
        }while ( fabs( f(*c) )>=eps) ;
        return k ;
}   


//Функция, реализующая метод половинного деления.
int Dichotomy( double a , double b , double *c , double eps ){
     int k=0;
    do{
        *c=(a+b ) / 2 ;
        if ( f(*c) * f(a) <0) b=*c ;
        else a=*c ;
        k++;} while ( fabs ( a-b )>=eps) ;
return k ;
}


int main(){
	double A, B, X, P;
    double ep = 0.001;
    int K;
    cout << " a = " ; cin >> A; //Интервал изоляции корня.
    cout << " b = " ; cin >> B;
    cout<<"Метод дихотомии:"<<endl ;
    K=Dichotomy(A, B,&X, ep) ;
    cout<<"Найденное решение x = "<<X ;
    cout<<" , количество итераций k = "<<K<<endl ;
    cout<<"Метод хорд:"<<endl ;
    K=Chord(A, B,&X, ep) ;
    cout<<" Найденное решение x = "<<X ;
    cout<<" , количество итераций k = "<<K<<endl ;
    return 0 ;
}
