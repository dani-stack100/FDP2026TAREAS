#include <iostream>
#include <string>
using namespace std;

int main() {
    string usuarioCorrecto = "admin";
    string contraseniaCorrecta = "1234";
    string usuario, contrasenia;
    int intentos = 0;

    while (intentos < 3) {
        cout << "Usuario: ";
        cin >> usuario;
        cout << "Contrasenia: ";
        cin >> contrasenia;

        if (usuario == usuarioCorrecto && contrasenia == contraseniaCorrecta) {
            cout << "Acceso concedido. Bienvenido!" << endl;
            return 0;
        } else {
            intentos++;
            cout << "Credenciales incorrectas. Intentos restantes: " << (3 - intentos) << endl;
        }
    }

    cout << "Cuenta bloqueada por demasiados intentos fallidos." << endl;
    return 0;
}