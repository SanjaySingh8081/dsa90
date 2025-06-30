#include<iostream>
#include <climits>

using namespace std;

int main(){
  int arr[7] = {0,2,4,6,7,8,9};
  int n= sizeof(arr)/sizeof(arr[0]);Ē

  int min = INT_MAX;

  for(int i = 0;i<n;i++){
    if(arr[i]<min){
      min = arr[i];
    }
  }

  cout<<"minimum number is : "<<min<<endl;
  return 0;
}