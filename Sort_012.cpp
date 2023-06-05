#include <bits/stdc++.h> 
using namespace std;
void sort012(vector<int> &nums, int n)
{
   //   Write your code here
   //int n = nums.size();
        int zero = 0, one = 0, two = 0;
        for(int i = 0; i<n; i++){
            if(nums[i] == 0){
                zero++;
            }
            else if(nums[i] == 1){
                one++;
            }
            else{
                two++;
            }
        }
        for(int i = 0; i<n; i++){
            if(zero){
                zero--;
                nums[i] = 0;
            }
            else if(one){
                one--;
                nums[i] = 1;
            }
            else{
                two--;
                nums[i] = 2;
            }
        }
        
    
}
int main(){

}