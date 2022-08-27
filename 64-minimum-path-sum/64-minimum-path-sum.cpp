class Solution {
public:
    
    int paths(int m, int n, int i, int j , vector<vector<int>> &dp , vector<vector<int>>& grid)
    {
        
        if(i==(m -1) and j==(n-1))return grid[i][j];
        
        if(i>=m || j>=n)    return INT_MAX;
        
        
        if(dp[i][j]!=-1)return dp[i][j];
        
        // int down, right;
        
        int long long down =(int long long)grid[i][j]+paths(m,n,i+1,j, dp, grid);  // down
        int long long right =(int long long)grid[i][j]+paths(m,n,i,j+1, dp, grid);  //right
        
        
        
        return  dp[i][j]=min(down ,right);
        
    }
    
    
    int minPathSum(vector<vector<int>>& grid) 
    {
        int m=grid.size();
        int n=grid[0].size();
         
        vector<vector<int>> dp(m,vector<int>(n, -1));
        
        return paths(m,n,0,0 ,dp, grid);
        
        
    }
};