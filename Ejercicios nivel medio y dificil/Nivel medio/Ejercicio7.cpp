#include <iostream>
using namespace std;

int main()
{
    int opcion;
    double monto;

    cout << "=== Conversor de Monedas ===" << endl;
    cout << "1. USD a EUR" << endl;
    cout << "2. USD a JPY" << endl;
    cout << "3. USD a GBP" << endl;
    cout << "Elige una opción: ";
    cin >> opcion;

    cout << "Ingresa el monto en USD: ";
    cin >> monto;

    switch (opcion)
    {
    case 1:
        cout << monto << " USD = " << monto * 0.92 << " EUR" << endl;
        break;
    case 2:
        cout << monto << " USD = " << monto * 149.50 << " JPY" << endl;
        break;
    case 3:
        cout << monto << " USD = " << monto * 0.79 << " GBP" << endl;
        break;
    default:
        cout << "Opción inválida." << endl;
        break;
    }

    return 0;
}