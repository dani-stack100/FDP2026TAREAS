#include <iostream>
using namespace std;

int main() {
    float peso;
    cout << "Ingresa el peso del paquete (en kg): ";
    cin >> peso;

    if (peso <= 5) {
        cout << "La tarifa de envio es: $5" << endl;
    } else if (peso >= 6 && peso <= 10) {
        cout << "La tarifa de envio es: $10" << endl;
    } else {
        cout << "La tarifa de envio es: $15" << endl;
    }

    return 0;
}