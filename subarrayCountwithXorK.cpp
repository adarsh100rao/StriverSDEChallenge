#include <bits/stdc++.h>
using namespace std;


int subarraysXor(vector<int> &arr, int x)
{
    //    Write your code here.
    int n = arr.size();
    map<int, int> mp;
    mp[0] = 1;
    int prexor = 0;
    int cnt = 0;
    for(int i = 0; i<n; i++){
        prexor = prexor ^ arr[i];
        int need = x ^ prexor;
        cnt += mp[need];
        mp[prexor] += 1;
    }
    return cnt;
}

int main(){
    
}