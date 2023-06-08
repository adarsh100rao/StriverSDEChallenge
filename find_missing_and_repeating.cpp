#include <bits/stdc++.h>
using namespace std;

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	// Write your code here 
	long long sum1 = 0,sum2 = 0,sum3 = 0,sum4 = 0;
	// sum1 = sum from 1 to n
	// sum2 = sum of squares from 1 to n
	// sum3 = sum of array elements;
	// sum4 = sum of squares of array elements;
	sum1 = ((n)*(n+1))/2;
	sum2 = ((n)*(n+1)*(2*n + 1)) / 6;
	for(int i = 0; i<n; i++){
		sum3 += (long long)arr[i];
		sum4 += (long long)arr[i] * (long long)arr[i];
	}
	long long val1 = sum3 - sum1;
	long long val2 = sum4 - sum2;
	val2 = val2 / val1;
	long long x = (val1 + val2)/2;
	// aa = repeting number
	long long y = x - val1;
	return {(int)y, (int)x};
	
}
int main(){
    
}
