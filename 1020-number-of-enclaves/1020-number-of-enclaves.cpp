class Solution {
public:
    
    void dfs(int i,int j, vector<vector<int>>& grid)
    {
        int n=grid.size();
        int m=grid[0].size();
        
        if(i<0 || j<0)return ;
        if(i>=n || j>=m)return ;
        
        if(grid[i][j]!=1)return;
        
        grid[i][j]=0;
        
        dfs(i+1,j,grid);
        dfs(i-1,j,grid);
        dfs(i,j-1,grid);
        dfs(i,j+1,grid);
        
    }
    
    
    
    int numEnclaves(vector<vector<int>>& nums) 
    {
         for(int i=0;i<nums.size();i++)
         {
            for(int j=0;j<nums[0].size();j++)
            {
                if(i*j==0 || i==nums.size()-1  || j==nums[0].size()-1 )dfs(i,j,nums);
            }
         }
        
        int cnt=0;
        
        for(int i=0;i<nums.size();i++)
         {
            for(int j=0;j<nums[0].size();j++)
            {
                if(nums[i][j]==1)cnt++;
            }
         }
         
        
        return cnt;
        
        
        
        
    }
};