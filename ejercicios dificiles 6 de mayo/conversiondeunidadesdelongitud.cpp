#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int opcion;
    float valor, resultado;

    cout << "Conversion (1=cm->pulgadas, 2=metros->pies, 3=km->millas): ";
    cin >> opcion;
    cout << "Ingresa el valor: ";
    cin >> valor;

    switch(opcion) {
        case 1:
            resultado = valor / 2.54;
            cout << valor << " cm = " << resultado << " pulgadas" << endl;
            break;
        case 2:
            resultado = valor * 3.28084;
            cout << valor << " metros = " << resultado << " pies" << endl;
            break;
        case 3:
            resultado = valor * 0.621371;
            cout << valor << " km = " << resultado << " millas" << endl;
            break;
        default: cout << "Opcion invalida" << endl;
    }
    return 0;
}