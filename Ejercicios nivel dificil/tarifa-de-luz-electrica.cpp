#include <iostream>
using namespace std;

int main() {
    float consumo;
    cout << "Ingresa el consumo en kWh: ";
    cin >> consumo;

    if (consumo < 100) {
        cout << "Tarifa BAJA aplicada." << endl;
    } else if (consumo <= 200) {
        cout << "Tarifa MEDIA aplicada." << endl;
    } else {
        cout << "Tarifa ALTA aplicada." << endl;
    }

    return 0;
}