class Solution {
public:
    int minOperations(int n) 
    {
        
        if(n==1)return 0;
        
        vector<int> v;
        
        for(int i=0;i<n;i++)
        {
            v.push_back((2*i)+1);
        }
        
        int ans=0;
        
        for(auto it:v)cout<<it<<" ";
        
        
        if(n%2==0)
        {
            
            int med=v[n/2];
            med-=1;
            
            for(int i=n/2;i<n;i++)
            {
                ans+=(v[i]-med);
            }
            
            
        }
        else
        {
            int med=v[(n-1)/2];
            
            
            for(int i=n/2 +1;i<n;i++)
            {
                ans+=(v[i]-med);
            }
            
        }
        
        return ans;
        
    }
};