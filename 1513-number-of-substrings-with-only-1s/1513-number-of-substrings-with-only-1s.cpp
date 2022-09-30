class Solution {
public:
     
    int MOD=1e9+7;
        
        
    int numSub(string s) 
    {
        
        int zeroes=0;
        
        int long long ans=0;
        
        int i=0;
        
        while(i<s.size())
        {
            
            int long long cnt=0;
            
            if(s[i]=='0')
            {
                while(s[i]=='0'  and i<s.size())
                {
                    i++;
                }
            }
            
            else
            {
                 while(s[i]=='1'  and i<s.size())
                {
                    cnt++;
                    i++;
                }
                
                
            }
            
            ans+=(int long long)((int long long)(cnt*(cnt+1))/2);
            ans=ans%MOD;

        }
        
        
        return ans%MOD;
        
        
    }
};