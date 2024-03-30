#include <iostream>
#include <cstdlib> // Para el uso de la función system()

//el indice se pone sus moños si el nombre de sus programas esta separado, por favor renombrenlos usando los "_" para unir las palabras del nombre de sus archivos
//tomen los nombres de mis archivos como ejemplo
//-benkis

using namespace std;

int main() {
    int opcion;

    cout << "Seleccione un programa:" << endl;
    cout << "1. Operaciones aritmeticas (suma, resta, multiplicacion, division)" << endl;
    cout << "2. Determinar si un numero es par o impar" << endl;
    cout << "3. Conversion de unidades (kilometros a millas, metros a pulgadas, libras a kilogramos)" << endl;
    cout << "4. Determinar si una palabra o un numero es palindromo" << endl;
    cout << "5. Conversion de numeros arabigos a romanos (minimo 1,000)" << endl;
    //Mucha por el amor de Jesus no le vayan a borrar NADA al indice, solo agreguen sus programas aquí

    cout << "Ingrese el numero correspondiente al programa que desea ejecutar: ";
    cin >> opcion;

    switch (opcion) {
        case 1:
            system("cls"); // Limpiar la pantalla (caso contrario se nos quedaria un caos en la consola al ejecutar esta monstruosidad -Benkis)
            system("operaciones_aritmeticas.exe"); // Ejecutar el programa de operaciones aritmeticas
            break;
        case 2:
            system("cls");
            system("par_o_impar.exe");
            break;
        case 3:
            system("cls");
            system("conversion_unidades.exe");
            break;
        case 4:
            system("cls");
            system("palindromo.exe");
            break;
        case 5:
            system("cls");
            system("arabigos_romanos.exe");
            break;
        default:
            cout << "Opcion no valida." << endl;
    }

    return 0;
}
