#include <iostream>
using namespace std;

int main() {
    int n, i = 1, suma = 0;

    cout << "Ingresa un numero de momo que no representa la bandera que es N: ";
    cin >> n;

    while (i <= n) {      
        if (i % 2 == 0) {  
            suma += i;     
        }
        i++;               
    }

    cout << "La suma de los numeros pares del momo que no representa la bandera es 1 al " << n
         << " es: " << suma << endl;

    return 0;
}