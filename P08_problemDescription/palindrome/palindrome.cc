#include <iostream>
#include <string>

using namespace std;

bool IsPalindrome(const string& kInput){
  int counter = 0;
  int size = kInput.size() - 1;
  for (int i = kInput.size() - 1; i >= 0; --i) {
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
  if(IsPalindrome(input)) {
    cout << input << " is a palindrome" << endl;
  } else {
    cout << input << " is not a palindrome" << endl;
  }
return 0;
}