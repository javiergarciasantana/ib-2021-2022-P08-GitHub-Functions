#include <iostream>
#include <string>

using namespace std;

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