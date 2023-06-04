#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size(), m = matrix[0].size();
	set<int> rows;
	set<int> col;
	for(int i = 0; i<n; i++){
		for(int j = 0; j<m; j++){
			if(matrix[i][j] == 0){
				rows.insert(i);
				col.insert(j);
			}
		}
	}
	// for rows
	for(int i = 0; i<n; i++){
		if(rows.count(i)){
			for(int j = 0; j<m; j++){
				matrix[i][j] = 0;
			}
		}
	}
	for(int j = 0; j<m; j++){
		if(col.count(j)){
			for(int i = 0; i<n; i++){
				matrix[i][j] = 0;
			}
		}
	}
        
    }
};

signed main() {

}