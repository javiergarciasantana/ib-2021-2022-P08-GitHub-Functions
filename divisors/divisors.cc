/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Javier Garcia Santana || alu0101391663@ull.edu.es
 * @date Nov 19 2021
 * @brief The program prints the Divisors of an inserted number
 * @see https://github.com/ULL-ESIT-IB-2021-2022/ib-2021-2022-P06-Statements/blob/master/Statements.md
 */

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

/*
  This non-return function prints the divisorsof a given number
*/
void DivisorsOfNumber(const int kNumber) {
  cout << "divisors of " << kNumber << ": ";
  double sqrt_of_number = sqrt(kNumber);
  for (int i = 1; i <= kNumber; ++i) {
      if (kNumber % i == 0) {
        cout << i << " ";
      }
  }
  cout << endl;
}

int main(){
  int number;
  while (cin >> number) {
    if (number >= 1 && number <= 1000000000) {
      DivisorsOfNumber(number);
    } else {
      cerr << "End-of-file reached or I/O error" << endl;
    }
  }
  
  return 0;
}