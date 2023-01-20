class Solution {
public:
    
    void help(int indx, vector<int> nums, set<vector<int>> &ans,vector<int> v)
    {
        
        if(indx>=nums.size())
        {
            
            if(v.size()>1)
            {
                ans.insert(v);
            }
            
            v.clear();
            
            return  ;
            
        }
        
        if(v.size()==0 || v[v.size()-1]<=nums[indx])
        {
            
             v.push_back(nums[indx]);
            
        }
        
        
        help(indx + 1,nums,ans, v);
        
        v.pop_back();
            
        help(indx + 1,nums,ans, v);
            
    } 
    
    vector<vector<int>> findSubsequences(vector<int>& nums)
    {
        
        vector<int> v;
        
        set<vector<int>> ans;
        
        help(0,nums,ans,v);
        
        
        vector<vector<int>> res(ans.begin(), ans.end());
        
//         for(auto it:ans)
//         {
            
//         }
        
       
        
        return res;
    }
};