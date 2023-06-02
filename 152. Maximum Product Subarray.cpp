// leetcode & GFG 
// brute force optimal 
class Solution {
public:
    int maxProduct(vector<int>& nums) {
            int pre  = 0;
            int suff = 0;
            int count = 0;
            int ans = INT_MIN;
            int n = nums.size();

            for(int i=0;i<n;i++)
            {

            if(pre ==  0) pre  = 1;
            if(suff == 0) suff = 1;
            
            pre = pre * nums[i];
            suff = suff * nums[n-i-1];

            ans = max(ans, max(suff,pre));
            }

            return ans;
    
    }
};

// vs code 
// brute force 

#include<bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>&nums)
{
    long long ans = INT_MIN;
   

    for(int i =0;i<nums.size()-1;i++)
    {
        for(int j= i+1;j<nums.size();j++)
        {
             long long product = 1;
            for(int k=i;k<=j;k++) 
                  
                  product *= nums[k];

                  ans = max(ans,product);
        }
    }
    return ans;

}
int main()
{ 
    vector<int> nums = {8,6,-1,2,5};
  cout<<"The Profit are the  :- "<<maxProfit(nums);

  return 0;

}
