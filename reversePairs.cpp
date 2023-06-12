// this code is for leetcode
#include<bits/stdc++.h>
using namespace std;
class Solution {

public:
int cnt = 0;
    void merge(vector<int> &arr, int low, int mid, int high){
        vector<int> temp; // temporary vector
        int left = low, right = mid+1;

        // storing elements in the temporary array in a sorted manner;
        while(left <= mid && right <= high){
            if(arr[left] <= arr[right]){
                temp.push_back(arr[left]);
                left++;
            }
            else{
            temp.push_back(arr[right]);
            right++;
            }
        }
     // if elements on the left half are still left   
    while(left <= mid){
        temp.push_back(arr[left]);
        left++;

    }
    // if elements on right half are still left
    while(right <= high){
        temp.push_back(arr[right]);
        right++;

    }
    // transferring all elements from temporary to arr
    for(int i = low; i<= high; i++){
        arr[i] = temp[i -low];
    }
}
    // this countPairs function is not the part of mergeSort but to solve thw question reverse pairs
    void countPairs(vector<int> &arr, int low, int mid, int high){
        int right = mid+1;
        for(int i = low; i<= mid; i++){
            while(right <= high &&   (long long)arr[i] >   (long long)2 * arr[right]) right++; 
            cnt += (right - (mid+1));

        }
    }
    void mergeSort(vector<int> &arr, int low, int high){
        if(low >= high) return;
        int mid = (low + high) /  2;
        mergeSort(arr,low, mid);
        mergeSort(arr, mid+1, high);
        countPairs(arr, low, mid, high);
        merge(arr, low, mid, high); // merging sorted halfs
    }
    int reversePairs(vector<int>& nums) {
        int n = nums.size();
        mergeSort(nums, 0, n-1);
        return cnt;
        
    }
};
int main(){

}