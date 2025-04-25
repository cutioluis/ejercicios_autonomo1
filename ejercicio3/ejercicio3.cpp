#include <iostream>


using namespace std;


/* 

Crea un programa en C++ que: 
    • Solicite al usuario una contraseña. 
    • Use una estructura de repetición para pedir la contraseña hasta que 
    sea correcta (puedes definirla como "12345"). 
    • Una vez ingresada correctamente, use un ciclo de repetición para 
    mostrar un mensaje de bienvenida cinco veces. 

*/

int main( ) {

    string password;

    // Imprimes mansaje de ingresar contrase;a
    cout << "Ingresa el password: ";
    cin >> password;

    // si la variable password es igual a 12345
    if (password == "12345")
    {
        // si es igual hace un for para iterar el mensaje bievenido 5 veces
        for (size_t i = 0; i < 5; i++)
        {
            cout << "Bienvenido \n";
        }

         // si no es igual muestra este mensaje
    } else {
        cout << "Clave Incorrecta:";
    }
    
    
    return 0;
}
