/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Javier Garcia Santana || alu0101391663@ull.edu.es
 * @date Nov 24 2021
 * @brief The program prints the taylor series of the function e^x of a given number
 * @see https://github.com/ULL-ESIT-IB-2021-2022/ib-2021-2022-P08-GitHub-Functions/blob/main/Functions-GitHub.md
 */

#include <iostream>
#include <iomanip>

using namespace std;

/*
This function calculates the factorial of a given number
*/
double Factorial (const double kInput) {
  double factorial = 1.0;
  for (unsigned i = 1; i <= kInput; ++i) {
    factorial *= i; 
  }
  return factorial;
}

/*
This function calculates the taylor series of e^x of an inserted number while relying on a function to 
do the factorials
*/
double Aproximation_loop (const int kInput) {
  int input = kInput;
  double result = 0;
  for (double i = 0; i < kInput; ++i) {
    result += 1 / Factorial(i);
  }
  return result;
}

int main() {
  int input;
  while(cin >> input) {
    if (input >= 0 && input <= 20) {
      cout << "With " << input << " term(s) we get " << fixed << setprecision(10) << Aproximation_loop(input) << "." << endl;
    } else {
      cerr << "End-of-file reached or I/O error" << endl;
    }
  }
  return 0;
}
