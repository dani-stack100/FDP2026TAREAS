#include <iostream>
using namespace std;

int main() {
    int edad, infracciones, experiencia;

    cout << "Ingresa la edad del conductor: ";
    cin >> edad;
    cout << "Ingresa el numero de infracciones: ";
    cin >> infracciones;
    cout << "Ingresa los anos de experiencia: ";
    cin >> experiencia;

    if (edad < 18) {
        cout << "Estado: NO HABILITADO (menor de edad)." << endl;
    } else if (infracciones >= 5) {
        cout << "Estado: SUSPENDIDO (demasiadas infracciones)." << endl;
    } else if (experiencia >= 5 && infracciones == 0) {
        cout << "Estado: EXCELENTE conductor." << endl;
    } else if (experiencia >= 2 && infracciones <= 2) {
        cout << "Estado: BUEN conductor." << endl;
    } else {
        cout << "Estado: CONDUCTOR EN OBSERVACION." << endl;
    }

    return 0;
}