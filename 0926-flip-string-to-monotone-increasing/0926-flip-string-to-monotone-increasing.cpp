class Solution {
public:
    
    int minFlipsMonoIncr(string s) 
    {
        int zero=0,one=0;
        
        for(auto it:s)
        {
            if(it=='0')zero++;
            else one++;
            
            zero=min(zero,one);
        }
        
        return zero;
        
    }
};