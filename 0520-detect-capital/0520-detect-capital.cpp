class Solution {
public:
    bool all(string word)
    {
        for(int i=0;i<word.size();i++)
        {
            if(word[i]>='a' and word[i]<='z')
            {
                return false;
            }
            
        }
        
        return true;
    }
    
    bool small(string word)
    {
        for(int i=0;i<word.size();i++)
        {
            if(word[i]>='A' and word[i]<='Z')
            {
                return false;
            }
            
            
        }
        
        return true;
    }
    
    bool first(string word)
    {
        for(int i=1;i<word.size();i++)
        {
            if(word[i]>='A' and word[i]<='Z')
            {
                return false;
            }
            
        }
        
        return true;
    }
    
    
    bool detectCapitalUse(string word) 
    {
        if(word.size()==1) return true;
        
        if(word[0]>='A' and word[0]<='Z')
        {
            if(word[1]>='A' and word[1]<='Z')
            {
                
                return all(word);
            }
            
            else
            {
                return first(word);
                
            }
            
            
        }
        
        
        if(word[0]>='a' and word[0]<='z')
        {
            return small(word);
        }
        
        return false;
        
    }
};