#include <iostream>
using namespace std;
int main() {
  int n;
  cout << "Enter n: ";
  cin >> n;
  for (int i = n; i >= 1; i--) {
    if (i % 2 == 0) {
      continue;
    } else {
      for (int j = 0; j < i; j++) {
        if (j % 2 == 0) {
          cout << "1 ";
        } else {
          cout << "0 ";
        }
      }
      cout << endl;
    }
  }
  return 0;
}