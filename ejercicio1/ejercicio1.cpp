#include <iostream>
using namespace std;

/* 
Crea una serie en la que cada número es el factorial de su posición (1, 2, 
6, 24, ...). Utilizar funciones. 
*/


// Definicion de la funcion 
int factorialN(int n) {
    // Caso de base de la funcion recursiva
    if (n == 1) {
        return 1;
    } else {
        // Fucnion recursiva 
        return n * factorialN(n - 1);
    }
}

int main() {
    // variable
    int cantidad;

    // peticion al usuaario ingrese la cantidad de terminos
    cout << "cantidad de terminos de la serie: ";
    // lectura de la cantidad de terminos
    cin >> cantidad;

    // validacion de la cantidad de terminos
    cout << "serie de factoriales:" << endl;

    // ciclo for para imprimir la serie de factoriales
    for (int i = 1; i <= cantidad; i++) {
        cout << factorialN(i) << " ";
    }

    // salto de linea
    cout << endl;
    // fin del programa
    return 0;
}
