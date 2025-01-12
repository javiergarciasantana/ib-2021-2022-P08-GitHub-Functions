/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Javier Garcia Santana || alu0101391663@ull.edu.es
 * @date Nov 19 2021
 * @brief The program prints the chosen i-th position of an inserted chain
 * @see https://github.com/ULL-ESIT-IB-2021-2022/ib-2021-2022-P08-GitHub-Functions/blob/main/Functions-GitHub.md
 */
#include <iostream>

using namespace std;

/*
This non-return function prints the n_th position of a chain of integer numbers
*/
void IthPosition(const int kPosition) {
  int input;
  int counter = 0;
  while (cin >> input) {
    ++counter;
    if (counter == kPosition) {
      cout << "At the position " << kPosition << " there is a(n) " << input << "." << endl;
      return;
    }
  }
}

int main() {
  int position;
  cin >> position;
  IthPosition(position);
  return 0;
}