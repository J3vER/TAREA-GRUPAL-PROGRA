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
    cout << "6. Conversion de numeros enteros a letras" << endl;
    cout << "7. Conversion de numeros enteros con decimal a letras" << endl;
    cout << "8. Una tabla de multiplicar" << endl;
    cout << "9. Todas las tablas de multiplicar" << endl;
    cout << "10. Crear de forma grafica la multiplicacion manual" << endl;
    cout << "11. Conversion de numeros decimales a binario" << endl;
    cout << "12. Conversion de numeros decimales a hexadecimales" << endl;
    cout << "13. Crear Figuras Geometricas Basicas" << endl;
    cout << "14. Mover un punto en toda la pantalla" << endl;
    cout << "15. Simulacion de un Cajero (Automata)" << endl;
    cout << "16. Calcular la Hipotenusa" << endl;
    cout << "17. Calcular el IVA de un producto" << endl;
    cout << "18. Calcular el ISR" << endl;
    cout << "19. Calculadora de horas extras" << endl;
    cout << "20. Calculadora de descuentos" << endl;

    //Mucha por el amor de Jesus no le vayan a borrar NADA al indice, solo agreguen sus programas aqui-

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
        case 6:
            system("cls");
            system("Conversion_de_numeros_enteros_a_letras.exe");
            break;
        case 7:
            system("cls");
            system("Conversion_de_numeros_enteros_con_decimal_a_letras.exe");
            break;
        case 8:
            system("cls");
            system("Una_tabla_de_multiplicar.exe");
            break;
        case 9:
            system("cls");
            system("Todas_las_tablas_de_multiplicar.exe");
            break;
        case 10:
            system("cls");
            system("Crear_de_forma_grafica_la_multiplicacion_manual.exe");
            break;
          case 11:
            system("cls");
            system("decimal_a_binario.exe");
            break;
        case 12:
            system("cls");
            system("deciaml_a_hexa.exe");
            break;
        case 13:
            system("cls");
            system("figuras_geometricas.exe");
            break;
        case 14:
            system("cls");
            system("punto_en_movimiento.exe");
            break;
        case 15:
            system("cls");
            system("cajero.exe");
            break;
        case 16:
            system("cls");
            system("Calcular_la_Hipotenusa.exe");
            break;
        case 17:
            system("cls");
            system("Calcular_el_IVA_de_un_producto.exe");
            break;
        case 18:
            system("cls");
            system("Calcular_el_ISR.exe");
            break;
        case 19:
            system("cls");
            system("Calculadora_de_horas_extras.exe");
            break;
        case 20:
            system("cls");
            system("Calculadora_de_descuento.exe");
            break;
        default:
            cout << "Opcion no valida." << endl;
    }

    return 0;
}
