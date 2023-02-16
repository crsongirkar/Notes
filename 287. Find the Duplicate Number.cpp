// Tag :- Two Pointer
// Medium level

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
             
     int n = nums.size();
     sort(nums.begin(),nums.end());
    int ans=0;
    int count;

    for(int i=0;i<nums.size()-1;i++)
    {
        if(nums[i]==nums[i+1])
        {
            ans = nums[i+1];
        } 
    }
    return ans;   
  
    }
};
