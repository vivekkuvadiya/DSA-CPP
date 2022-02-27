#include <iostream>
using namespace std;

bool isPresent(int arr[], int size, int key){
  for(int i= 0; i<size;i++){
    if(arr[i]==key){
      return 1;
    }
  }
  return 0;
}

  void reverceArray(int arr[],int size){
    
    int start = 0;
    int end = size-1;
    
    while(start<=end){

      swap(arr[start],arr[end]);
  
      start++;
      end--;
    }

    
    
  }

int* swaping(int a, int b){
  int arr[2];
  a= a+b;
  b = a - b;
  a = a - b;
  arr[0] = a;
  arr[1] = b;
  return arr;
}

void swapAlternates(int arr[], int size){

  for(int i = 0; i<size; i+=2){
    arr[i] += arr[i+1];
    arr[i+1] = arr[i] - arr[i+1];
    arr[i] -=  arr[i+1];
  }
  
}

void printArray(int arr[], int size){

  for(int i = 0; i<size; i++){
    cout<<arr[i]<<" ";
  }

  cout<<endl;
  
}

int main(){

  // int arr[10] = {8,9,2,7,9,1,1,7,8,9};
  // cout<<"Enter Key : ";
  // int key;
  // cin>>key;

  // bool isPresen = isPresent(arr,10,key);
  
  // if(isPresen){
  //   cout<<key<<" is present";
  // }else{
  //   cout<<key<<" is not present";
  // }


  int arr1[5] = {1,2,3,4,5};
  int arr2[6] = {1,2,3,4,5,6};

  swapAlternates(arr1,5);
  swapAlternates(arr2,6);

  printArray(arr1,5);
  printArray(arr2,6);
  
}

