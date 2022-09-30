class Solution {
public:
    
    int MOD=1e9+7;
    
    int countHomogenous(string s) 
    {
        
       long  ans =0 ;
        
        int i=0;
        
        while(i<s.size())
        {
            long  cnt=0 ;
            
            char current =s[i];
            
            while(current==s[i] and i<s.size())
            {
                 i++;cnt++;
            }
            
            
         ans+=((cnt*(cnt+1))/2);
            
            ans=ans%MOD;
            
        }
            
        return ans%MOD;
        
        
    }
};