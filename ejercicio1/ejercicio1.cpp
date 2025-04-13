#include <iostream>

using namespace std;

int main() {

    // Crear un programa que solicite un numer  entero, Ek origrana deve:
    // 1. Invertir el signo del numero usando un operador unario.
    // 2. Imprimir el valor original y el valor invertido

    // guarda el numero enterno en una variable entera
    int numero;
    // Solicita al usuario un valor usando cout
    cout << "Ingrese el numero entero: ";
    // guarda la variable 
    cin >> numero;


    // crea una variable entera que guarda el valor del numero invertido
    int numeroInvertido = -numero;


    // Imprime salida original y salida invertida usando cout
    cout << "El numero original es: " << numero << endl;
    cout << "El numero invertido es: " << numeroInvertido << endl;

    // Pausa el sistema para que el usuario vea la salida
    system("pause"); 
    return 0;
}