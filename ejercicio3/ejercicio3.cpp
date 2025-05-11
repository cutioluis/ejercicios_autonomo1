#include <iostream>

using namespace std;



/* 
3. Desarrolla un programa que: 
    • Incluya una función llamada esBisiesto que reciba un número entero 
    (año) como parámetro. 
    • Devuelva un valor booleano indicando si el año es bisiesto o no. 
    • Solicite al usuario un año, llame a la función y muestre un mensaje 
    indicando si es bisiesto o no.
*/


// Función que determina si un año es bisiesto
bool esBisiesto(int anio) {
    return (anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0);
}

int main() {
    int anio;

    cout << "Ingrese un año: ";
    cin >> anio;

    if (esBisiesto(anio)) {
        cout << anio << " bisiesto." << endl;
    } else {
        cout << anio << " no es bisiesto." << endl;
    }

    return 0;
}