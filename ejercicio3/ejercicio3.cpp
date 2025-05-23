#include <iostream>
#include <string>
using namespace std;

// definicion de la funcion recursiva contar vocales
int contarVocalesRecursivo(const string& texto, int indice) {
    // Caso base: cuando se llega al final de la cadena
    if (indice >= texto.length()) {
        return 0;
    }

    // Verificar si el carácter actual es una vocal
    // sopor te para vocales minusculas y mayusculas
    char c = tolower(texto[indice]); 
    int esVocal = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') ? 1 : 0;

    // llamada recursiva
    return esVocal + contarVocalesRecursivo(texto, indice + 1);
}

int main() {
    //variable
    string cadena;

    // peticion al usuario ingrese una cadena de texto
    cout << "ingrese el string (cadena de texto): ";
    getline(cin, cadena);

    // ejemplo basico de uso de la funcion recursiva
    int totalVocales = contarVocalesRecursivo(cadena, 0);

    // imprimir el resultado
    cout << "n vocales: " << totalVocales << endl;

    return 0;
}
