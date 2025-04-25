#include <iostream>

using namespace std;

int main() {
    // Saldo inicial
    double saldo = 500.0;
    int opcion;
    double monto;

    cout << "Bienvenido al cajero automático\n";

    do {
        // Menú de opciones
        cout << "\nSeleccione una opción:\n";
        cout << "1. Consultar saldo\n";
        cout << "2. Depositar dinero\n";
        cout << "3. Retirar dinero\n";
        cout << "4. Salir\n";
        cout << "Opción: ";
        cin >> opcion;

        switch(opcion) {
            case 1:
                // Consultar saldo
                cout << "Su saldo actual es: $" << saldo << "\n";
                break;
            case 2:
                // Depositar dinero
                cout << "Ingrese el monto a depositar: $";
                cin >> monto;
                if (monto > 0) {
                    saldo += monto;
                    cout << "Depósito exitoso. Su nuevo saldo es: $" << saldo << "\n";
                } else {
                    cout << "El monto debe ser positivo.\n";
                }
                break;
            case 3:
                // Retirar dinero
                cout << "Ingrese el monto a retirar: $";
                cin >> monto;
                if (monto > 0 && monto <= saldo) {
                    saldo -= monto;
                    cout << "Retiro exitoso. Su nuevo saldo es: $" << saldo << "\n";
                } else if (monto > saldo) {
                    cout << "Error: No tiene saldo suficiente.\n";
                } else {
                    cout << "El monto debe ser positivo.\n";
                }
                break;
            case 4:
                // Salir
                cout << "Gracias por usar el cajero automático. ¡Hasta luego!\n";
                break;
            default:
                cout << "Opción no válida. Por favor, intente nuevamente.\n";
        }
    } while (opcion != 4);

    return 0;
}