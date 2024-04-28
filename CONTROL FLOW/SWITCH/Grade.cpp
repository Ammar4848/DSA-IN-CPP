#include <iostream>
using namespace std;
int main() {
  int phy, chem, bio, math, com, total, per, flag;
  cout << "Enter Your Marks out of 100: " << endl;
  cout << "Marks In Physics: ";
  cin >> phy;
  cout << "Marks In Chemistry: ";
  cin >> chem;
  cout << "Marks In Biology: ";
  cin >> bio;
  cout << "Marks In Maths: ";
  cin >> math;
  cout << "Marks In Computer: ";
  cin >> com;
  total = phy + chem + bio + math + com;
  per = total / 5;
  if (per >= 90) {
    flag = 1;
  } else if (per >= 80) {
    flag = 2;
  } else if (per >= 70) {
    flag = 3;
  } else if (per >= 60) {
    flag = 4;
  } else if (per >= 40) {
    flag = 5;
  } else {
    flag = 6;
  }
  switch (flag) {
  case 1:
    cout << "Your percentage are: " << per << "%" << endl;
    cout << "You got A Grade" << endl;
    break;
  case 2:
    cout << "Your percentage are: " << per << "%" << endl;
    cout << "You got B Grade" << endl;
    break;
  case 3:
    cout << "Your percentage are: " << per << "%" << endl;
    cout << "You got C Grade" << endl;
    break;
  case 4:
    cout << "Your percentage are: " << per << "%" << endl;
    cout << "You got D Grade" << endl;
    break;
  case 5:
    cout << "Your percentage are: " << per << "%" << endl;
    cout << "You got E Grade" << endl;
    break;
  case 6:
    cout << "Your percentage are: " << per << "%" << endl;
    cout << "You got F Grade" << endl;
    break;
  }
  return 0;
}