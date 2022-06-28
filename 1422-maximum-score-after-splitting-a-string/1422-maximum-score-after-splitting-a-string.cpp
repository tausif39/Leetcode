class Solution {
public:
    int maxScore(string s) 
    {
        int n=s.size();
        
        vector<int> pre(n,0),suff(n,0);
        
        
        vector<int> v;
        
        for(int i=0;i<n;i++)v.push_back(s[i]-'0');
      
        
        
        suff[n-1]=v[n-1];
        
        
        for(int j=n-2;j>0;j--)
        {
            
            suff[j]=suff[j+1]+v[j];
        }
        
        suff[0]=suff[1];
        
        
        if(v[0]==0)
        {
            pre[0]=1;
            
        }
        else pre[0]=0;
        
        for(int i=1;i<n-1;i++)
        {
            if(v[i]==0)
            {
                
                pre[i]=pre[i-1]+1;

            }
            else
            {
                pre[i]=pre[i-1];
            }
            
        }
        
        
        int ans=0;
        
        
        for(int i=0;i<n;i++)
        {
            ans=max(ans,suff[i]+pre[i]);
        }
        
        for(int it:suff)cout<<it<<" ";
        
        
        return ans;
        
    }
};