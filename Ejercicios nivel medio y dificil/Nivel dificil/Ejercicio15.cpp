#include <iostream>
using namespace std;

int main()
{
    double salario;

    cout << "=== Cálculo de Impuestos ===" << endl;
    cout << "Ingresa tu salario mensual: $";
    cin >> salario;

    // Dividimos el salario en rangos de 1000
    int rango = salario / 1000;

    double porcentaje = 0;
    string categoria = "";

    switch (rango)
    {
    case 0: // $0 - $999
        porcentaje = 0;
        categoria = "Exento de impuestos";
        break;
    case 1: // $1000 - $1999
        porcentaje = 5;
        categoria = "Rango Básico";
        break;
    case 2: // $2000 - $2999
        porcentaje = 10;
        categoria = "Rango Medio-Bajo";
        break;
    case 3: // $3000 - $3999
        porcentaje = 15;
        categoria = "Rango Medio";
        break;
    case 4: // $4000 - $4999
        porcentaje = 20;
        categoria = "Rango Medio-Alto";
        break;
    default: // $5000 o más
        porcentaje = 30;
        categoria = "Rango Alto";
        break;
    }

    double impuesto = salario * (porcentaje / 100);
    double salarioNeto = salario - impuesto;

    cout << "\n--- Resumen ---" << endl;
    cout << "Categoría:      " << categoria << endl;
    cout << "Salario bruto:  $" << salario << endl;
    cout << "Impuesto:       " << porcentaje << "% = $" << impuesto << endl;
    cout << "Salario neto:   $" << salarioNeto << endl;

    return 0;
}