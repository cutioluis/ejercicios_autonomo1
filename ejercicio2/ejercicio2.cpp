#include <iostream>
using namespace std;

/* 
2. Implementa un programa para calcular el producto de dos números 
mediante sumas sucesivas en C++. La idea es que el producto de dos 
números a y b se puede obtener sumando a a sí mismo b veces. (utiliza 
tanto recursividad como iteración, se debe implementar un ejercicio 
tanto para recursividad como para iteración) 

*/

// Definicion de la funcion factorial
int productoRecursivo(int a, int b) {
    // base
    if (b == 0) {
        return 0;
    } else {
        // llamada recursiva de la funcion
        return a + productoRecursivo(a, b - 1);
    }
}

// versión iterativa (recursividad vs iteración)
int productoIterativo(int a, int b) {
    int resultado = 0;
    for (int i = 0; i < b; i++) {
        resultado += a;
    }
    return resultado;
}

int main() {
    int a, b;

    cout << "Ingrese el primer número (a): ";
    cin >> a;

    cout << "Ingrese el segundo número (b): ";
    cin >> b;

    // ejemplo básico usando recursión
    int resultadoRecursivo = productoRecursivo(a, b);
    cout << "Producto (usando recursividad): " << resultadoRecursivo << endl;

    // Usando iteración
    int resultadoIterativo = productoIterativo(a, b);
    cout << "Producto (usando iteración): " << resultadoIterativo << endl;

    return 0;
}
