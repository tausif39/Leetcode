class Solution {
public:
    
    // int babu
    
    
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) 
    {
        
      
        while(k--)
        {
            
        int j=grid[0].size()-1;
            while(j>0)
        {
            
            for(int i=0;i<=grid.size()-1;i++)
            {
                swap(grid[i][j],grid[i][j-1]);


            }
            
            j--;
            
        }
        
        
        
        for(int i=grid.size()-1;i>0;i--)
        {
            swap(grid[i][0],grid[i-1][0]);
        }
            
            
            
        }
        
        
        
        return grid;        
        
    }
};