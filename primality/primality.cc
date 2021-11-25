/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Javier Garcia Santana || alu0101391663@ull.edu.es
 * @date Nov 23 2021
 * @brief The program checks value by value if the inserted numbers are prime or not
 * @see https://github.com/ULL-ESIT-IB-2021-2022/ib-2021-2022-P08-GitHub-Functions/blob/main/Functions-GitHub.md
 */

#include <iostream>
#include <cmath>

using namespace std;

/*
  This function determines if a number is prime or not, returning false or 
  true for every value
*/
bool IsPrime(const int kNumber) {
  if (kNumber <= 1)
    return false;
  if (kNumber <= 3)
    return true;
  if (kNumber % 2 == 0 || kNumber % 3 == 0)
    return false;
  for (int i = 5; i * i <= kNumber; i = i + 6) {
    if (kNumber % i == 0 || kNumber % (i + 2) == 0) {
      return false;
    }
  }
  return true;
}

int main() {
  int numbers_size, number;
  cin >> numbers_size;
  if (numbers_size >= 0) {
    for (int i = 1; i <= numbers_size; i++) {
      cin >> number;
      if (IsPrime(number)) {
        cout << number << " is prime";
      } else {
        cout << number << " is not prime";
      }
      cout << endl;
    }
  } else {
    cerr << "End-of-file reached or I/O error" << endl;
  }
  return 0;
}