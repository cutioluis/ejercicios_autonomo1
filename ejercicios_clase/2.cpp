#include <iostream>
using namespace std;

/*


Ingresar un número de dos o más cifras y determinar si es SIMPÁTICO. Decimos que un número es SIMPÁTICO, si la suma de sus dígitos es impar. Por ejemplo, 23 es SIMPÁTICO puesto que, la suma de sus dígitos es 5, que es un número impar. Indicarle al usuario que no puede ingresar números con menos de dos cifras. Implemente con funciones en C++.

*/

int sumaDigitos(int numero)
{
    int suma = 0;
    while (numero > 0)
    {
        suma += numero % 10;
        numero /= 10;
    }
    return suma;
}

bool esSimpatico(int numero)
{
    int suma = sumaDigitos(numero);
    return (suma % 2 != 0);
}

int main()
{
    int numero;

    cout << "Número de dos o más cifras: ";
    cin >> numero;

    if (numero < 10)
    {
        cout << "El numero debe ser de almenos 2 cifras.\n";
    }
    else
    {
        if (esSimpatico(numero))
        {
            cout << "El número " << numero << " es SIMPÁTICO.\n";
        }
        else
        {
            cout << "El número " << numero << " no es SIMPÁTICO.\n";
        }
    }

    return 0;
}