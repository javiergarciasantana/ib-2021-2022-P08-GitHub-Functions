/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Javier Garcia Santana || alu0101391663@ull.edu.es
 * @date Nov 19 2021
 * @brief The program prints yes if it finds an 'a' in the inserted sentence and otherwise it prints no
 * @see https://github.com/ULL-ESIT-IB-2021-2022/ib-2021-2022-P08-GitHub-Functions/blob/main/Functions-GitHub.md
 */

#include <iostream>
#include <vector>
#include <string>

using namespace std;

/*
This boolean function determines whether the character 'a' is present on a given string
*/
bool AFinder(const string &kInput) {
  bool result = false;
  for (int i = 0; i < kInput.size(); ++i) {
    if (kInput[i] == 'a') {
      result = true;
    }
  }
  return result;
}

int main() {
  string input;
  getline(cin, input);
  if (input[input.size() - 1] == '.'){
    if (AFinder(input)) {
      cout << "yes" << endl;
    } else {
      cout << "no" << endl;
    }
  } else {
    cerr << "End-of-file reached or I/O error" << endl;
  }
  return 0;
}