#include <iostream>
using namespace std;

int main() {
    int n, a = 0, b = 1, siguiente, i = 0;

    cout << "Cuantos terminos de Fibonacci quieres ver? ";
    cin >> n;

    cout << "\nSerie Fibonacci: ";

    while (i < n) {
        cout << a << " ";
        siguiente = a + b;
        a = b;
        b = siguiente;
        i++;
    }

    cout << endl;

    return 0;
}