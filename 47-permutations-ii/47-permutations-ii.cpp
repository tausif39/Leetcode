class Solution {
public:
    
    void helper( vector<int>& arr, vector<vector<int>> & ans, vector<int> &v , vector<int>& mp)
    { 
        if(v.size()==arr.size())
        {
            ans.push_back(v);return ;
        }
           
        

        
       
        
        for(int i=0;i<arr.size();i++)
        {
            
            
            if(mp[i]==0)
            {
            v.push_back(arr[i]);
            mp[i]=1;
            helper(arr, ans, v ,mp);
            mp[i]=0;
            v.pop_back();
                
            }
          
            
            
        }
        
        
    }
    
    
    vector<vector<int>> permuteUnique(vector<int>& nums) 
    {
        
        
        
        vector<vector<int>> ans;
        
        
        vector<int> v;
        vector<int> mp(nums.size());
        for(int i=0;i<nums.size();i++)mp[i]=0;
        
        
        helper(nums, ans, v,mp);
        
         ans.erase(unique(ans.begin(),ans.end()),ans.end());
        
        set<vector<int>> s(ans.begin(),ans.end());
        ans.clear();
        for(auto se: s)
        {
            ans.push_back(se);
        }
        
        return ans;
        
    }
};