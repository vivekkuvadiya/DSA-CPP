#include <iostream>
using namespace std;

int main(){


/*
  //fibonacci

  int n;
  cout<<"Enter N Number : ";
  cin>>n;

  int a = 0;
  int b = 1;

  for(int i = 1; i<=n;i++){
    int nextSum = a + b;
    cout<<nextSum<<endl;
    a = b;
    b = nextSum;
  }

*/

//prime number

int a;
cout<<"Enter number : ";
cin>>a;

  bool isPrime = true;

  for(int i = 2; i<=(a-1); i++){
    if(a%i==0){
      isPrime = false;
      break;
    }
  }
  if(isPrime){
    cout<<a<<" is Prime Number";
  }else {
    cout<<a<<" is not Prime Number";
  }
  
}