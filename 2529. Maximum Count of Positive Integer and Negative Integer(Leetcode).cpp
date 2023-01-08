class Solution {
public:
    int maximumCount(vector<int>& nums) {
        
        int n= nums.size();
        
        sort(nums.begin(),nums.end());
        int count =0;
        int count_neg=0;


        for(int i=0;i<n;i++)
        {
                  if(nums[i]<0)
                count_neg++;

                  else if(nums[i]>0)
               count++;
        }
     
     return max(count,count_neg);
        
        
    }
};

//T.C (O(n))
//S.C (O(1))
