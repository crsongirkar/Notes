#include<bits/stdc++.h>
using namespace std;

bool alternate(const vector<int>&nums){
    
    for(int i = 0; i<nums.size(); i++){
        
        if(i%2==0){
            
            cout<<nums[i]<<" ";
        }
    
    }
    
    return 0;

    
}
int main(){
    vector<int> nums = {999,54,2332,8901,7661,11,6171};
    int result = alternate(nums);
    
    
    return 0;
}
