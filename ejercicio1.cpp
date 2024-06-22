//Calculadora.
#include <iostream>
#include <conio.h>
#include <string>
using namespace std;
int main (){ // Función principal
    double op1, op2;
    int x;
    string get, fn = "exit";
    char op;
do
{    
    cout << "Ingrese el primer valor: "; cin >> op1;
    cout << "Ingrese el segundo valor: "; cin >> op2;
    cout << "Elija una de las opciones:\n'+' Suma:\n'-' Resta:\n'*' Multiplicacion:\n'/' Division:\n"; cin >> op;
    switch (op)
    {
    case '+':
        cout << "La suma de " << op1 << " y " << op2 << " es: "<< op1 + op2 << endl;
        break;
    case '-': 
        cout << "La resta de " << op1 << " y " << op2 << " es: "<< op1 - op2 << endl;
        break;
    case '*':
        cout << "El producto de " << op1 << " y " << op2 << " es: "<< op1 * op2 << endl;
        break;
    case '/': //Condiciones de la división.
        cout << "Desea dividir: " << endl <<"1) " << op1 << " / " << op2 << "." << endl << "2) " << op2 << " / " << op1 << "." << endl; cin >> x;
        switch (x)
        {
        case 1:
        if (op2 != 0)
        {
        cout << "La división de " << op1 << " entre " << op2 << " es: "<< op1 / op2 << endl;
        break;
        } else
        {
        cout << "La division no existe.";
        break;
        }
        case 2:
        if (op1 != 0)
        {
        cout << "La division de " << op2 << " / " << op1 << " es: "<< op2 / op1 << endl;
        break;
        } else
        {
        cout << "La division no existe.";
        break;
        }
        default:
        cout << "Valor incorrecto intente nuevamente.";
            break;
        }
    }
    cout << "¿Desea salir del programa? Escriba 'exit' para salir:" << endl;
    cin >> get;

} while (fn.compare(get) == -1);
cout << "Gracias por usar el programa.";

    return EXIT_SUCCESS;
}