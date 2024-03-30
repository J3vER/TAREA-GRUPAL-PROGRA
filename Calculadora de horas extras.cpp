#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  double VALOR_HORA = 16.0; // Valor de la hora normal en Quetzales
  double MAX_HORAS_EXTRA = 30.0; // Máximo de horas extras a pagar

  double horasNormales, horasExtra, pagoNormal, pagoExtra, pagoTotal;

  cout << "Ingrese las horas normales trabajadas en la semana: ";
  cin >> horasNormales;

  cout << "Ingrese las horas extras trabajadas en la semana: ";
  cin >> horasExtra;

  if (horasExtra > MAX_HORAS_EXTRA) {
    cout << "Error: El total de horas extras no puede superar " << MAX_HORAS_EXTRA << endl;
    return 1;
  }

  pagoNormal = horasNormales * VALOR_HORA;
  pagoExtra = horasExtra * VALOR_HORA * 1.5;
  pagoTotal = pagoNormal + pagoExtra;

  cout << fixed << setprecision(2);

  cout << "------------------------------------------" << endl;
  cout << "Horas normales: " << setw(10) << horasNormales << endl;
  cout << "Pago normal:   " << setw(10) << "Q" << pagoNormal << endl;
  cout << endl;
  cout << "Horas extras: " << setw(10) << horasExtra << endl;
  cout << "Pago extra:   " << setw(10) << "Q" << pagoExtra << endl;
  cout << endl;
  cout << "------------------------------------------" << endl;
  cout << "Pago total:            " << setw(10) << "Q" << pagoTotal << endl;
  cout << "------------------------------------------" << endl;

  system ("pause");
}

