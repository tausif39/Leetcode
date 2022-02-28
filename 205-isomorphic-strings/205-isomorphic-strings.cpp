class Solution {
public:
    bool isIsomorphic(string s, string t) 
    {
        unordered_map<char , int >mp;
        
        for(int i=0;i<s.size();i++)
        {
            if(mp[s[i]]==0)
            {
            mp[s[i]]=t[i];
                
            }
            
            else
            {
                if(mp[s[i]]!=t[i])return false;
            }
            
            
        }
        
        for(int j=0;j<t.size();j++)
        {
           mp[t[j]] =s[j];
            
        }
        for(int j=0;j<t.size();j++)
        {
            if(mp[t[j]]!=s[j])return false;
            
        }
        
        
        
        return true;
        
        
    }
};