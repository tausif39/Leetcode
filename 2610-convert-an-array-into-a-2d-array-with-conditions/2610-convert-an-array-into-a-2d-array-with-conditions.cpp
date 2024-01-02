class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums)
    {
        map<int, int> mp;
        
        for(auto it:nums)
        {
            ++mp[it];
        }
        

        vector<vector<int>> ans;
        
        int cnt=0;
        
        unordered_set<int >s;
        
        for(auto it:nums)
        {
            s.insert(it);
        }
        
        
        bool flag=true;
        
        while(flag)
        {
            
            vector<int> level;
            
            for(auto it: s)
            {
                
                if(mp[it]>0)
                {
                    level.push_back(it);
                    mp[it]--;
                }
  
            }
                
            
            bool can=false;
            
            for(auto it:mp)
            {
                if(it.second>0)
                {
                    can=true;
                }
            }
            
            flag=can;
            
            ans.push_back(level);
        }
        
        
        // int cnt=0;
        
        return ans;
        

    }
};