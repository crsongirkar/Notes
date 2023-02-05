
//leetcode contest question 

/*  Given an array of positive integers nums, return an array answer that consists of the digits of each integer in nums after separating them in the same order they appear in nums.

To separate the digits of an integer is to get all the digits it has in the same order.

For example, for the integer 10921, the separation of its digits is [1,0,9,2,1].*/


// simple approach to j%10 and j= j/10;
// push.back the element in tmep and store and 
// return ans;

class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        int n= nums.size();
        vector<int>ans;
        
          for(int i=0;i<nums.size();i++)
        {
            vector<int>temp; // for store thr temp variable
             int j=nums[i];
              
              while(j>0)
              {
                  temp.push_back(j%10);
                  j=j/10;
              }
              
              
               for(int i=temp.size()-1;i>=0;i--)
               {
                   ans.push_back(temp[i]);
               }
              
       }
        return ans;
        
     
        
  
    }
};
