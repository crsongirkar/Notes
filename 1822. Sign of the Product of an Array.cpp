// https://leetcode.com/problems/sign-of-the-product-of-an-array/description/?envType=study-plan-v2&id=programming-skills

// 1st 
class Solution {
public:
int arraySign(vector<int>& nums) {
  
  int count = 1;
 // int sum = 0;
 // int x;

  // for(int num=0;num<nums.size();num++)
  for(auto num : nums)
  {
    // sum*=nums[num];
       
          if (num == 0) {
                return 0;
            }
            if (num < 0) {
                count = -1 * count;
            }
  
     
  }
     return count;
    }
};

//2nd

class Solution {
public:
    int arraySign(vector<int>& nums) {
        int product=1;
        for (int x:nums) {
            if (x<0) product*=-1;
            else if (x>0) product*=1;
            else return 0;
        }
        return product;
    }
};
