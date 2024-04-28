#include <iostream>
using namespace std;
int main() {
  int num;
  cout << "Enter the number you want table of: ";
  cin >> num;
  cout << "Table of" << num << "is" << endl;
  for (int i = 1; i <= 10; i++) {
    cout << num << "*" << i << "=" << num * i << endl;
  }
  return 0;
}