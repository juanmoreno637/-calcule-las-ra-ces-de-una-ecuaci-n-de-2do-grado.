/*1. Escriba un programa que  calcule las raíces de una ecuación de 2do grado.*/
#include <iostream>
#include <math.h>

using namespace std;

//VARIABLES
float a, b, c, x1 = 0, x2 = 0;
int main(){
    cout<<"---Calculadora de ecuacion de 2do Grado---";
    cout<<"\n\n\nDigite el valor de a: "; cin>>a;
    cout<<"\nDigite el valor de b: "; cin>>b;
    cout<<"\nDigite el valor de c: "; cin>>c;

         x1 = (-b+sqrt(pow(b,2)-4*a*c))/(2*a);
         x2 = (-b+sqrt(pow(b,2)-4*a*c))/(2*a);

    cout<<"\n\n\nEL resultado de x1 es: "<< x1;
    cout<<"\nEL resultado de x2 es:"<<x2;
    return 0;
}
