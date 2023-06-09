// problem are easy but tricky 
// https://leetcode.com/problems/count-negative-numbers-in-a-sorted-matrix/
class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
          
        int count =0;
        int n = grid.size();
        int m = grid[0].size();
        int row = n-1;
        int col = 0;

   while(row >= 0 && col < m )  // m is 0 initialize grid and start form 0
   { 

       if(grid[row][col] < 0) // column size is less zero 
       { 
           --row; // row will Decrease 
           count += m-col; // count to the negative element in count 
           // variable the m size () - number of negative element 
     // else condition is false we can move on the else condtion we can increase the col 
       }
       else{
          ++col;
       }

}

return count; // return the count 

    }
};
