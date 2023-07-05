// 137. Single Number II
//  Medium + Hard 
 /* Given an integer array nums where every element appears three times except for one,
which appears exactly once. Find the single element and return it.
You must implement a solution with a linear runtime complexity and use only constant extra space. */

// 1 :-  stack approach 
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> count;
        stack<int> st;
        
        for (int num : nums) {
            count[num]++;
        }
        
        for (int num : nums) {
            if (count[num] == 1) {
                st.push(num);
            }
        }
        
        return st.top();
    }
};



// 2 :- map approach brute force

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> frequency;
        
        for (int num : nums) {
            frequency[num]++;
        }
        
        for (int num : nums) {
            if (frequency[num] == 1) {
                return num;
            }
        }
        
   
        return -1;
    }
};

// 3rd  Approach After watching the video 

class Solution {
public:
    int singleNumber(vector<int>& nums) {
       
       int ones = 0, twos = 0;

       for(int i=0;i<nums.size();i++)
       {
           ones = (ones ^ nums[i])& ~twos;
           twos = (twos ^ nums[i])& ~ones;
       }
       return ones;
    }
};

