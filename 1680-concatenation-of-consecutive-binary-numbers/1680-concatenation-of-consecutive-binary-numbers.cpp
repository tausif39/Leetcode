class Solution {
public:
    
    int mod=1e9+7;
    
    int concatenatedBinary(int n) 
    {
        int long long ans=0;
        
        for(int i=1;i<=n;i++)
        {
            int k=i;
            
            int steps=0;
            
            while(k)
            {
                k/=2;
                steps++;
            }
            
            ans=((ans<<steps) + i)%mod;
            
            
        }
        
        return ans%mod;
        
        
    }
};