#include <iostream>
#include <cmath>

using namespace std;

int main() {
  double cateto_a, cateto_b, hipotenusa;

  cout << "Ingrese la longitud del cateto a: ";
  cin >> cateto_a;

  cout << "Ingrese la longitud del cateto b: ";
  cin >> cateto_b;

  // Calcular la hipotenusa usando el teorema de Pitágoras
  hipotenusa = sqrt(pow(cateto_a, 2) + pow(cateto_b, 2));

  cout << "La longitud de la hipotenusa es: " << hipotenusa << endl;

  	system("pause");
}

