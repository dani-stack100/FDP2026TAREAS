#include <iostream>
using namespace std;

int main() {
    int transporte;
    cout << "Tipo (1=Bus, 2=Metro, 3=Taxi): ";
    cin >> transporte;

    switch(transporte) {
        case 1: cout << "Bus: $0.25" << endl; break;
        case 2: cout << "Metro: $0.30" << endl; break;
        case 3: cout << "Taxi: $2.00" << endl; break;
        default: cout << "Opcion invalida" << endl;
    }
    return 0;
}