#include <iostream>
using namespace std;
int main() {
  int length, breadth;
  cout << "Enter the length of the rectangle: ";
  cin >> length;
  cout << "Enter the breadth of the rectangle: ";
  cin >> breadth;
  if (length == breadth) {
    cout << "It is a square" << endl;
  } else {
    cout << "It is not a square" << endl;
  }
  return 0;
}