class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& nums, int m, int n) 
    {
        vector<vector<int>> ans(m,vector<int>(n));
        
        int size=nums.size();
        
        if(size!=m*n)
        {
            return {};
        }
        
        int k=0;
        
        for(int i=0;i<ans.size();i++)
        {
            for(int j=0;j<ans[i].size();j++)
            {
                ans[i][j]=nums[k++];
            }
            
        }
        
        
        return ans;
        
        
        
    }
};