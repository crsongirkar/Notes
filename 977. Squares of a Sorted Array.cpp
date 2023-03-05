
// easy question
// easy but tricky question use two pointer approach to slove this question quit mid level question but not
// O(N) T.C
// O(N) S.C

class Solution {
public:
        vector<int> sortedSquares(vector<int>& nums) {
            int n = nums.size();
            vector<int> res(n);
            int pos = n-1;
            int start = 0;
            int end = nums.size()-1;

            while(start <= end)
            {

                 if(abs(nums[start]) > abs(nums[end]))
                 {
                     res[pos--] = nums[start] * nums[start];
                     start++;
                 }
                 else{
                     res[pos--] = nums[end] * nums[end];
 
                     end--;
                 }

            }
           return res;

    }
};


