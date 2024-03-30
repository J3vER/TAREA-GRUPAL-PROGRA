#include <iostream>
#include <string>
//no entendi si como minimo debia convertir HASTA 1000, o si las cantidades ingresadas serian mayores a 1000. trabajare acorde a lo segundo
using namespace std;

// Función para convertir un número arábigo a romano
//resulta que nuestros numero normalones son arabicos y yo perdiendo el tiempo buscando que onda con arabia jajaja
string arabigoARomano(int numero) {
    string romano = "";

    // Definir los símbolos romanos y sus valores correspondientes (es mejor dejar esto hecho desde el inicio, por alguna razon al codigo no le gusta si lo hago despues y se reusa a cooperar)
    string simbolos[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    int valores[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};

    // Convertir el número arábigo a romano
    //y se escribe "arábigo" no "arabico"
    for (int i = 0; i < 13; i++) {
        while (numero >= valores[i]) {
            romano += simbolos[i];
            numero -= valores[i];
        }
    }

    return romano;
}

int main() {
    int numero;

    cout << "Ingrese un numero arabigo mayor o igual a 1,000 para convertir a romano: ";
    cin >> numero;

    // Verificar si el número ingresado es mayor o igual a 1,000
    if (numero < 1000) {
        cout << "El numero ingresado debe ser mayor o igual a 1,000." << endl;
    } else {
        // Convertir el número arábigo a romano y mostrar el resultado
        string romano = arabigoARomano(numero);
        cout << "El numero arabigo " << numero << " en romano es: " << romano << endl;
    }

    return 0;
}
