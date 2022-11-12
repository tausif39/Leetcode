class Solution {
public:
    
    static bool cmp(pair<int , int> a  , pair<int , int> b)
    {
        
        return a.second<b.second;
        
    }
    
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) 
    {
        
        unordered_map<int , int> mp;
        
        
        for(auto it:arr)
        {
            ++mp[it];
        }
        
        
        vector<pair<int , int>> vp;
        
        
        for(auto it:mp)
        {
            vp.push_back({it.first , it.second});        
        }
        
        
        sort(vp.begin() , vp.end() , cmp);
        
        
        int cnt=0;
        
        
        for(auto it:vp)
        {
            if(k>=it.second)
            {
                k-=it.second;
            }
            
            else
            {
                cnt++;
            }
        }
        
        return cnt;
        
        
    }
};