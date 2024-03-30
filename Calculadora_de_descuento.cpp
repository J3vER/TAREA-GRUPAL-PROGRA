#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  float precio, descuento, precio_final;

  // Ingresar el precio del producto
  cout << "Ingrese el precio del producto: ";
  cin >> precio;

  // Ingresar el porcentaje de descuento
  cout << "Ingrese el porcentaje de descuento (sin el simbolo %): ";
  cin >> descuento;

  // Calcular el descuento
  descuento = descuento / 100;
  precio_final = precio - (precio * descuento);

  // Mostrar el precio final
  cout << "El precio final con el descuento aplicado es: Q" << fixed << setprecision(2) << precio_final << endl;

  system("pause");
}

