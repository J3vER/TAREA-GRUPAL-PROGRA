/* Cajero automatico */

//CODEBOT PROGRAMANDO EN C++ / SUSCRIBETE SI TE GUSTA EL CONTENIDO


//Librerias
#include<iostream>
#include<limits>

using namespace std;

int main() {
    int op;
    float saldo = 100, operacion = 0;
    bool volverMenu = true;

    do {
        // Mensaje en pantalla
        cout << "- - - - - - - - - - - - - - - - -" << endl;
        cout << "Bienvenido | Cajero automatico" << endl;
        cout << "- - - - - - - - - - - - - - - - -" << endl;
        cout << "1.Ver saldo" << endl;
        cout << "2.Depositar saldo" << endl;
        cout << "3.Transferir saldo" << endl;
        cout << "4.Retirar efectivo" << endl;
        cout << "5.Salir" << endl;
        cout << "- - - - - - - - - - - - - - - - -" << endl;
        cout << "\nSeleccione una opcion: ";
        cin >> op;

        switch (op) {
            case 1:
                // VER SALDO DISPONIBLE
                system("cls"); // Limpiamos la consola
                cout << "- - - - - - - - - - - - - - - - -" << endl;
                cout << "Ver saldo Disponible |  BancaAmiga " << endl;
                cout << "- - - - - - - - - - - - - - - - -" << endl;

                // Mostramos el saldo
                cout << "\nSaldo disponible: $" << saldo << endl;
                break;

            case 2:
            	// DEPOSITAR SALDO
                system("cls"); // Limpiamos la consola
                cout << "- - - - - - - - - - - - - - - - -" << endl;
                cout << "Depositar saldo |  BancaAmiga " << endl;
                cout << "- - - - - - - - - - - - - - - - -" << endl;

                // Mensajes en pantalla
                cout << "Ingrese la cantidad: "; cin >> operacion;

                // Operaciones matemáticas
                saldo += operacion;

                cout << "\nEl deposito fue exitoso!" << endl;
                break;

            case 3:
            	// TRANSFERIR SALDO
                system("cls"); // Limpiamos la consola
                cout << "- - - - - - - - - - - - - - - - -" << endl;
                cout << "Transferir saldo |  BancaAmiga " << endl;
                cout << "- - - - - - - - - - - - - - - - -" << endl;

                if (saldo <= 0) {
                    cout << "\nSaldo insuficiente para realizar esta operacion" << endl;
                } else {
                    // Mensajes en pantalla
                    cout << "Ingrese la cantidad: "; cin >> operacion;

                    saldo -= operacion;

                    cout << "\nLa transferencia fue exitosa!" << endl;
                }

                break;

            case 4:
            	// RETIRAR EFECTIVO
                system("cls"); // Limpiamos la consola
                cout << "- - - - - - - - - - - - - - - - -" << endl;
                cout << "Retirar efectivo |  BancaAmiga " << endl;
                cout << "- - - - - - - - - - - - - - - - -" << endl;

                if (saldo <= 0) {
                    cout << "\nSaldo insuficiente para realizar esta operacion" << endl;
                } else {
                    // Mensajes en pantalla
                    cout << "Ingrese la cantidad: "; cin >> operacion;

                    // Operaciones matemáticas
                    saldo -= operacion;

                    cout << "\nRecoja su efectivo en la casilla!" << endl;
                }

                break;

            case 5:
            	// SALIR DEL PROGRAMA
                cout << "Saliendo por favor espere..." << endl;
                volverMenu = false;
                break;

            default:
            	// POR SI SELECCIONONAN UNA OPCION QUE NO EXISTE
                cout << "Opcion no valida, Por favor seleccione una opcion valida." << endl;
        }

        if (volverMenu && op != 5) {
            // Preguntamos si quiere volver al menú
            cout << "\nDesea volver al menu? (Si: 1, No: 0): "; cin >> volverMenu;
            cin.clear(); // Limpiamos el estado de error de cin.
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignoramos la entrada incorrecta
            
        }

        system("cls");
    } while (volverMenu);

    return 0;
}
