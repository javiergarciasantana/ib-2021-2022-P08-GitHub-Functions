/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Javier Garcia Santana || alu0101391663@ull.edu.es
 * @date Nov 19 2021
 * @brief The program determines if a given number is perfect or not
 * @see https://github.com/ULL-ESIT-IB-2021-2022/ib-2021-2022-P08-GitHub-Functions/blob/main/Functions-GitHub.md
 */

#include <iostream>

using namespace std;

/*
  This function returns false or true depending on wether the number is perfect or not
  it does so by adding every divisor of the value except that value and caparing it to see
  if they match up
*/
bool is_perfect(const int kInput){
  int result = 0;
  for (int i = 1; i < kInput - 1; ++i) {
    if (kInput % i == 0) {
      result += i;
    }
  }
  if (result == kInput) {
    if (kInput == 0) {
      return false;
    }
    return true;
  }
  return false;
}

int main() {
  int input;
  cin >> input;
  if (is_perfect(input)) {
    cout << "true" << endl;
    return 0;
  }
  cout << "false" << endl;
  return 0;
}