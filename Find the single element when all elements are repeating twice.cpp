#include<bits/stdc++.h>
using namespace std;

int solve(vector<int>nums){
    int result = 0;
    
    for(auto i:nums){
         result ^= i;
    }
    return result;
}
int main(){
     vector<int> nums = {2, 3, 5, 4, 5, 3, 4};
     cout<<" ans " <<solve(nums);
     return 0;
}
