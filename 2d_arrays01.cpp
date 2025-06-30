#include <bits/stdc++.h>

#include<iostream>
#include <utility>
using namespace std;

int main(){
  int matrix[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
   pair<int, int> p;


  int rows = sizeof(matrix)/sizeof(matrix[0]);
  int cols = sizeof(matrix[0])/sizeof(matrix[0][0]);
// maximum row sum 

int maxSum = INT_MIN;

for(int i = 0;i<rows;i++){
  int curr_sum = 0;

  for(int j = 0;j<cols;j++){
    curr_sum += matrix[i][j];

  }

  maxSum = max(curr_sum,maxSum);

}
  cout<<"maximum row sum is : "<<maxSum<<endl;
return 0;
}t \+
