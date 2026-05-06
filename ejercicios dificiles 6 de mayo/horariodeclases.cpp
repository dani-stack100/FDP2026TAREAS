#include <iostream>
using namespace std;

int main() {
    int dia;
    cout << "Ingresa el dia (1=Lunes ... 7=Domingo): ";
    cin >> dia;

    switch(dia) {
        case 1: cout << "Lunes: Matematicas, Fisica" << endl; break;
        case 2: cout << "Martes: Programacion, Quimica" << endl; break;
        case 3: cout << "Miercoles: Historia, Ingles" << endl; break;
        case 4: cout << "Jueves: Biologia, Arte" << endl; break;
        case 5: cout << "Viernes: Educacion Fisica, Musica" << endl; break;
        case 6: cout << "Sabado: Libre" << endl; break;
        case 7: cout << "Domingo: Libre" << endl; break;
        default: cout << "Dia invalido" << endl;
    }
    return 0;
}