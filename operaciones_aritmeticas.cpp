#include <iostream>

using namespace std;

// Función para realizar operaciones aritméticas
void realizarOperaciones(float num1, float num2) {
    float suma = num1 + num2;
    float resta = num1 - num2;
    float multiplicacion = num1 * num2;
    // Comprobar si el segundo número no es cero antes de realizar la división
    float division = (num2 != 0) ? num1 / num2 : 0;

    // los resultados (primero debia revisar que la division no incluya un cero, debo arreglar eso...)
    cout << "La suma es: " << suma << endl;
    cout << "La resta es: " << resta << endl;
    cout << "La multiplicacion es: " << multiplicacion << endl;
    cout << "La division es: " << division << endl;
}

int main() {
    float num1, num2;

    // Pedimos al inge que ingrese dos números (rezando porque uno de ellos no sea cero)
    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    // Llamar a la función para realizar operaciones
    realizarOperaciones(num1, num2);

    return 0;
}