class Solution {
public:
    vector<int> relocateMarbles(vector<int>& n, vector<int>& f, vector<int>& t)
    {
        
        vector<int> ans;
        
        
        
        unordered_map<int , int> mp;
        
        for (int i = 0; i <n.size(); ++i)
        { 
            mp[n[i]]++;
            
        }
        
        for (int i = 0; i<f.size(); ++i)
        {
            if(mp[f[i]]>=1)
            {
                
                mp[f[i]]=0;
                mp[t[i]]+=2;
                
        
            }
        }
        
        for(auto it:mp)
        {
            if(it.second>0)ans.push_back(it.first);
            
        }
        
        sort(ans.begin(), ans.end());
        
        return ans;
        
            
            
        
    }
};