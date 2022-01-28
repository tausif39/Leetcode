class Solution {
public:
    
    bool checkAlmostEquivalent(string word1, string word2) 
    { 
        
        unordered_map<char , int > mp1;
        
      
        
        
        for(int i=0;i<word1.size();i++)
        {
            ++mp1[word1[i]];
            
        }
        
        for(int i=0;i<word2.size();i++)
        {
            
            --mp1[word2[i]];
        }
        
        for(int i=0;i<word1.size();i++)
        {
            if(abs(mp1[word1[i]])>3)
            {
                return false;
            }
            
        }
        
        for(int i=0;i<word2.size();i++)
        {
            if(abs(mp1[word2[i]])>3)
            {
                return false;
            }
            
        }
        
        return true;
        
    }
};