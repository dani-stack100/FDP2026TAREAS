#include <iostream>
using namespace std;

int main()
{
    double a, b, c;

    cout << "=== Tipo de Triángulo ===" << endl;
    cout << "Ingresa el lado A: ";
    cin >> a;
    cout << "Ingresa el lado B: ";
    cin >> b;
    cout << "Ingresa el lado C: ";
    cin >> c;

    // Convertimos las comparaciones a enteros para usar switch
    // iguales = 1, distintos = 0
    int abIguales = (a == b) ? 1 : 0;
    int bcIguales = (b == c) ? 1 : 0;

    switch (abIguales + bcIguales)
    {
    case 2: // a==b y b==c → los tres lados iguales
        cout << "Triángulo Equilátero" << endl;
        break;
    case 1: // solo un par de lados iguales
        cout << "Triángulo Isósceles" << endl;
        break;
    case 0: // ningún lado igual
        cout << "Triángulo Escaleno" << endl;
        break;
    }

    return 0;
}