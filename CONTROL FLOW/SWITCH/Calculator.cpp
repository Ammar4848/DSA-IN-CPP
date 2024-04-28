#include <iostream>
using namespace std;
int main() {
  int a, b, choice;
  cout << "Enter value of a: ";
  cin >> a;
  cout << "Enter value of b: ";
  cin >> b;
  cout << "Operations You can perform:" << endl;
  cout << "1. Addition" << endl;
  cout << "2. Substraction" << endl;
  cout << "3. Multiplication" << endl;
  cout << "4. Division" << endl;
  cout << "Enter operation you want to perform: ";
  cin >> choice;
  switch (choice) {
  case 1:
    cout << "Addition is: " << a + b << endl;
    break;

  case 2:
    cout << "Substraction is: " << a - b << endl;
    break;

  case 3:
    cout << "Multiplication is: " << a * b << endl;
    break;

  case 4:
    cout << "Division is: " << a / b << endl;
    break;

  default:
    cout << "Invalid choice" << endl;
    break;
  }
  return 0;
}