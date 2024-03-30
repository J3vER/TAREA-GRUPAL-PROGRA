#include <iostream>

using namespace std;

//siento que el inge va a revisar con calculadora el resultado asi  que voy a poner tantos decimales para los valores como sea pposible.

// Función para convertir kilómetros a millas
float kilometrosAMillas(float km) {
    return km * 0.621371;
}

// Función para convertir millas a kilómetros
float millasAKilometros(float millas) {
    return millas / 0.621371;
}

// Función para convertir metros a pulgadas
float metrosAPulgadas(float metros) {
    return metros * 39.3701;
}

// Función para convertir pulgadas a metros
float pulgadasAMetros(float pulgadas) {
    return pulgadas / 39.3701;
}

// Función para convertir libras a kilogramos
float librasAKilogramos(float libras) {
    return libras * 0.453592;
}

// Función para convertir kilogramos a libras
float kilogramosALibras(float kilogramos) {
    return kilogramos / 0.453592;
}

int main() {
    int opcion;
    float valor;

    cout << "Seleccione la conversión que desea realizar:" << endl;
    cout << "1. Kilometros a Millas" << endl;
    cout << "2. Millas a Kilometros" << endl;
    cout << "3. Metros a Pulgadas" << endl;
    cout << "4. Pulgadas a Metros" << endl;
    cout << "5. Libras a Kilogramos" << endl;
    cout << "6. Kilogramos a Libras" << endl;

    cin >> opcion;
	
	//creo que hare el indice para los demas archivos exactamente como me quedo el switch de abajo
    switch (opcion) {
        case 1:
            cout << "Ingrese la cantidad en kilometros: ";
            cin >> valor;
            cout << valor << " kilometros equivalen a " << kilometrosAMillas(valor) << " millas." << endl;
            break;
        case 2:
            cout << "Ingrese la cantidad en millas: ";
            cin >> valor;
            cout << valor << " millas equivalen a " << millasAKilometros(valor) << " kilometros." << endl;
            break;
        case 3:
            cout << "Ingrese la cantidad en metros: ";
            cin >> valor;
            cout << valor << " metros equivalen a " << metrosAPulgadas(valor) << " pulgadas." << endl;
            break;
        case 4:
            cout << "Ingrese la cantidad en pulgadas: ";
            cin >> valor;
            cout << valor << " pulgadas equivalen a " << pulgadasAMetros(valor) << " metros." << endl;
            break;
        case 5:
            cout << "Ingrese la cantidad en libras: ";
            cin >> valor;
            cout << valor << " libras equivalen a " << librasAKilogramos(valor) << " kilogramos." << endl;
            break;
        case 6:
            cout << "Ingrese la cantidad en kilogramos: ";
            cin >> valor;
            cout << valor << " kilogramos equivalen a " << kilogramosALibras(valor) << " libras." << endl;
            break;
        default:
            cout << "Opcion no valida." << endl;
    }
	//repeti tanto codigo que estoy convencido de que podria haber usado un for y hacerlo dinamico, peeero es jueves y me quiero ir al puerto
    return 0;
}
