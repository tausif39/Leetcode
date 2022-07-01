class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) 
    {
        
        vector<int> v;
        
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                v.push_back(grid[i][j]);

            }
            
        }
        
        
        sort(v.begin(),v.end());
        
        int rem=v[0]%x;
        
        for(int i:v)
        {
            if(i%x!=rem)return -1;
        }
        
        
        
        
        int m = v.size();
    int ans = 0;
    int mid = abs(v[m / 2]);
        
        
        
        for(int i:v)
        {
        ans += abs(i - mid) / x;  
            
        }
        
        return ans;
        
        
        
    }
};