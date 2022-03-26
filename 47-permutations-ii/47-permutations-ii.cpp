class Solution {
public:
    
    void helper( vector<int>& arr, set<vector<int>> & ans, vector<int> &v , vector<int>& mp)
    { 
        if(v.size()==arr.size())
        {
            ans.insert(v);
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
        
        
        
        vector<vector<int>> s;
        
        set<vector<int>> ans;
        
        vector<int> v;
        vector<int> mp(nums.size());
        for(int i=0;i<nums.size();i++)mp[i]=0;
        
        
        helper(nums, ans, v,mp);
        
         
        
        
        for(auto se: ans)
        {
            s.push_back(se);
        }
        
        return s;
        
    }
};