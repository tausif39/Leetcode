class Solution {
public:
    
    int numberOfMatches(int n)
    {
        
        int ans=0;
        
        while(n>1)
        {
            
            if(n%2==0)
            {
                int match=n/2;
                ans+=match;
                n=match;
            }
            else
            {
                int match=(n-1)/2;
                ans+=(n-match);
                n=match;
            }
            
        }
        
        return ans;
        
        
    }
};