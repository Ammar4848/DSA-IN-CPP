#include <iostream>
using namespace std;
int main() {
  int age;
  string gender, mstatus;
  cout << "Enter your details: " << endl;
  cout << "Age: ";
  cin >> age;
  cout << "Gender Male(M) or Female(F): ";
  cin >> gender;
  cout << "Marital Status Married(Y) or Not Married(N): ";
  cin >> mstatus;
  if (gender == "F") {
    cout << "You can only Work in Urban areas" << endl;
  } else if (gender == "M" && age > 20 && age <= 40) {
    cout << "You can Work Anywhere" << endl;
  } else if (gender == "M" && age > 40 && age <= 60) {
    cout << "You can only Work in Urban areas" << endl;
  } else {
    cout << "ERROR" << endl;
  }
  return 0;
}