class Solution {
public:

    
    
    static bool cmp(pair<int,int> a, pair <int,int> b)
    {
        // if(a.second>b.second)return a.second<;
        if(a.second==b.second)return a.first>b.first;
        
        return a.second<b.second;
        
        
        
    }   
    
    vector<int> frequencySort(vector<int>& nums) 
    {
        
    
        unordered_map <int , int > mp;
        
        for(auto f : nums)++mp[f];
            
     
        vector<pair<int,int>> vp(mp.begin(),mp.end());
        
        
        sort(vp.begin(),vp.end(),cmp);
        
        
        
        vector<int> ans;
        
        for(auto it: vp)
        {
            // cout<<it.second<<" "<<it.first<<endl
            
            while(it.second--)
            {
                ans.push_back(it.first);
            }
        }
        
        
        return ans;
    }
};