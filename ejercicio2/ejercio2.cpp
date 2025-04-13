#include <iostream>

using namespace std;


int main() {

    /* 
     1. Crea un programa en C++ que permita calcular el total a pagar en una
    tienda. El programa debe:
    • Leer el precio de un producto y la cantidad comprada.
    • Calcular el subtotal usando el operador binario de multiplicación (*).
    • Aplicar un descuento del 10% si el subtotal supera los 100, utilizando un
    operador ternario.
    • Mostrar el total final a pagar después de aplicar el descuento.
    
    */


    // precio producto
    float precio_producto;
    // cantidad
    int cantidad;
    float subtotal, total;

    // Leer el precio del producto
    cout << "Ingrese el precio del producto: ";
    cin >> precio_producto;

    // Leer la cantidad comprada
    cout << "Ingrese la cantidad comprada: ";
    cin >> cantidad;

    // Calcular el subtotal
    subtotal = precio_producto * cantidad;

    // Aplicar descuento si el subtotal es mayor a 100
    total = (subtotal > 100) ? subtotal * 0.9 : subtotal;

    // Mostrar el resultado
    cout << "Subtotal: $" << subtotal << endl;
    if (subtotal > 100) {
        cout << "Se aplica un descuento del 10%." << endl;
    }
    cout << "Total a pagar: $" << total << endl;

    system("pause"); 
    return 0;
}