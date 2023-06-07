#include <bits/stdc++.h> 
using namespace std;
/*

    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval

*/

vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
    // Write your code here.
    int n = intervals.size();
        vector<vector<int>> ans;
        sort(intervals.begin(), intervals.end());
        vector<int> temp;
        temp.push_back(intervals[0][0]);
        int mini =  temp[0];
        int maxi = intervals[0][1];
        for(int i = 1; i<n; i++){
            if(intervals[i][0] <= maxi){
                maxi = max(maxi, intervals[i][1]);

            }
            else{
                temp.push_back(maxi);
                ans.push_back(temp);
                temp.clear();
                mini = intervals[i][0];
                temp.push_back(mini);
                maxi = intervals[i][1];
            }

        }
        temp.push_back(maxi);
        ans.push_back(temp);
        
        return ans;
}
int main(){
    
}
