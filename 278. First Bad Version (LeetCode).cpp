// binary search 
  // O(1)


class Solution {
public:
    int firstBadVersion(int n) {
        
        long  int  low  = 1;
        long  int  high = n;
        long  int  res  = n;
        long  int  mid ; 
        
        
        while(low<=high)
        {
        
        mid = (low+high)/2;
        
        if(isBadVersion(mid))
        {
            res = mid;
            
            high = mid-1;
        }
        else
            low = mid+1; 
        }
        
        return res;
        
        
    }
};
