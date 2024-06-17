#include<bits/stdc++.h>
using namespace std;

vector<int>leader(vector<int>&nums){
    
    vector<int> ans;
    int n = nums.size();
    int max = nums[n-1];
    
    ans.push_back(nums[n-1]); 
    
    for(int i = n -2;i >= 0;i--){
        if(nums[i] > max){
            ans.push_back(nums[i]);
            max = nums[i];
        }
    } 
    return ans;
    
}
int main(){
    vector<int>nums ={10, 22, 12, 3, 0, 6};
    vector<int> lead = leader(nums);
    
    for(auto i:lead){
        
        cout<<i<<" "<<endl;
    }
    
    
    cout << endl;
    return 0;
}

