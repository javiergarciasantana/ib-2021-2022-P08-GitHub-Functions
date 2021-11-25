/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Javier Garcia Santana || alu0101391663@ull.edu.es
 * @date Nov 19 2021
 * @brief The program determines if a given string is a palindrome
 * @see https://github.com/ULL-ESIT-IB-2021-2022/ib-2021-2022-P08-GitHub-Functions/blob/main/Functions-GitHub.md
 */

#include <iostream>
#include <string>

using namespace std;

/*
  This function returns false or true depending on wether the number is a palindrome or not
  it does so by comparing every character of the string to its equivalent when reading it backwards
*/
bool IsPalindrome(const string& kInput){
  int counter = 0;
  int size = kInput.size() - 1;
  if (kInput.size() >= 50) {
    for (int i = size; i = size - 3; --i) {
      if (kInput[i] == kInput[size - i]) {
        ++counter;
      }
    }
  }
  if (counter == 3) {
    return true;
  }
  for (int i = size; i >= 0; --i) {
    if (kInput[i] == kInput[size - i]) {
        ++counter;
    }
  }
  if(counter == kInput.size()){
    return true;
  }
  return false;
}

int main() {
  string input;
  getline(cin, input);
  if (IsPalindrome(input)) {
    cout << input << " is a palindrome" << endl;
  } else {
    cout << input << " is not a palindrome" << endl;
  }
  return 0;
}