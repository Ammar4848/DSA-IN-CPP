#include<iostream>
using namespace std;
int main(){
  for(int i=1;i<=7;i++){
    if(i%2==0){
      cout<<" ";
    }
    else{
      for(int j=1;j<=6;j++){
        if(j==1 || j==6){
          cout<<"*";
        }
        else if(i==1 || i==7){
          for(j=2;j<=6;j++){
            cout<<"*";
          }
        }
        else{
          cout<<" ";
        }
      }
    }
    cout << endl;
  }
  return 0;
}