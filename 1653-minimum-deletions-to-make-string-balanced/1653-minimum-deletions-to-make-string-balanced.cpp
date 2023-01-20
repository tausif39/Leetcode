class Solution {
public:
    int minimumDeletions(string s)
    {
        
        int i=0;
        
        while(s[i]=='a')i++;
        
        int zero=0, one=0;
        
        for(;i<s.size();i++)
        {
            if(s[i]=='a')zero++;
            else one++;
            
            zero=min(zero,one);
            
        }
        
        return zero;
        
        
        
    }
};