#include <bits/stdc++.h>
using namespace std;

int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    // Write your code here.
    unordered_set<int> st;
    for(int i:arr){
        st.insert(i);
    }
    if(n == 0) return 0;
    int maxi = 1;
    for(int i:st){
        if(st.find(i-1) == st.end()){
            int curr = i;
            int cnt = 1;
            while(st.find(curr + 1) != st.end()){
                curr++;
                cnt++;
                
            }
            maxi = max(maxi, cnt);
        }
    }
    return maxi;
}
int main(){
    
}