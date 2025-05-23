#include <iostream>
#include <string>
using namespace std;

// funcion recursiva para generar permutaciones
void generadorPermutacion(string& cadena, int inicio, int fin) {
    // Caso base: cuando inicio llega al final, imprimimos la permutación
    if (inicio == fin) {
        cout << cadena << endl;
    } else {
        // for para intercambiar cada letra con la letra en la posición de inicio
        for (int i = inicio; i <= fin; i++) {
            swap(cadena[inicio], cadena[i]); // intercambiar letras

            // Llamada recursiva 
            generadorPermutacion(cadena, inicio + 1, fin);

            // hace un swap para volver a la cadena original usando swap
            swap(cadena[inicio], cadena[i]);
        }
    }
}

int main() {

    // variable y lectura
    string texto;
    cout << "Ingrese una cadena de texto: ";
    cin >> texto;

    // imprimir la cadena ingresada
    cout << "\nPermutaciones posibles:\n";

    // llamada a la funcion recursiva
    generadorPermutacion(texto, 0, texto.length() - 1);

    return 0;
}
