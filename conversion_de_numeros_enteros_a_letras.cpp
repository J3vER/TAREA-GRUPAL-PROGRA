#include <iostream>
#include <locale.h>
using namespace std;

int main() {
    setlocale(LC_CTYPE, "spanish");
    int numero, unidad, decena, centena, unimil;
    cout << "Digite un número en el rango de 0 al 9999: ";
    cin >> numero;

    if (numero >= 0 && numero <= 9999) {
        unidad = numero % 10; numero = numero / 10;
        decena = numero % 10; numero = numero / 10;
        centena = numero % 10; numero = numero / 10;
        unimil = numero % 10;

        // Presentar unidades de mil
        switch (unimil) {
            case 0: cout << ""; break;
            case 1: cout << "mil "; break;
            case 2: cout << "dos mil"; break;
            case 3: cout << "tres mil"; break;
            // Otros casos para 4, 5, 6, 7, 8, 9...
        }

        // Presentar centenas
        switch (centena) {
            case 0: cout << ""; break;
            case 1: if (decena == 0 && unidad == 0) { cout << "cien "; }
                    else { cout << "ciento "; }
                    break;
            // Otros casos para 2, 3, 4, 5, 6, 7, 8, 9...
        }

        // Presentar decenas
        switch (decena) {
            case 1: switch (unidad) {
                    case 0: cout << "diez "; break;
                    // Otros casos para 1, 2, 3, 4, 5, 6, 7, 8, 9...
                }
                break;
            // Otros casos para 2, 3, 4, 5, 6, 7, 8, 9...
        }

        // Presentar unidades
        switch (unidad) {
            case 0: if (unimil == 0 && centena == 0 && decena == 0) { cout << "cero"; }
                    else { cout << ""; }
                    break;
            // Otros casos para 1, 2, 3, 4, 5, 6, 7, 8, 9...
        }
    } else {
        cout << "\nError!!! Debes ingresar un número en el rango de 0 al 9999";
    }

    cout << "\n";
    cin.get(); // Pausa para que el programa no se cierre inmediatamente
    return 0;
}
