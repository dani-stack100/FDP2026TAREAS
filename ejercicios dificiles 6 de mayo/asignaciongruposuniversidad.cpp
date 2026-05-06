#include <iostream>
using namespace std;

int main() {
    char inicial;
    cout << "Ingresa la inicial del apellido: ";
    cin >> inicial;

    if(inicial >= 'a' && inicial <= 'z')
        inicial = inicial - 32;

    switch(inicial) {
        case 'A': case 'B': case 'C': case 'D': case 'E':
        case 'F': case 'G': case 'H': case 'I': case 'J':
        case 'K': case 'L': case 'M':
            cout << "Grupo 1" << endl;
            break;
        case 'N': case 'O': case 'P': case 'Q': case 'R':
        case 'S': case 'T': case 'U': case 'V': case 'W':
        case 'X': case 'Y': case 'Z':
            cout << "Grupo 2" << endl;
            break;
        default:
            cout << "Inicial invalida" << endl;
    }
    return 0;
}   