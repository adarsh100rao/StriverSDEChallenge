#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        int n = numRows;
        vector<vector<int>> triangle;
        for(int i = 0; i<n; i++){
            vector<int> temp(i+1, 1);
            for(int j = 1; j<i; j++){
                temp[j] = triangle[i-1][j] + triangle[i-1][j-1];  
            }
            triangle.push_back(temp);
        }
        return triangle;
    }

        
};
int main(){
    
}