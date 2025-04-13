#include <iostream>

using namespace std;


int main() {

    /* 
        Escriba un programa en C++:
        • Solicite al usuario ingresar su año de nacimiento.
        • Calcule su edad actual restando el año ingresado del año actual (usa
        una operación binaria de resta).
        • Imprima la edad calculada en pantalla.
        • Verifique si es mayor de edad utilizando un operador ternario y
        muestra un mensaje: "Mayor de edad" o "Menor de edad".
    */


    // año de nacimiento
    int año_nacimiento;
    // año actual
    int año_actual = 2025;
    // edads
    int edad;


    // pedir al usuario su edads
    cout << "Ingrese su año de nacimiento: ";
    cin >> año_nacimiento;

    // operacion para obtener edad
    edad = año_actual - año_nacimiento;

    // mostrar edad
    cout << "Su edad es: " << edad << endl;

    if(edad >= 18 ) {
        cout << "Es mayor de edad: ";
    } else {
        cout << "Es menor de edad: ";

    }
    

    system("pause"); 
    return 0;
}