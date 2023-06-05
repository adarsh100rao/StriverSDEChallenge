#include <bits/stdc++.h> 
using namespace std;
int maximumProfit(vector<int> &prices){
    // Write your code here.
    int n = prices.size();
        if(n == 1) return 0;
        int mini = prices[0];
        int profit = 0;
        for(int i = 0; i<n; i++){
            if(prices[i] < mini){
                mini = prices[i];

            }
            else{
                profit = max(profit, prices[i] - mini);

            }
        }
    return profit;
}
int main(){
    
}
