class Solution {
public:
    int findLucky(vector<int>& arr) 
    {
        unordered_map<int,int> mp;
        for(int i: arr)mp[i]++;
        
        int ans=-1;
        for(auto it: mp)
        {
            if(it.first==it.second)
            {
                if(ans==-1)
                {
                    ans=it.first;
                }
                else
                {
                    if(it.first>ans)ans=it.first;
                    
                }
                
            }
        }
        
            
        return ans;
        
    }
};