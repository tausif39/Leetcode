class Solution {
public:
    
    
    void dfs(int i,int j, vector<vector<int>>& grid , int &r1,int &c1,int &r2,int &c2 , int mini,int maxi)
    {
        int n=grid.size();
        int m=grid[0].size();
        
        if(i<0 || j<0)return ;
        
        if(i>=n || j>=m)return ;
        
        if(grid[i][j]!=1)return;
        
        
        int sum=i+j;
        
        if(mini>sum)
        {
            mini=sum;
            r1=i;c1=j;
        }
        
        if(maxi<sum)
        {
            maxi=sum;
            r2=i;c2=j;
        }
        
        grid[i][j]=0;
        
        dfs(i+1,j,grid , r1 ,c1 ,r2 ,c2,  mini ,maxi);
        dfs(i-1,j,grid , r1 ,c1 ,r2 ,c2 , mini ,maxi);
        dfs(i,j-1,grid , r1 ,c1 ,r2 ,c2,  mini ,maxi);
        dfs(i,j+1,grid , r1 ,c1 ,r2 ,c2 , mini ,maxi);
        
    }
    
    vector<vector<int>> findFarmland(vector<vector<int>>& grid) 
    {
        
        vector<vector<int>> ans;
        
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                
                if(grid[i][j]==1)
                {             
                    int r1=i,c1=j,r2=i,c2=j, mini=0 , maxi=0;
                    dfs(i,j,grid,r1,c1,r2,c2 , mini  ,maxi);
                    
                    ans.push_back({r1,c1,r2,c2});
                }
                
            }
            
        }
        
        return ans;
        
    }
};