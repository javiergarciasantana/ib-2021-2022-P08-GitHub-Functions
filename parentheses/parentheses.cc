/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Javier Garcia Santana || alu0101391663@ull.edu.es
 * @date Nov 22 2021
 * @brief The program checks wether the parentheses inserted are properly closed
 * @see https://github.com/ULL-ESIT-IB-2021-2022/ib-2021-2022-P08-GitHub-Functions/blob/main/Functions-GitHub.md
 */

#include <iostream>
#include <string>

using namespace std;

/*
  This function determines if all of the inserted parentheses are properly closed 
  returning a string on either case
*/
string ProperlyClosed (const string &input) {
  const string kYes{"yes"};
  const string kNo{"no"}; 
  int counter= 0;
  for (int i = 0; i < input.size(); ++i) {
    if (input[i] == '(') {
      ++counter;
    }
    if (input[i] == ')') {
      --counter;
    }
    if (counter < 0) {
      return kNo;
    }
  }
  if (counter == 0) {
    return kYes;
  }
  return kNo;
 }

int main() {
  string input;
  getline(cin, input);
  cout << ProperlyClosed(input) << endl;
  return 0;
}