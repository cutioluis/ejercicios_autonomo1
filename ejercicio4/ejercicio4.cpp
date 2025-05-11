#include <iostream>
using namespace std;

// Función para contar las vocales 
int contarVocales(const string& texto) {
    int contador = 0;
    for (char c : texto) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            contador++;
        }
    }
    return contador;
}

// Función para contar las consonantes 
int contarConsonantes(const string& texto) {
    int contador = 0;
    for (char c : texto) {
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' &&
                c != 'A' && c != 'E' && c != 'I' && c != 'O' && c != 'U') {
                contador++;
            }
        }
    }
    return contador;
}

int main() {
    string texto;

    cout << "Ingrese una cadena de texto: ";
    getline(cin, texto); 

    int vocales = contarVocales(texto);
    int consonantes = contarConsonantes(texto);

    cout << "Número de vocales: " << vocales << endl;
    cout << "Número de consonantes: " << consonantes << endl;

    return 0;
}
