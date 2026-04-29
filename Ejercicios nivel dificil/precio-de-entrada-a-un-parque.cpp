#include <iostream>
using namespace std;

int main() {
    int edad;
    cout << "Ingresa la edad del visitante: ";
    cin >> edad;

    if (edad < 5) {
        cout << "Entrada GRATIS." << endl;
    } else if (edad <= 12) {
        cout << "El precio de entrada es: $5" << endl;
    } else {
        cout << "El precio de entrada es: $10" << endl;
    }

    return 0;
}