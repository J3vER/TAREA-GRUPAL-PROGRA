#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  float precioProducto, porcentajeIVA, iva;

  // Ingresar el precio del producto
  cout << "Ingrese el precio del producto: ";
  cin >> precioProducto;

  // Ingresar el porcentaje de IVA
  cout << "Ingrese el porcentaje de IVA (sin el símbolo %): ";
  cin >> porcentajeIVA;

  // Calcular el IVA
  iva = precioProducto * (porcentajeIVA / 100);

  // Mostrar el IVA
  cout << "El IVA del producto es: Q" << fixed << setprecision(2) << iva << endl;

  system("pause");
}

