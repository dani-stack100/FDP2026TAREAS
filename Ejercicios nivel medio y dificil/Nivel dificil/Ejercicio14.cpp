#include <iostream>
using namespace std;

int main()
{
    int edad;

    cout << "=== Clasificación de Películas ===" << endl;
    cout << "Ingresa tu edad: ";
    cin >> edad;

    // Dividimos la edad en rangos para usar switch
    int rango = (edad >= 18) ? 3 : (edad >= 13) ? 2 : (edad >= 8) ? 1 : 0;

    switch (rango)
    {
    case 0: // Menores de 8 años
        cout << "Categoría G - Apta para toda la familia." << endl;
        cout << "Recomendación: Películas animadas y cuentos infantiles." << endl;
        break;
    case 1: // 8 a 12 años
        cout << "Categoría PG - Se sugiere guía de los padres." << endl;
        cout << "Recomendación: Aventuras y comedias familiares." << endl;
        break;
    case 2: // 13 a 17 años
        cout << "Categoría PG-13 - No recomendada para menores de 13." << endl;
        cout << "Recomendación: Acción, ciencia ficción y drama." << endl;
        break;
    case 3: // 18 años o más
        cout << "Categoría R - Solo para adultos." << endl;
        cout << "Recomendación: Thriller, terror y drama adulto." << endl;
        break;
    default:
        cout << "Edad inválida." << endl;
        break;
    }

    return 0;
}