#include <iostream>

using namespace std;

// Función para determinar si un número es par o impar
void determinarParidad(int num) {
    if (num % 2 == 0) {
        cout << num << " es un par." << endl;
    } else {
        cout << num << " es un impar." << endl;
    }
}

int main() {
    int numero;

    // no tengo idea de que hacer si el inge mete decimales, asi que pediremos un numero ENTERO (para que sea error de usuario si no funciona jejeje)
    cout << "Ingrese un numero entero: ";
    cin >> numero;

    // Determinar si el número es par o impar
    determinarParidad(numero);

    return 0;
}