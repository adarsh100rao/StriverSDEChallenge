#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int, int> mp;
        set<int> st;
        for(int i = 0; i<n; i++){
            int need = target - nums[i];
            if(mp.find(need) != mp.end()){
                st.insert(i);
                st.insert(mp[need]);

            }
            mp[nums[i]] = i;
        }
        vector<int> ans;
        for(int i:st){
            ans.push_back(i);
        }
        return ans;

        
    }
};
int main(){
    
}