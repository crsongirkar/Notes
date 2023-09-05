class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
       
        int n = grid.size();
    int m = grid[0].size();
    int ans = 0;
    int temp; 
        vector<vector<int>> dp(n,vector<int>(m,0));
        
           dp[0][0]=grid[0][0]; // equal grid
           
        for(int i=1;i<m;i++) {
            dp[0][i]=dp[0][i-1]+grid[0][i]; // move right 
        }
        for(int i=1;i<n;i++) {
            dp[i][0]=dp[i-1][0]+grid[i][0]; // move down 
        }
        
          for(int i =1;i<n;i++)
          for(int j = 1;j<m;j++){
           dp[i][j]=min(dp[i-1][j],dp[i][j-1])+grid[i][j]; // addition 

        }
       
     return dp[n-1][m-1];
    }
};
