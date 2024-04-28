#include <iostream>
using namespace std;
int main() {
  int n;
  cout << "Enter n: ";
  cin >> n;
  for (int i = 1; i <= n; i++) {
    if (i % 2 == 0) {
      continue;
    } else {
      for (int s = n; s > i; s--) {
        cout << " ";
      }
      for (int p = 0; p < i; p++) {
        cout << "* ";
      }
      cout << endl;
    }
  }
  for (int r = n - 1; r >= 1; r--) {
    if (r % 2 == 0) {
      continue;
    } else {
      for (int s = n; s > r; s--) {
        cout << " ";
      }
      for (int p = 0; p < r; p++) {
        cout << "* ";
      }
      cout << endl;
    }
  }
  return 0;
}