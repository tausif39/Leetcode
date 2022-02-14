class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) 
    {
        
        string ans;
        
        for(int i=0;i<words.size();i++)
        {
            ans+=words[i];
            
            if(ans.size()>s.size())return false;
            if(ans.size()==s.size())break;
        }
        
        
        
        return ans==s;
        
        
    }
};