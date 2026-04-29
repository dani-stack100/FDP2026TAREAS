#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "Ingresa el primer numero: ";
    cin >> num1;
    cout << "Ingresa el segundo numero: ";
    cin >> num2;

    if (num1 > num2) {
        cout << "El primer numero (" << num1 << ") es mayor." << endl;
    } else if (num1 < num2) {
        cout << "El segundo numero (" << num2 << ") es mayor." << endl;
    } else {
        cout << "Los numeros son iguales." << endl;
    }

    return 0;
}