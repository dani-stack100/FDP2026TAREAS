#include <iostream>
using namespace std;

int main() {
    float velocidad;
    cout << "Ingresa la velocidad del conductor (km/h): ";
    cin >> velocidad;

    if (velocidad > 80) {
        cout << "Multa MAYOR por exceso de velocidad grave." << endl;
    } else if (velocidad > 60) {
        cout << "Multa menor por exceso de velocidad." << endl;
    } else {
        cout << "Velocidad permitida. Sin multa." << endl;
    }

    return 0;
}