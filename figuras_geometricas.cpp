#include <iostream>

using namespace std;

int main() {
    int ladoCuadrado = 5;
    int alturaTriangulo = 5;
    int alturaRectangulo = 4;
    int baseRectangulo = 6;

    // Dibujar cuadrado
    cout << "___________figuras geometricas______________" << endl<<endl;
    cout << "Cuadrado:" << endl;
    for (int i = 0; i < ladoCuadrado; ++i) {
        for (int j = 0; j < ladoCuadrado; ++j) {
            cout << "o ";
        }
        cout << endl;
    }

    // Dibujar triángulo
    cout << endl << "Triángulo equilátero:" << endl;
    for (int i = 0; i < alturaTriangulo; ++i) {
        // Espacios en blanco antes de los asteriscos
        for (int j = 0; j < alturaTriangulo - i - 1; ++j) {
            cout << " ";
        }
        // Asteriscos
        for (int k = 0; k < 2 * i + 1; ++k) {
            cout << "x";
        }
        cout << endl;
    }

    // Dibujar rectángulo
    cout << endl << "Rectángulo:" << endl;
    for (int i = 0; i < alturaRectangulo; ++i) {
        for (int j = 0; j < baseRectangulo; ++j) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}

