#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size(), m = matrix[0].size();
        auto decode = [&](int x){
            return pair<int, int> {x/m, x%m};

        };
        int lo = 0, hi = n*m-1;
        while(hi - lo >= 0){
            int mid = lo + (hi - lo)/2;
            auto [x, y] = decode(mid);
            if(matrix[x][y] == target) return true;
            if(matrix[x][y] > target){
                hi =mid  -1;

            }
            else{
                lo = mid + 1;
            }
        }
        return false;

        
    }
};
int main(){
    
}