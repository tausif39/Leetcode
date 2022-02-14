class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) 
    {
        int k=0;int ok;
        for(int i=0;i<words.size();i++)
        {
            for(int j=0;j<words[i].size();j++)
            {
                if(k==s.size() and ok==i-1 )return true;
                
                if(k==s.size() and ok!=i-1 )return false;
                
                if(s[k]==words[i][j])
                {
                    k++;ok=i;
                }
                
                else return false;
                
            }
            
        }
        
       if(k!=s.size())return false;
        
        return true;
        
    }
};