/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Javier Garcia Santana || alu0101391663@ull.edu.es
 * @date Nov 23 2021
 * @brief The program checks value by value if the inserted numbers are prime or not
 * @see https://github.com/ULL-ESIT-IB-2021-2022/ib-2021-2022-P06-Statements/blob/master/Statements.md
 */

#include <iostream>
#include <cmath>

using namespace std;


/*
  This function determines if a number is prime or not, returning false or 
  true for every value
*/
bool IsPrime(const int kNumber) {
  int number_of_divisors = 0;
  if (kNumber <= 1) {
    return false;
  }
  for (int i = 2; i < kNumber; i++) {
    if (kNumber % i == 0) {
      return false;
    }
  }
  if (number_of_divisors == 2) {
    return false;
  }
  return true;
}

/*
  This non-return function prints different strings wether the value in the vector is true or false
*/
void PrintResult(const int kNumber, const bool kResult) {
  if (kResult == true) {
    cout << kNumber << " is prime";
  } else {
    cout << kNumber << " is not prime";
  }
  cout << endl;
}

int main() {
  int numbers_size, number;
  cin >> numbers_size;
  if (numbers_size >= 0) {
    for (int i = 1; i <= numbers_size; i++) {
      cin >> number;
      PrintResult(number, IsPrime(number));
    }
  } else {
    cerr << "End-of-file reached or I/O error" << endl;
  }

  return 0;
}