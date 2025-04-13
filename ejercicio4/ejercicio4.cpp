#include <iostream>

using namespace std;


int main() {

    /* 
    . Escriba un programa en C++ que solicite al usuario su calificación en un
    examen y el número de inasistencias en un curso. 
        El programa debe verificar si el estudiante ha aprobado el curso. Para aprobar, debe
    cumplir las siguientes condiciones: La calificación debe ser mayor o igual
    a 60 y Las inasistencias no deben ser mayores a 3.
    • Usa operadores relacionales para verificar la calificación y las
    inasistencias.
    • Usa un operador ternario para determinar si el estudiante aprueba
    o no, mostrando el mensaje correspondiente.
    */

    // variable de la nota del examen
    float nota_examen;

    // declaramos la variable para las inasistencias
    int inasistencias_curso;

    // ingresamos valores requeridoss
    cout << "Ingrese su nota del examnen: ";
    cin >> nota_examen;

    cout << "Ingrese el número de inasistencias: ";
    cin >> inasistencias_curso;

    // operacion usando operador && para evaluar 
    if (nota_examen >= 60 && inasistencias_curso < 3 )
    {
        cout << "Ha aprobado el curso ";

    } else {
        cout << "No aprobo el curso ";

    }
    

    system("pause"); 
    return 0;
}