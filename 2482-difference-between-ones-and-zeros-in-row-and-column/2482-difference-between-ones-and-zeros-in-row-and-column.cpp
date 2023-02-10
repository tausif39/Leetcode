class Solution {
public:
    
    
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) 
    {
        vector<int> row,col;
        
        for(int i=0;i<grid.size();i++)
        {
            int sum_r=0,sum_c=0;
            for(int j=0;j<grid[0].size();j++)
            {
                sum_r+=grid[i][j];
                // sum_c+=grid[j][i];

            }
            
            row.push_back(sum_r);
            // col.push_back(sum_c);
        }
        
        
        
        for(int i=0;i<grid[0].size();i++)
        {
             int sum_c=0;
            for(int j=0;j<grid.size();j++)
            {
                // sum_r+=grid[j][i];
                sum_c+=grid[j][i];

            }
            
            // row.push_back(sum_r);
            col.push_back(sum_c);
        }
        
        
        
        
        // for(auto it:col)cout<<it<<" ";
        
        
        for(int i=0;i<grid.size();i++)
        {
            
            for(int j=0;j<grid[i].size();j++)
            {
                int zero_r=grid.size() - row[i];
                int zero_c=grid[i].size() - col[j];
                    
                int diff=row[i] + col[j] - zero_r - zero_c;
                grid[i][j]=diff;
            }
        }
        
        return grid;
        
    }
};