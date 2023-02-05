
//leetcode contest question 

// You are given an integer array gifts denoting the number of gifts in various piles. Every second, you do the following:
// Choose the pile with the maximum number of gifts.
// If there is more than one pile with the maximum number of gifts, choose any.
// Leave behind the floor of the square root of the number of gifts in the pile. Take the rest of the gifts.
// Return the number of gifts remaining after k seconds.


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
