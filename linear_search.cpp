#include<iostream>
using namespace std;

int main(){
  int arr[] = {1,2,3,4,5,6,7,8,9};
  int key = 10;
  int n = sizeof(arr)/sizeof(arr[0]);
  int result = false;

  for(int i = 0;i<n;i++){
    if(arr[i] == key){
      result = true;
      break;
    }
  }

  if(result){
    cout<<"key is present in the array ";
  }
  else{
    cout<<"key is not present in the array";
  }
  return 0;
}