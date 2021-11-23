/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Javier Garcia Santana || alu0101391663@ull.edu.es
 * @date Nov 22 2021
 * @brief The program checks wether the parentheses inserted are properly closed
 * @see https://github.com/ULL-ESIT-IB-2021-2022/ib-2021-2022-P06-Statements/blob/master/Statements.md
 */

#include <iostream>
#include <string>

using namespace std;

/*
  This function determines if all of the inserted parentheses are properly closed 
  returning a string on either case
*/
string ProperlyClosed (const string input) {
  const string kYes{"yes"};
  const string kNo{"no"};
  const string kError{"End-of-file reached or I/O error"};
  int counter_open = 0;
  int counter_close = 0;
  for (int i = 0; i < input.size(); ++i) {
    if (input[i] == '(') {
      ++counter_open;
    }
    if (input[i] == ')') {
      ++counter_close;
    }
    if (input[0] == ')' || input[input.size()-1] == '(') {
      return kNo;
    }
  }
  if (counter_open == counter_close) {
    if (counter_open == 0) {
      return kError;
    }
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