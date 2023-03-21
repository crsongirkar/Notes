 #LeetCode

 class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        
        long long count =0;
        long long find = 0;
        // base case
        if(nums[0] == 0)
        count++;
        else
        count=0;

       for(int i=1;i<nums.size();i++)
        {
            // check the single and count all zeros 
            if(nums[i] == 0)  
            
                count++;
            
            // else{
            //     nums[i+1]; // this condition check the next element 


          // check the subarrays zeros and count the sub array two paris 
            if(nums[i] && nums[i-1] ==0)
            {
                find = find+((count+1)* count/2);
                count=0;
            }

            }
        find = find+(count+1)*count/2;
        return find;
    
     }
       
    
};
