// 

#include<bits/stdc++.h>
using namespace std;

int main()
{   
       vector<int> nums; 
       int n= nums.size();
        int target;
        int start = 0;
        int end = n-1;
        
       
        
       while(start <= end)
       {
           
            
           int mid = start + (end - start) / 2;
           
           if(nums[mid] == target){
               return mid;
               
           }
           else if(nums[mid] < target){
               
               start = mid+1;
           }
           else{
               end = mid -1;
           }
           
       }
        cout<< n;
        
    }
  
//*********************************************************************************************************************//

// LeetCode 

class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        int n = nums.size();
        
        int start = 0;
        int end = n-1;
        
       
        
       while(start <= end)
       {
           
            
           int mid = start + (end - start) / 2;
           
           if(nums[mid] == target){
               return mid;
               
           }
           else if(nums[mid] < target){
               
               start = mid+1;
           }
           else{
               end = mid -1;
           }
       }
        return -1;
        
    }
};
