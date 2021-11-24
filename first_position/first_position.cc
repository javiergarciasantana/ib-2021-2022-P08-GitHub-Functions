/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Javier Garcia Santana || alu0101391663@ull.edu.es
 * @date Nov 19 2021
 * @brief The program prints the position of the first even number detected in a given chain of integer valuees
 * @see https://github.com/ULL-ESIT-IB-2021-2022/ib-2021-2022-P08-GitHub-Functions/blob/main/Functions-GitHub.md
 */

#include <iostream>

using namespace std;

/*
This non return function prints out the position of the first even number detected
*/
void FirstPosition() {
  int input;
  int counter = 0;
  while (cin >> input) {
    ++counter;
    if (input % 2 == 0) {
      cout << counter << endl;
      return;
    }
  }
}

int main() {
  FirstPosition();
  return 0;
}