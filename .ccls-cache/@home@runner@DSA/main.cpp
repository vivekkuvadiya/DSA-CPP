#include <iostream>
using namespace std;

int main(){


  // descimal to bynary
  
  int a;
  cout<<"Enter Number : ";
  cin>>a;

  int byteArray[32];

  int i = 0;
  while(a>0){
    byteArray[i] = a % 2;
    a = a/2;
    i++;
  }

  for(int j = (i - 1); j>=0;j--){
    cout<<byteArray[j];
  }
  
  
}