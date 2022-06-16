class Solution {
public:
    

     bool dfs1(int i,int j, vector<vector<char>>& grid)
     {
        int n=grid.size();
        int m=grid[0].size();
        
        // if(dfs1(i,j,grid)==false)return false;
        
        if(i<0 || j<0)return true;
        if(i>=n || j>=m)return true;
        
        if(grid[i][j]!='O')return true;
        
        if(grid[i][j]=='O')
        {
            if(i*j==0 || i==grid.size()-1  || j==grid[0].size()-1 )return false;
            
        }
        
        grid[i][j]='C';
        
        //  dfs1(i+1,j,grid);
        // dfs1(i-1,j,grid);
        // dfs1(i,j-1,grid);
        // dfs1(i,j+1,grid);
        
        return dfs1(i+1,j,grid) and dfs1(i-1,j,grid) and dfs1(i,j-1,grid) and dfs1(i,j+1,grid);
        
     }
    
    
    void dfs2(int i,int j, vector<vector<char>>& grid)
    {
        int n=grid.size();
        int m=grid[0].size();
        
        if(i<0 || j<0)return ;
        if(i>=n || j>=m)return ;
        
        if(grid[i][j]!='C')return;
        
        grid[i][j]='X';
        
        dfs2(i+1,j,grid);
        dfs2(i-1,j,grid);
        dfs2(i,j-1,grid);
        dfs2(i,j+1,grid);
        
    }
    
   
    
    
    
    void dfs3(int i,int j, vector<vector<char>>& grid)
    {
        int n=grid.size();
        int m=grid[0].size();
        
        if(i<0 || j<0)return ;
        if(i>=n || j>=m)return ;
        
        if(grid[i][j]!='C')return;
        
        grid[i][j]='O';
        
        dfs3(i+1,j,grid);
        dfs3(i-1,j,grid);
        dfs3(i,j-1,grid);
        dfs3(i,j+1,grid);
        
    }
    
    
    
    
    void solve(vector<vector<char>>& nums) 
    {
        int cnt=0;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=0;j<nums[0].size();j++)
            {
                if(nums[i][j]=='O')
                {
                    bool flag=dfs1(i,j,nums);
                    
                    if(flag)
                    {
                        
                        dfs2(i,j,nums);

                    }
                    
                    else
                    {
                        dfs3(i,j,nums);
                        
                     }
                    
                }
                
            }
            
        }
        
        // cout<<cnt;
        
    } 
};