class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) 
    {
        int n=grid.size();
        
        vector<int> v,h;
        
        for(int i=0;i<n;i++)
        {
            int maxi=-1;
            
            for(int j=0;j<n;j++)
            {
                maxi=max(maxi,grid[j][i]);
            }
            
            v.push_back(maxi);
            
        }
        
        
        
         for(int i=0;i<n;i++)
         {
            int maxi=-1;
            
            for(int j=0;j<n;j++)
            {
                maxi=max(maxi,grid[i][j]);
            }
            
            h.push_back(maxi);
            
         }
        
        // for(auto it:h)cout<<it<<" ";
        
        int sum=0;
        
        for(int i=0;i<n;i++)
         {
            
            for(int j=0;j<n;j++)
            {
                sum+=min(v[j],h[i]);
                sum-=grid[i][j];
            }
            
                    
         }
        
        
        
        return sum;
        
    }
};