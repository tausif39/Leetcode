class Solution {
public:
    int countGoodSubstrings(string s) 
    {
        
        
        if(s.size()==1 || s.size()==2) return 0;
        
        int cnt=0;
        
        for(int i=0;i<s.size()-2;i++)
        {
            unordered_map<char , int > mp;
            ++mp[s[i]];
            
            ++mp[s[i+1]];
            ++mp[s[i+2]];
            
            if(mp[s[i]]==1 and mp[s[i+1]]==1 and mp[s[i+2]]==1)
            {
                cnt++;
            }
            
            
        }
        
        return cnt;
        
    }
};