#include <iostream>
#include "operaciones.h"

using namespace std;

int main() {
    double a, b;
    int opcion;

    cout << "Ingrese el primer numero: ";
    cin >> a;

    cout << "Ingrese el segundo numero: ";
    cin >> b;

    cout << "\n1. Sumar";
    cout << "\n2. Restar";
    cout << "\n3. Multiplicar";
    cout << "\n4. Dividir";
    cout << "\nSeleccione una opcion: ";
    cin >> opcion;

    switch (opcion) {
        case 1:
            cout << sumar(a, b);
            break;
        case 2:
            cout << restar(a, b);
            break;
        case 3:
            cout << multiplicar(a, b);
            break;
        case 4:
            if (b != 0)
                cout << dividir(a, b);
            else
                cout << "No se puede dividir por cero";
            break;
        default:
            cout << "Opcion invalida";
    }

    return 0;
}
