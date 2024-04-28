#include <iostream>
using namespace std;
int main() {
  int age;
  cout << "Enter Your Age: ";
  cin >> age;
  (age >= 18) ? cout << "You can Vote" << endl
              : cout << "You can not Vote" << endl;
  return 0;
}