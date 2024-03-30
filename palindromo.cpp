#include <iostream>
#include <string>
#include <algorithm>

//despues de una googleadita me dijeron que no basta con incluir iostream, tambien hacian falta string y algorithm, hay preguntarle que pez al inge con el ultimo, como para que mas puede servir

using namespace std;

// Función para determinar si una cadena es un palindromo
bool esPalindromo(string cadena) {
    string cadenaInvertida = cadena;

    // Invertir el string copiada
    reverse(cadenaInvertida.begin(), cadenaInvertida.end());

    return (cadena == cadenaInvertida);
}

// Función para determinar si un número es un palindromo
bool esPalindromo(int numero) {
    // Convertir el número a una cadena
    string numeroString = to_string(numero);

    // Llamar a la función esPalindromo para verificar si la cadena es un palindromo (las funciones si que facilitan la vida jajaja)
    return esPalindromo(numeroString);
}

int main() {
    string entrada;
    int numero;

    cout << "Ingrese una palabra o un numero para verificar si es un palindromo: ";
    cin >> entrada;

    // Comprobar si la entrada es una palabra o un número, meti la pata al pensar que seria igual con los numeros, nop.
    // Si la entrada es un número, convertirlo y verificar si es un palindromo
    try {
        numero = stoi(entrada);
        if (esPalindromo(numero)) {
            cout << "El numero " << numero << " es un palindromo." << endl;
        } else {
            cout << "El numero " << numero << " no es un palindromo." << endl;
        }
    } catch (...) {
        // Si la conversión a número falla, tons fijo la entrada es una palabra
        if (esPalindromo(entrada)) {
            cout << "La palabra \"" << entrada << "\" es un palindromo." << endl;
        } else {
            cout << "La palabra \"" << entrada << "\" no es un palindromo." << endl;
        }
    }

    return 0;
}
