#include <iostream>
#include <conio.h>
using namespace std; 
int main(){
    int n1, n2;
    int i = 1, j = 0;
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
        cout << "Son PESI."; 
    }
    else
    {
        cout << "No son PESI.";
    }
    return EXIT_SUCCESS;
}