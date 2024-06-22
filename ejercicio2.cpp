#include <iostream>
#include <conio.h>
#include <string>
using namespace std; 
int main(){
    int n1, n2;
    int i = 1, j = 0;
    string get ,fn = "exit";
do
{
    cout << "Ingrese 2 valores: "<< endl; cin >> n1; cin >> n2;

    while (i <= n1 || i <= n2)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            j++;
        }
        i++;
    }
    if (j == 1)
    {
        cout << "Son PESI." << endl; 
    }
    else
    {
        cout << "No son PESI." << endl;
    }
    cout << "Si desea finalizar el programa escriba 'exit':" << endl;
    cin >> get;
} while (fn.compare(get) == -1);
cout << "Gracias por usar el programa.";
    return EXIT_SUCCESS;
}