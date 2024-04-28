#include <iostream>
using namespace std;
int main() {
  int year;
  cout << "Enter the Year: ";
  cin >> year;
  if (year % 4 == 0 && year % 400 != 0) {
    cout << "Leap Year" << endl;
  } else if (year % 4 == 0 && year % 400 == 0) {
    cout << "Centurien Leap Year" << endl;
  } else {
    cout << "Not a Leap Year" << endl;
  }
  return 0;
}