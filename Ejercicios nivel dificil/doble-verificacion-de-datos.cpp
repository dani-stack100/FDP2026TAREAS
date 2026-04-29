#include <iostream>
#include <string>
using namespace std;

int main() {
    string contrasenia1, contrasenia2;

    cout << "Ingresa tu contrasenia: ";
    cin >> contrasenia1;
    cout << "Confirma tu contrasenia: ";
    cin >> contrasenia2;

    if (contrasenia1 == contrasenia2) {
        cout << "Las contrasenias coinciden. Puedes continuar." << endl;
    } else {
        cout << "Las contrasenias NO coinciden. Intenta de nuevo." << endl;
    }

    return 0;
}