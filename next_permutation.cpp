#include <bits/stdc++.h> 
using namespace std;
vector<int> nextPermutation(vector<int> &permutation, int n)
{
    //  Write your code here.
    int check = -1;
    for(int i = n-2; i>= 0; i--){
        if(permutation[i] < permutation[i+1]){
            check = i;
            break;
        }
    }
    if(check == -1){
        reverse(permutation.begin(), permutation.end());
        return permutation;
    }
    for(int i = n-1; i>check; i--){
        if(permutation[i] > permutation[check]){
            swap(permutation[i], permutation[check]);
            break;
        }
    }
    reverse(permutation.begin() + check+1, permutation.end());
    return permutation;
}