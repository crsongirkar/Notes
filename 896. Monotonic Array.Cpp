// https://leetcode.com/problems/monotonic-array/description/?envType=study-plan-v2&id=programming-skills
class Solution {
public:
    bool isMonotonic(vector<int>& nums) {

        int n = nums.size();

        int store =0;

        if(nums.size()==0)
             return true;
        int i;

        for(i=0;i<n-1;i++)
        {
            if(nums[i]<=nums[i+1])
            
            continue;
            
            else
                break;
        }
         if(i==n-1)
         return true;

         for(i=0;i<n-1;i++)
         {
             if(nums[i+1]<=nums[i])
             
                 continue;
             
             else 
                 break;
         }
         if(i==n-1)
         return true;

         return false;
        
    }
};
