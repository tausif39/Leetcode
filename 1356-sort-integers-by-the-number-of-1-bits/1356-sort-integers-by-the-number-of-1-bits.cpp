class Solution {
public:
    
    static bool cmp(pair<int,int> a,pair<int,int> b)
    {
        if(a.second==b.second)
        {
           return  a.first < b.first;
            
           
        }
        
        
        return a.second<b.second;
        
        
    }
    
    vector<int> sortByBits(vector<int>& arr) 
    {
        vector<pair<int,int>> vp;
        
        for(int i:arr)
        {
            int bits=__builtin_popcount(i);
            
            vp.push_back({i,bits});
        }
        
        
        sort(vp.begin(),vp.end(),cmp);
        
        vector<int> v;
        
        for(auto it: vp)
        {
            v.push_back(it.first);
            
        }
        
        
        return v;
        
        
        
        
        
    }
};