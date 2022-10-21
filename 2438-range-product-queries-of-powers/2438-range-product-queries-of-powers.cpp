class Solution {
public:
    
    int MOD=1e9+7;
    
    vector<int> productQueries(int n, vector<vector<int>>& queries) 
    {
        int i=0;
        
        vector<int> v;
        
        vector<int > ans;
        
        
        int long long mask1;
        
        
        while(n)
        {
            
            
            for(int i=32;i>=0;i--)
            {

                if(n==0)break;

                int long long mask = (int long long)1<<i;

                if(mask<n)
                {
                    n-=mask;
                    v.push_back(mask);

                }
                else if(mask==n)
                {
                    n-=mask;
                    v.push_back(mask);

                }

             }
            
            
        }
        
 
        sort(v.begin(), v.end());
        
        ans.resize(queries.size(),1);
        
        for(auto it: v)cout<<it<<" ";
        
        
        for(int i=0;i<queries.size();i++)
        {
           for(int j=queries[i][0]; j<=queries[i][1] ; j++) 
           {
               int long long prd= ans[i];
               
               prd*=v[j];
               
               prd%=MOD;
               
               ans[i]=prd;
        
           }
            
        }
        
        
        return ans;
            
        
        
    }
};