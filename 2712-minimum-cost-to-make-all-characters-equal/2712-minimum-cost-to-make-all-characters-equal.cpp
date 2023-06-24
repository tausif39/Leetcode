class Solution {
public:
    long long minimumCost(string s) 
    {
        
        int n = s.size();
        
        long long ans=0;
        
        for(int i=1;i<s.size();i++)
        {
            if(s[i-1]!=s[i])
            {
                ans+=min(i,n-i);
            }
            
        }
        
        return ans;
        
        
        
    }
};