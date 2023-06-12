#include <bits/stdc++.h>
using namespace std;

vector<int> majorityElementII(vector<int> &a)
{
    // Write your code here.
     int n = a.size();
        sort(a.begin(), a.end());
        int freq = n/3;
        vector<int> ans;
        int cnt = 1;
        int element = a[0];
        bool last = 0;
        for(int i = 0;i<n-1; i++){
            if(a[i] == a[i+1]){
                cnt++;
                element = a[i];
                last = 1;

            }
            else{
                if(cnt > freq){
                    ans.push_back(element);
                }
                cnt = 1;
                last = 0;
            }
        }
        if(last){
            if(cnt > freq){
                ans.push_back(element);
            }
        }
        if(freq == 0 && last == 0){
            ans.push_back(a[n-1]);
        }
        return ans;

}
int main(){
    
}