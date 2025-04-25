#include <iostream>

using namespace std;



/* 

Crea un programa que evalúe el desempeño de un empleado 
basado en su calificación de desempeño y su antigüedad en la empresa. 

    Se clasificará el desempeño del empleado en "Excelente", "Bueno" o 
    "Necesita Mejora", y se calculará un bono adicional según la antigüedad:

    Calificación de Desempeño: 
    • 90-100: "Excelente" 
    • 70-89: "Bueno" 
    • Menos de 70: "Necesita Mejora" 

    Bono según Antigüedad: 
    • Menos de 1 año: 0% del salario. 
    • Entre 1 y 3 años: 5% del salario. 
    • Más de 3 años: 10% del salario. 

    Tener en cuenta que se debe solicitar por teclado, la calificación, la 
    antigüedad y el salario (usando los tipos de datos adecuados), adicional, 
    el bono resulta de la multiplicación del salario por el porcentaje que se 
    muestra antes.

*/

int main() {


    // declaracion de variables
    int calificacion;
    float antiguedad;
    double salario;
    double bono = 0.0;
    string desempeño;

    // Solicitar la calificación
    cout << "Ingresa la calificacion del empleado (0-100): ";
    cin >> calificacion;

    // Clasificar el desempeño
    if (calificacion >= 90 && calificacion <= 100) {
        desempeño = "Excelente";
    } else if (calificacion >= 70 && calificacion <= 89) {
        desempeño = "Bueno";
    } else if (calificacion >= 0 && calificacion < 70) {
        desempeño = "Necesita Mejora";
    } else {
        cout << "Calificación inválida." << endl;
        return 1;
    }

    // Solicitar la antigüedad
    cout << "Ingresa la antigüedad del empleado (en años): ";
    cin >> antiguedad;

    // Solicitar el salario
    cout << "Ingresa el salario del empleado: ";
    cin >> salario;

    // Calcular bono basado en la antigüedad
    if (antiguedad < 1) {
        bono = 0.0;
    } else if (antiguedad >= 1 && antiguedad <= 3) {
        bono = salario * 0.05;
    } else if (antiguedad > 3) {
        bono = salario * 0.10;
    }

    // Mostrar resultados
    cout << "Desempeño: " << desempeño << endl;
    cout << "Bono adicional: $" << bono << endl;

    return 0;
}