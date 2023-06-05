#include <bits/stdc++.h>
using namespace std;

long long maxSubarraySum(int arr[], int n)
{
    long long sum = 0;
    long long curr = 0;
    for(int i = 0; i<n; i++){
        curr = max(curr + arr[i], arr[i] * 1ll);
        sum = max(sum , curr);
    }
    return sum;
}

int main(){
    
}