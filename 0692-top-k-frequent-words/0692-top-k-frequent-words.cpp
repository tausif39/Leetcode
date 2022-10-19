class Solution {
public:
    
    static bool cmp(pair<string ,int> a , pair<string , int> b)
    {
        if(a.second==b.second)
        {
            return a.first < b.first;
        }
        
            return a.second >b.second;
            
    }
    
    vector<string> topKFrequent(vector<string>& words, int k) 
    {
        vector<string> ans;
        
        vector<pair<string , int>> vp;
        
        unordered_map<string, int> mp;

        // map<string, int> mp;

        
        for(string i: words)mp[i]++;
        
        for(auto it:mp)vp.push_back({it.first,it.second});
        
        
        sort(vp.begin(),vp.end(),cmp);
        
        
        
        for(auto it: vp)
        {
            ans.push_back(it.first);
            k--;
            
            if(!k)break;
            
        }
        
      
            
        
        return ans;
        
        
        
        
        
    }
};