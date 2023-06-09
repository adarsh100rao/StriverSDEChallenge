#include <bits/stdc++.h>
using namespace std;

int findMajorityElement(int arr[], int n) {
	// Write your code here.
	sort(arr, arr+n);
	map<int, int> mp;
	for(int i = 0; i<n; i++){
		mp[arr[i]]++;
	}
        for(auto i:mp){
            if(i.second > (n)/2){
                return i.first;
            }
        }
        return -1;

}
signed  main({

})