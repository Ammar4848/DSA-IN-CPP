#include <iostream>
using namespace std;
int main() {
  int items, price, total, dprice;
  cout << "Enter the number of items: ";
  cin >> items;
  cout << "Enter the price of an item: ";
  cin >> price;
  total = items * price;
  cout << "Your Total Price is: " << total << endl;
  if (total >= 1000) {
    cout << "You are eligible for 10% discount" << endl;
    dprice = total - (total * 0.1);
    cout << "So your Discounted Price is: " << dprice << endl;
  } else {
    cout << "You are not eligible for discount" << endl;
    cout << "So your Total Price is: " << total << endl;
  }
  return 0;
}