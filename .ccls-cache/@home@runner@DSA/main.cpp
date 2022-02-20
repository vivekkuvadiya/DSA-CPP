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



/*  int n;
  cout<<"Enter N Number : ";
  cin>>n;
  int i = 1;
  while(i<=n){
    int j = 1;
    while(j<=n){
        cout<<n-j+1;
      j++;
    }
    cout<<endl;
    i++;
  }
*/


/*

  int n;
  cout<<"Enter N Number : ";
  cin>>n;

  int i = 1;
  int count = 1;
  while(i<=n){
    int j = 1;
    while(j<=n){
      cout<<count<<"|";
      count++;
      j++;
    }
    cout<<endl;
    i++;
  }
  */

/*
   int n;
  cout<<"Enter N Number : ";
  cin>>n;


  int i = 1;

  while(i<=n){
    int j = 1;
    while(j<=i){
      cout<<"*";
      j++;
    }
    cout<<endl;
    i++;
  }
  */

/*

   int n;
    cout<<"Enter N Number : ";
    cin>>n;

  int row = 1;

  while(row<=n){
    int col = 1;
    while(col<=row){
      cout<<row;
      col++;
    }
    cout<<endl;
    row++;
  }
  */

  /*

  int n;
  cout<<"Enter N Number : ";
  cin>>n;

  int row = 1;
  int count = 1;

  while(row<=n){
    int col = 1;
    while(col<=row){
      cout<<count<<"|";
      count++;
      col++;
    }
    cout<<endl;
    row++;
  }

*/

/*
//H.W
 int n;
  cout<<"Enter N Number : ";
  cin>>n;

  int row = 1;
  while(row<=n){
    int col = 0;
    while(col<row){
      cout<<row+col<<"|";
      col++;
    }
    cout<<endl;
    row++;
  }
*/

/*

int n;
cout<<"Enter N Number : ";
cin>>n;
//formula = (row-col+1)
int row = 1;

while(row<=n){
  int col = 1;
  while(col<=row){
    cout<<(row-col+1);
    col++;
  }
  cout<<endl;
  row++;
}

*/

/*
// print same colum 'A' charatr
int n;
cout<<"Enter N Number : ";
cin>>n;
int row = 1;

while(row<=n){
  int col = 1;

  while(col<=n){
    char car = 'A'+row-1;
    cout<<car;
    col++;
  }
  row++;
  cout<<endl;
}

*/

/*

// print same row 'A' charatr

int n;
cout<<"Enter N Number : ";
cin>>n;
int row = 1;

while(row<=n){
  int col = 1;
  while(col<=n){
    char c = 'A'+col-1;
    cout<<c;
    col++;
  }
  cout<<endl;
  row++;
}

*/

/*

//H.W.

// print abcd n wise
int n;
cout<<"Enter N Number : ";
cin>>n;
int row = 1;
char c = 'A';

while(row<=n){
  int col = 1;
  while(col<=n){
    if(c<='Z'){
    cout<<c;
    }else{
      break;
    }
    c++;
    col++;
  }
  if(c<='Z'){
  cout<<endl;
  row++;
  }else{
    break;
  }
}

*/

/*

int n;
cout<<"Enter N Number : ";
cin>>n;
int row = 1;

while(row<=n){
  int col = 0;
  while(col<n){
    char c = 'A'-1+row+col;
    cout<<c;
    col++;
  }
  cout<<endl;
  row++;
}

*/


/*

//charater tryangualar pattern

int n;
cout<<"Enter N Number : ";
cin>>n;
int row = 1;

while(row<=n){
  int col = 1;
  while(col<=row){
    char c = 'A'+row-1;
    cout<<c;
    col++;
  }
  cout<<endl;
  row++;
}

*/

/*

//charater tryangualar pattern

int n;
cout<<"Enter N Number : ";
cin>>n;
int row = 1;
char c = 'A';

while(row<= n){
  int col = 1;
  while(col<=row){
    cout<<c;
    c++;
    col++;
  }
  cout<<endl;
  row++;
}

*/

