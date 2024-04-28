#include<iostream>
using namespace std;
int main(){
  int percentage;
  cout << "Enter your percentage: ";
  cin >> percentage;
  if(percentage < 25){
    cout << "Your percentage are: " << percentage << endl;
    cout << "Your Grade is: F" << endl;
  }
  else if(percentage >= 25 && percentage < 45){
    cout << "Your percentage are: " << percentage << endl;
    cout << "Your Grade is: E" << endl;
  }
  else if(percentage >= 45 && percentage < 50){
    cout << "Your percentage are: " << percentage << endl;
    cout << "Your Grade is: D" << endl;
  }
  else if(percentage >= 50 && percentage < 60){
    cout << "Your percentage are: " << percentage << endl;
    cout << "Your Grade is: C" << endl;
  }
  else if(percentage >= 60 && percentage < 80){
    cout << "Your percentage are: " << percentage << endl;
    cout << "Your Grade is: B" << endl;
  }
  else{
    cout << "Your percentage are: " << percentage << endl;
    cout << "Your Grade is: A" << endl;
  }
  return 0;
}