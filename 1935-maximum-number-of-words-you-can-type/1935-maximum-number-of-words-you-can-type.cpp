class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) 
    {
        unordered_map<char, int> mp;
        
        for(int i=0;i<brokenLetters.size();i++)
        {
            ++mp[brokenLetters[i]];
     
        }
        
        int ans=0;
        bool check;
        check=true;
        for(int i=0;i<text.size();i++)
        {
            
            
            if(mp[text[i]]==1)
            {
                check=false;
                
            }
            
            if(text[i]==' ' || i==text.size()-1)
            {
                if(check==true)
                {
                    ans++;
                }
                else
                {
                    check=true;
                }
                
            }
            
            
        }
        
        return ans;
        
        
        
        
    }
};