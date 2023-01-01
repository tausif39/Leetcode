class Solution {
public:
    
    int minGroups(vector<vector<int>>& intervals) 
    {
        
        map<int , int > mp;
        
        
        for(auto &it:intervals)
        {
            mp[it[0]]++;
            mp[it[1]+1]--;
        }
        
        int sum=0,ans=1;
        
        for(auto it:mp)
        {
            sum+=it.second;
            
            ans=max(ans,sum);
        }
        
        return ans;
        
    }
};