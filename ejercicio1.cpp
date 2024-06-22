#include <iostream>
using namespace std;
int main (){
    double op1, op2;
    char op;
    cout << "Ingrese el primer valor: "; cin >> op1;
    cout << "Ingrese el segundo valor: "; cin >> op2;
    cout << "Elija una de las opciones:\n'+' Suma:\n'-' Resta:\n'*' Multiplicacion:\n'/' Division:\n"; cin >> op;
    switch (op)
    {
    case '+':
        cout << "La suma de " << op1 << " y " << op2 << " es: "<< op1 + op2;
        break;
    case '-': 
        cout << "La resta de " << op1 << " y " << op2 << " es: "<< op1 - op2;
        break;
    case '*':
        cout << "El producto de " << op1 << " y " << op2 << " es: "<< op1 * op2;
        break;
    case '/':
        cout << "La división de " << op1 << " entre " << op2 << " es: "<< op1 / op2;
        break;
    default:
        cout << "Digito invalido, fin del programa.";
        break;
    }


    return EXIT_SUCCESS;
}