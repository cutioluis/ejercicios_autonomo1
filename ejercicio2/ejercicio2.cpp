#include <iostream>

using namespace std;


/* 

Escribe un programa que implemente una función sobrecargada llamada 
ordenar: 
    • Ordene dos números enteros en orden ascendente. 
    • Ordene tres números enteros en orden ascendente.
*/

// Ordenar dos números 
void ordenar(int &a, int &b) {
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }
}

// Ordenar tres números 
void ordenar(int &a, int &b, int &c) {
    ordenar(a, b);
    ordenar(a, c);
    ordenar(b, c);
}

int main() {
    int opcion;
    cout << "Oreden de los numeros: \n";
    cout << "1. Ordena 2 numeros\n";
    cout << "2. Ordena 3 numeros\n";
    cout << "Opcion (1 o 2): ";
    cin >> opcion;

    if (opcion == 1) {
        int a, b;
        cout << "Ingresa 2 numeros: ";
        cin >> a >> b;
        ordenar(a, b);
        cout << "Numeros ordenados: " << a << " " << b << endl;
    } else if (opcion == 2) {
        int a, b, c;
        cout << "Ingresa 3 numeros: ";
        cin >> a >> b >> c;
        ordenar(a, b, c);
        cout << "Numeros ordenados: " << a << " " << b << " " << c << endl;
    } else {
        cout << "Opcion invalida." << endl;
    }

    return 0;
}
