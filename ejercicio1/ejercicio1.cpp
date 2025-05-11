#include <iostream>

using namespace std;



/* 
1. Crea un programa que calcule la distancia entre dos puntos utilizando una 
función sobrecargada: 
    • Una versión que reciba las coordenadas de dos puntos en un plano 2D 
    (x1, y1, x2, y2). 
    1 
    • Otra versión que reciba las coordenadas de dos puntos en un espacio 3D 
    (x1, y1, z1, x2, y2, z2). 
    • Solicita al usuario los valores necesarios y muestra los resultados en 
    pantalla.
*/


// Función para calcular el cuadrado de un número
double cuadrado(double x) {
    return x * x;
}

// Aproximación simple de la raíz cuadrada (búsqueda lineal)
double raizCuadrada(double n) {
    double i = 0.0;
    while (i * i <= n) {
        i += 0.0001;  // Incremento pequeño para mayor precisión
    }
    return i;
}

// Función para calcular distancia en 2D
double calcularDistancia(double x1, double y1, double x2, double y2) {
    double dx = x2 - x1;
    double dy = y2 - y1;
    return raizCuadrada(cuadrado(dx) + cuadrado(dy));
}

// Función sobrecargada para calcular distancia en 3D
double calcularDistancia(double x1, double y1, double z1, double x2, double y2, double z2) {
    double dx = x2 - x1;
    double dy = y2 - y1;
    double dz = z2 - z1;
    return raizCuadrada(cuadrado(dx) + cuadrado(dy) + cuadrado(dz));
}

int main() {
    int opcion;
    cout << "Calculo de la Distancia\n";
    cout << "1. Ejercicio 1: Plano 2D\n";
    cout << "2. Ejercicio 2: Espacio 3D\n";
    cout << "Opcion (1 o 2): ";
    cin >> opcion;

    if (opcion == 1) {
        double x1, y1, x2, y2;
        cout << "Ingrese x1, y1: ";
        cin >> x1 >> y1;
        cout << "Ingrese x2, y2: ";
        cin >> x2 >> y2;
        double distancia = calcularDistancia(x1, y1, x2, y2);
        cout << "distancia en 2D: " << distancia << endl;
    } else if (opcion == 2) {
        double x1, y1, z1, x2, y2, z2;
        cout << "ingrese: x1, y1, z1: ";
        cin >> x1 >> y1 >> z1;
        cout << "ingese: x2, y2, z2: ";
        cin >> x2 >> y2 >> z2;
        double distancia = calcularDistancia(x1, y1, z1, x2, y2, z2);
        cout << "distancia: en 3D: " << distancia << endl;
    } else {
        cout << "No es valida op." << endl;
    }

    return 0;
}