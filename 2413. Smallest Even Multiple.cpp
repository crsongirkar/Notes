class Solution {
public:
    int smallestEvenMultiple(int n) {
       
       int ans =0;
       int count=0;
      for(int i=0;i<n;i++)
      {
          if(n%2!=0)
          {

            return n*2; 
         
          }
          else {
              return n;

          }
      }
        return 0;
       
        
    }
};
