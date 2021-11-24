/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Javier Garcia Santana || alu0101391663@ull.edu.es
 * @date Nov 20 2021
 * @brief The program prints the n succession of harmonic numbers
 * @see https://github.com/ULL-ESIT-IB-2021-2022/ib-2021-2022-P08-GitHub-Functions/blob/main/Functions-GitHub.md
 */

#include <iostream>
#include <iomanip>

using namespace std;

/*
  This function outputs the n-th harmonic number
*/
double HarmonicNumber(const int kInput) {
  double result = 0.0;
  for (double i = 1; i <= kInput; ++i) {
    result += 1 / i;
  }
  return result;
}

int main() {
  int input;
  cin >> input;
  if (input >= 0) {
    cout << fixed << setprecision(4) << HarmonicNumber(input) << endl;
  } else {
    cerr << "End-of-file reached or I/O error" << endl;
  }
  return 0;
}