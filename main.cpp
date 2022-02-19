#include <iostream>
using namespace std;

int main(){

/*
  int a;
  cin>>a;
  if(a>0){
    cout<<"A is Positive"<<endl;
  }else if(a<0){
    cout<<"A is Nagitive"<<endl;
  }else{
    cout<<"A is 0"<<endl;
  }
  */

/*
  char a;
  cout<<"Enter Character : "<<endl;
  cin>>a;
  if(a >=48 && a<= 57){
    cout<<a<<" is Number"<<endl;
  }else if(a>=65 && a<=90){
    cout<<a<<" is Capital Alphabate"<<endl;
  }else if(a>=97 && a<=122){
    cout<<a<<" is Small Alphabate"<<endl;
  }
*/

/*
int n;
cout<<"Enter n number : ";
cin>>n;
int a = 0;
int sum = 0;
  while(a<n){
    a++;
    sum =sum +a;
  }

  cout<<"Sum is : "<<sum;
*/

/*
//sum formula
int input;
cout<<"Enter Number : ";
cin>>input;
int ans = (input/2)*(1+input);
cout<<"Sum is : "<<ans;
*/

// sum of even number

/*int n;
cout<<"Enter N Number : ";
cin>>n;
int sum = 0;
int i = 0;
while(i<n){
  i++;
  if(i%2==0){
    sum = sum + i;
  }
}
cout<<"Sum Of Even Number is : "<<sum;
*/

// pattern 1

/* 
int n;
cout<<"Enter N Number : ";
cin>>n;

int i= 1;

while(i<=n){
  int j = 1;
  while(j<=n){
    cout<<i;
    j++;
  }
  cout<<endl;
  i++;
}
*/

/* 

Prime Number

  int n = 100;
  int i = 2;

  while(i<n){
    int j = 2;
    while(i < j) {
        if(j%i==1){
          cout<<i<<endl;
          break;
        }
      j++;
    }
    i++;
  }

*/

  // another way to input like tab, enter backspace is a = cin.get();



  int n;
  cout<<"Enter N Number : ";
  cin>>n;
  int i = 1;
  while(i<=n){
    int j = 1;
    while(j<=n){
        cout<<j;
      j++;
    }
    cout<<endl;
    i++;
  }

  


  
}