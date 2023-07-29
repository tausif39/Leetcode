class Solution {
public:
    
    int countServers(vector<vector<int>>& grid) 
    {

        map<int ,int> rows,col;
        
        for(int i=0;i<grid.size();i++)
        {    
            
            for(int j=0;j<grid[i].size();j++)
            {
                
                if(grid[i][j]==1)
                {
                    rows[i]++;
                    col[j]++;
                }
                
            }
            
        }
        
        int result=0;
        
        
        for(int i=0;i<grid.size();i++)
        {    
            
            for(int j=0;j<grid[i].size();j++)
            {
                
                if(grid[i][j]==1 and (rows[i]>1|| col[j]>1))
                {
                    result++;
                }
                
            }
            
        }
        
        
        
        
        return result;

        
    }
};