#include <iostream>
#include <conio.h>
using namespace std; 
int factorial(int);
int suma(int);
int main(){
    int n;
    cout << "Ingrese la cantidad de sumandos 'n': "; cin >> n; 
    cout << suma(n);
    return EXIT_SUCCESS;
}
int suma(int a){
    float s = 0, i = 1;
    while (i <= a)
    {
        s = s + (factorial(i)/(2*i));
        i++;    
    }
    return float(s);
}
int factorial(int n){
    if (n != 0)
    {
        return n * factorial(n-1);
    }
    else
    {
        return 1;
    }
}