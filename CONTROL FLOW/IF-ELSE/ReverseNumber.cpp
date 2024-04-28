#include <iostream>
using namespace std;
int main() {
  string num;
  cout << "Enter the number: ";
  cin >> num;
  if (num.size() == 4) {
    cout << "The reverse of the number is: " << num[3] << num[2] << num[1]
         << num[0] << endl;
  } else if (num.size() < 4) {
    cout << "Size of number is less than 4" << endl;
  } else {
    cout << "Size of number is greater than 4" << endl;
  }
  return 0;
}