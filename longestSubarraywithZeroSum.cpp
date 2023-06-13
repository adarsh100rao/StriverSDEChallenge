#include <bits/stdc++.h>
using namespace std;


int LongestSubsetWithZeroSum(vector < int > arr) {

  // Write your code here
  int n = arr.size();
  int mx = 0;
  for(int i = 0; i<n-1; i++){
    int curr = 1;
    int sum = arr[i];
    for(int j =i+1; j<n; j++){
      sum += arr[j];
      curr++;
      if(sum == 0){
        mx = max(mx, curr);

      }


    }
  }
  if(mx == 0){
    int zcnt = count(arr.begin(), arr.end(), 0);
    if(zcnt){
      return 1;
    }
  }
  return mx;

}
int main(){
    
}