// Basic Problem 
// Find the  Total Number of Positive and Negative Element in array 
// InterView Bit 
// https://www.interviewbit.com/problems/positive-negative/

vector<int> Solution::solve(vector<int> &A) {
    
int count1 =0 , count2 =0;
     
     for(auto &i :A)
     {
         if(i > 0 )
         
             count1++;
         
        else if(i < 0)
         
            count2++; 
         
     }
     
     return{count1,count2};
         
}
