class Solution {
public:
    
    int countPrimes(int n) 
    {
        
        vector<bool> prime(n+1,1);
        int cnt=0;
        prime[0]=prime[1]=false;
   
        for(int i=0;i<n;i++)
        {
            
            if(prime[i])
            {
                
                for(int j=2*i;j<n;j+=i)
                {
                    prime[j]=false;
                }
                
                cnt++;
                
            }
            
        }
        
        
        
       // for(auto it:prime)if(it)cnt++;
        
        
        return cnt;
        
        
        
    }
};