class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) 
    {
        string res1,res2;
        for(int i=0;i<word1.size();i++)
        {
            res1+=word1[i];
        }
        for(int i=0;i<word2.size();i++)
        {
            res2+=word2[i];
        }
        
       if(res1.size()!=res2.size()) return false;
        
        
        for(int i=0;i<res1.size();i++)
        {
            if(res1[i]!=res2[i])return false;
        }
        
        return true;
    }
};