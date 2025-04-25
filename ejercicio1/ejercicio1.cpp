#include <iostream>

using namespace std;

int main()
{

    /*

    1. **Desarrolla un programa que permita gestionar un inventario de productos
    utilizando un menú con las siguientes opciones:**
        1. Ingresar un producto (nombre y cantidad).
        2. Mostrar todos los productos y sus cantidades.
        3. Buscar un producto por nombre.
        4. Salir del programa.

        El programa debe ejecutarse continuamente hasta que el usuario elija la
        opción de salir.
    */

    // variables de productos que puedes ingresar
    string producto1, producto2, producto3;

    // variables de cantidades de productos
    int cantidad1 = 0, cantidad2 = 0, cantidad3 = 0;

    // variable para la opción del menú
    int opcion;

    do {
        
        // Menu 
        cout << "\nMenú de Inventario:\n";
        cout << "1. Ingresar un producto\n";
        cout << "2. Mostrar todos los productos\n";
        cout << "3. Buscar un producto por nombre\n";
        cout << "4. Salir\n";
        cout << "Seleccione una opción: ";
        cin >> opcion;

        // Si la opccion es igual a 1 ingresa un producto
        if (opcion == 1) {
            if (producto1.empty()) {
                cout << "Ingrese nombre del producto: ";
                cin >> producto1;
                cout << "Ingrese cantidad del producto: ";
                cin >> cantidad1;
            } else if (producto2.empty()) {
                cout << "Ingrese nombre del producto: ";
                cin >> producto2;
                cout << "Ingrese cantidad del producto: ";
                cin >> cantidad2;
            } else if (producto3.empty()) {
                cout << "Ingrese nombre del producto: ";
                cin >> producto3;
                cout << "Ingrese cantidad del producto: ";
                cin >> cantidad3;
            } 
            // En dado caso el inventario este lleno no se podra ingresar un nuevo producto
            else {
                cout << "El inventario está lleno (máximo 3 productos).\n";
            }
        // Si la opcion es igual a 2 muestra todos los productos y sus cantidades
        } else if (opcion == 2) {
            cout << "Inventario:\n";
            if (!producto1.empty()) cout << "- " << producto1 << ": " << cantidad1 << endl;
            if (!producto2.empty()) cout << "- " << producto2 << ": " << cantidad2 << endl;
            if (!producto3.empty()) cout << "- " << producto3 << ": " << cantidad3 << endl;
            if (producto1.empty() && producto2.empty() && producto3.empty()) {
                cout << "El inventario está vacío.\n";
            }
        } 
        // Si la opcion es igual a 3 busca un producto por nombre
        else if (opcion == 3) {
            string buscar;
            cout << "Ingrese el nombre del producto a buscar: ";
            cin >> buscar;
            if (buscar == producto1) {
                cout << "Producto encontrado: " << producto1 << " - Cantidad: " << cantidad1 << endl;
            } else if (buscar == producto2) {
                cout << "Producto encontrado: " << producto2 << " - Cantidad: " << cantidad2 << endl;
            } else if (buscar == producto3) {
                cout << "Producto encontrado: " << producto3 << " - Cantidad: " << cantidad3 << endl;
            } else {
                cout << "Producto no encontrado.\n";
            }
        }
        // Si la opcion es igual a 4 sale del programa
        else if (opcion == 4) {
            cout << "Saliendo del programa...\n";
        } else {
            cout << "Opción no válida. Intente de nuevo.\n";
        }
    } 
    // El programa se ejecuta continuamente hasta que el usuario elija la opción de salir
    while (opcion != 4);

    return 0;
}