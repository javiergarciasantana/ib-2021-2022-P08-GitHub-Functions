/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Javier Garcia Santana || alu0101391663@ull.edu.es
 * @date Nov 19 2021
 * @brief The program prints the result of subtracting two harmonic number successions
 * @see https://github.com/ULL-ESIT-IB-2021-2022/ib-2021-2022-P06-Statements/blob/master/Statements.md
 */

#include <iostream>
#include <iomanip>

using namespace std;

/*
  This function outputs the n-th harmonic number
*/
double HarmonicNumber(const int kInput_1, const int kInput_2) {
  double result_1 = 0.0;
  double result_2 = 0.0;
  double result_total;
  for (double i = 1; i <= kInput_1; ++i) {
    result_1 += 1 / i;
    if (i == kInput_2) {
      result_2 = result_1;
    }
  }
  result_total = result_1 - result_2;
  return result_total;
}

int main() {
  int input_1, input_2;
  while (cin >> input_1 >> input_2) {
    if (input_1 >= 0 && input_2 >= 0) {
      if (input_1 >= input_2) {
        cout << fixed << setprecision(10) << HarmonicNumber(input_1, input_2) << endl;
      } else {
        cerr << "End-of-file reached or I/O error" << endl;
      }
    } else {
      cerr << "End-of-file reached or I/O error" << endl;
    }
  }
  return 0;
}