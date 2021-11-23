/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Javier Garcia Santana || alu0101391663@ull.edu.es
 * @date Nov 19 2021
 * @brief The program prints yes if it finds an 'a' in the inserted sentence and otherwise it prints no
 * @see https://github.com/ULL-ESIT-IB-2021-2022/ib-2021-2022-P06-Statements/blob/master/Statements.md
 */

#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool AFinder(const string kInput) {
  bool result = false;
  for (int i = 0; i < kInput.size(); ++i) {
    if (kInput[i] == 'a') {
      result = true;
    }
  }
  return result;
}

void PrintResult(bool kResult) {
  if (kResult == true) {
    cout << "yes" << endl;
  } else {
    cout << "no" << endl;
  }
}

int main() {
  string input;
  getline(cin,input);
  int size = input.size() - 1;
  if (input[size] == '.'){
    int result = AFinder(input);
    PrintResult(result);
  } else {
    cerr << "End-of-file reached or I/O error" << endl;
  }
  return 0;
}