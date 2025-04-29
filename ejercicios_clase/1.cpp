#include<iostream>


using namespace std;


/* 

Programa que pida tres números y diga si la multiplicación de los
dos primeros es igual al tercero implementado con funciones en C++.

*/

bool verificarMultiplicacion(int num1, int num2, int num3) {
    return (num1 * num2 == num3);
}

int main() {
    int numero1, numero2, numero3;

    // Ingresa 3 numerso
    cout << "Numero 1: ";
    cin >> numero1;
    cout << "Numero 2: ";
    cin >> numero2;
    cout << "Numero 3: ";
    cin >> numero3;

    if (verificarMultiplicacion(numero1, numero2, numero3)) {
        cout << "La multiplicación de " << numero1 << " y " << numero2 << " es igual a " << numero3 << ".\n";
    } else {
        cout << "La multiplicación de " << numero1 << " y " << numero2 << " no es igual a " << numero3 << ".\n";
    }

    return 0;
}