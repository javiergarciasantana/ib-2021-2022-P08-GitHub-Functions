/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Javier Garcia Santana || alu0101391663@ull.edu.es
 * @date Nov 23 2021
 * @brief The program checks value by value if the inserted numbers are prime or not
 * @see https://github.com/ULL-ESIT-IB-2021-2022/ib-2021-2022-P06-Statements/blob/master/Statements.md
 */

#include <iostream>
#include <vector>

using namespace std;


/*
  This function determines if a number is prime or not, returning false or 
  true inside of a vector for every value
*/
vector<bool> Isprime(const vector<int> kInputs) {
  vector<bool> result;
  bool loop_result;
  for (int i = 0; i < kInputs.size(); ++i) {
    if(kInputs[i] <= 1) {
      loop_result = false;
    } else {
      for (int j = 2; j < kInputs[i]; ++j) {
        if (kInputs[i] % j == 0) {
	        loop_result = false; 
          break;
        } else {
          loop_result = true;
        }
      }
    }
    result.emplace_back(loop_result);
  } 
  return result;
}

/*
  This non-return function prints different strings wether the value in the vector is true or false
*/
void PrintResult(vector<bool> result, vector<int> inputs) {
  for (int i = 0; i < result.size(); ++i) {
    if (result[i] == true) {
    cout << inputs[i] << " is prime" << endl;
    }
    if (result[i] == false) {
    cout << inputs[i] << " is not prime" << endl;
    }
  }
  cout << endl;
}

int main() {
  int number_of_inputs, input;
  cin >> number_of_inputs;
  if (number_of_inputs >= 0) {
    int counter = 1;
    vector<int> inputs;
    while (counter <= number_of_inputs) {
      cin >> input;
      inputs.emplace_back(input);
      ++counter;
    }
  vector<bool> result;
  result = Isprime(inputs);
  PrintResult(result,inputs);
  } else {
    cerr << "End-of-file reached or I/O error" << endl;
  }
  return 0;
}