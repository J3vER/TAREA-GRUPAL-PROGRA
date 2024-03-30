#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  float rentaBruta, isr;

  // Ingresar la renta bruta
  cout << "Ingrese la renta bruta: Q";
  cin >> rentaBruta;

  // Calcular el ISR
  if (rentaBruta <= 30000.00) {
    isr = rentaBruta * 0.05;
  } else {
    isr = 30000.00 * 0.05 + (rentaBruta - 30000.00) * 0.07;
  }

  // Mostrar el ISR
  cout << "El ISR es: Q" << fixed << setprecision(2) << isr << endl;

  system("pause");
}

