#include <iostream>
#include <conio.h>
#include <string>
using namespace std; 
int factorial(int);
float suma(float);
int main(){
    float n;
    string get, fn = "exit";
do
{
    cout << "Ingrese la cantidad de sumandos 'n': "; cin >> n; 
    cout << suma(n) << endl;
    cout << "- Presione cualquier tecla si desea realizar otra Combinatoria. " << endl << "- Escriba 'exit' si desea finalizar el programa." << endl; cin >> get;
} while (fn.compare(get)==-1);
 cout << "Gracias por usar el programa.";

    return EXIT_SUCCESS;
}
float suma(float a){
    float s = 0, i = 1;
    while (i <= a)
    {
        s = s + (factorial(i)/(2*i));
        i++;    
    }
    return s;
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