/*
//charater tryangualar pattern

int n;
cout<<"Enter N Number : ";
cin>>n;
int row = 1;

while(row<=n){
  int col = 1;
  while(col<=row){
    char c = 'A'+col-2+row;
    cout<<c;
    col++;
  }
  row++;
  cout<<endl;
}
*/

/*

//charater tryangualar pattern
//formula =  'A'+n-row+col-1
int n;
cout<<"Enter N Number : ";
cin>>n;
int row = 1;

while(row<=n){
  int col = 1;
  while(col<=row){
    char c = 'A'+n-row+col-1;
    cout<<c;
    col++;
  }
  row++;
  cout<<endl;
}

*/


/*

//space tryangualar pattern
//formula of space =  n- row
int n;
cout<<"Enter N Number : ";
cin>>n;
int row = 1;

  while(row<=n){
    int space = n-row;
    while(space){
      cout<<" ";
      space--;
    }
    int col = 1;
    while(col<=row){
      cout<<"*";
      col++;
    }
    cout<<endl;
    row++;
  }

*/

/*
//ulta tryangualar pattern
//formula of space =  n- row
int n;

cout<<"Enter N Number : ";
cin>>n;
int row = 1;


while(row<=n){
  int col = 1;
  while(col<=n-row+1){
    cout<<"*";
    col++;
  }
  cout<<endl;
  row++;
}
*/

/*

//ulta tryangualar * pattern
//formula of space =  while(space<=row-1)
//formula of colmun = while(col<n-row+2)
int n;
cout<<"Enter N Number : ";
cin>>n;
int row = 1;

while(row<=n){
  int space = 1;
  while(space<=row-1){
    cout<<" ";
    space++;
  }
  int col = 1;
  while(col<n-row+2){
    cout<<"*";
    col++;
  }
  row++;
  cout<<endl;
}

*/

/*

//space tryangualar number pattern
//formula of space =  while(space<=row-1)
//formula of colmun = while(col<=n-row+1)
int n;
cout<<"Enter N Number : ";
cin>>n;
int row = 1;


while(row<=n){
  int space = 1;
  while(space<=row-1){
    cout<<"-";
    space++;
  }
  int col = 1;
  while(col<=n-row+1){
    cout<<row;
    col++;
  }
  row++;
  cout<<endl;
}

*/

/*

//space tryangualar number pattern
//formula of space =  while(space<=row-1)
//formula of colmun = while(col<=n-row+1)
int n;
cout<<"Enter N Number : ";
cin>>n;
int row = 1;

  while(row<=n){
    int space = n-row;
    while(space){
      cout<<"-";
      space--;
    }
    int col = 1;
    while(col<=row){
      cout<<row;
      col++;
    }
    row++;
    cout<<endl;
  }

  */

  /*

//space tryangualar number pattern
//formula of space =  while(space<=row-1)
//formula of colmun = while(col<=n-row+1)
int n;
cout<<"Enter N Number : ";
cin>>n;
int row = 1;


while(row<=n){
  int space = row-1;
  while(space){
    cout<<" ";
    space--;
  }
  int col = 1;
  while(col<=n-row+1){
    cout<<row+col-1;
    col++;
  }
  row++;
  cout<<endl;
}

*/

/*

//hard pattern

int n;
cout<<"Enter N Number : ";
cin>>n;
int row = 1;

while(row<=n){
  int space = n - row;
  while(space){
    cout<<" ";
    space--;
  }
  int col = 1;
  while(col<=row){
    cout<<col;
    col++;
  }
  int start = row-1;
  while(start){
    cout<<start;
    start--;
  }
cout<<endl;
row++;
}
*/


//H.W.
//Hard Patter

int n;
cout<<"Enter N Number : ";
cin>>n;
int row = 1;

  while(row<=n){
    int first = 1;
    while(first<=n-row+1){
      cout<<first;
      first++;
    }

    int sec = n-row-3; // 5-1-1 = 3 // 
    while(sec<row){
      cout<<"*";
      sec++;
    }

    int thr = 1;
    while(thr<=n-row+1){
      cout<<n-thr-row+2;
      thr++;
    }

    cout<<endl;
    row++;
  }
  
}