#include <iostream>
#include <vector>
using namespace std;

bool isValid(vector<int> &arr, int n, int m, int maxAllowedPages)
{
  int stu = 1;
  int pages = 0;


  for(int i = 0;i<n;i++){
    if(arr[i]>maxAllowedPages){
      return false;
    }

    if(pages+arr[i]<=maxAllowedPages){
      pages += arr[i];
    }
    else{
      stu++;
      pages = arr[i];
    }
  }
  return stu<=m;
}

int allocateBooks(vector<int> &arr, int n, int m)
{
int ans = -1;
int sum = 0;
for(int i = 0;i<n;i++){
  sum += arr[i];
}
int st = 0;
int end = sum;
  if(m>n){
    return -1;
  }
while (st<=end){
  

  int mid = st+(end-st)/2;


  if(isValid(arr,n,m,mid)){
    ans = mid;
    end = mid-1;
  }
  else{
    st = mid+1;
  }
}
return ans;
}

int main()
{
  vector<int> arr = {12, 34, 67, 90};
  int n = arr.size();
  int m = 2;
  cout << allocateBooks(arr, n, m) << endl; // Expected output: 113
  return 0;
}
