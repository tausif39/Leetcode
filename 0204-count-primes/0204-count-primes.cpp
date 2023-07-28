class Solution {
public:
    
    int countPrimes(int n) 
    {
        
        vector<bool> prime(n+1,1);
        int cnt=0;
        prime[0]=prime[1]=false;
   
        for(int i=2;i<n;i++)
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

        
        
        return cnt;
        
        
        
    }
};