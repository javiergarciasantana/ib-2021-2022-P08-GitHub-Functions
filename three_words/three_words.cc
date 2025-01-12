/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Javier Garcia Santana || alu0101391663@ull.edu.es
 * @date Nov 18 2021
 * @brief The program changes the order of the inserted three words to c b a, when the intital order was a b c
 * @see https://github.com/ULL-ESIT-IB-2021-2022/ib-2021-2022-P08-GitHub-Functions/blob/main/Functions-GitHub.md
 */

#include <iostream>
#include <string>
#include <vector>

using namespace std;

/*
This function checks the number of spaces on a given string
*/
int SpaceCount(const string &input){
  int counter = 0;
  for (int i = 0; i < input.size(); ++i) {
    if (input[i] == ' ') {
      ++ counter;
    }
  }
  return counter;
}

/*
This function saves the position of every space from a given string in a vector
*/
vector<int> SpacePosition(const string input) {
  vector<int> counter;
  for (int i = 0; i < input.size(); ++i) {
    if (input[i] == ' ') {
      counter.emplace_back(i);
    }
  }
  return counter;
}

/*
This non-return function changes the order of words in a string based on were the spaces are
It goes from "a b c" to "c b a"
*/
void PrintString(const string input, vector<int> position) {
  for (int i = position[1] + 1; i < input.size(); ++i) {
    cout << input[i]; 
  }
  cout << " ";
  for (int i = position[0] +1; i < position[1]; ++i) {
    cout << input[i]; 
  }
  cout << " ";
  for (int i = 0; i < position[0]; ++i) {
    cout << input[i]; 
  }
  cout << endl;
}
int main() {
  string input;
  vector<int> position;
  getline(cin, input);
  if (SpaceCount(input) == 2) {
    position = SpacePosition(input);
    PrintString(input, position);
  } else {
    cerr << "End-of-file reached or I/O error" << endl;
  }
  return 0;
}