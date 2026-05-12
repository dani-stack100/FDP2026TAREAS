#include <iostream>
using namespace std;

int main() {
    int opcion;

    do {
        cout << "MENU PRINCIPAL MOMO SACATE LA BANDERA" << endl;
        cout << "1. Saludar a Momo" << endl;
        cout << "2. Mostrar fecha a Momo" << endl;
        cout << "3. Sumar dos numeros para que el Momo represente bien la bandera" << endl;
        cout << "4. Salir y reportar en fortnite a Momo" << endl;
        cout << "Elige una opcion para el Momo: ";
        cin >> opcion;

        if (opcion == 1) {
            cout << "Hola! Bienvenido al menu del Momo." << endl;
        } else if (opcion == 2) {
            cout << "Hoy es un gran dia para programar, grande Momo." << endl;
        } else if (opcion == 3) {
            int a, b;
            cout << "Ingresa el primer numero: ";
            cin >> a;
            cout << "Ingresa el segundo numero: ";
            cin >> b;
            cout << "Resultado del Momo: " << a + b << endl;
        } else if (opcion != 4) {
            cout << "Opcion invalida. Representas mal la bandera, sacate de aqui." << endl;
        }

    } while (opcion != 4);

    cout << "Saliendo del programa. Hasta luego!" << endl;

    return 0;
}