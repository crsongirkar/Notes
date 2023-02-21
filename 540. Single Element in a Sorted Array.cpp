class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
     
int n = nums.size();
    sort(nums.begin(),nums.end());
    int slow =0;
    int fast = nums.size()-1;
    int mid= 0;

while(slow < fast)
{
    mid = (slow + fast)/2;
 if((mid % 2 == 0 && nums[mid] == nums[mid + 1]) || (mid % 2 == 1 && nums  [mid] == nums[mid - 1]))
        slow = mid + 1;

        else
            fast = mid;
            
}

   return nums[slow];
        
    }
};



// Tags :- Binary Search , Array 
// Easy question
