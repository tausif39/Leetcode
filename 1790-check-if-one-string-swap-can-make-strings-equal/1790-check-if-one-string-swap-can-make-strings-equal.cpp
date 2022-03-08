class Solution {
public:
    bool areAlmostEqual(string s1, string s2) 
    {
        
        if(s1==s2)return true;
        
        unordered_map<char,int> mp;
        
        for(auto s:s1)mp[s]++;
        
        for(auto s:s2)mp[s]--;
        
        // bool can=true;
        
        for(auto m:mp)
        {
            if(m.second!=0)return false;
        }
        
        int diff=0;
        for(int i=0;i<s1.size();i++)
        {
            if(s1[i]!=s2[i])diff++;
            
        }
        
        if(diff==2 || diff==0)return true;
        
        return false;
        
    }
};