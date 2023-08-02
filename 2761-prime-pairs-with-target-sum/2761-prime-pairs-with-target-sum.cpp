class Solution {
public:
    
    vector<vector<int>> findPrimePairs(int n)
    {
        
        vector<bool > prime(n,1);
        
        vector<int> v;
        
        prime[0]=prime[1]=false;
        
        for(int i=2;i<n;i++)
        {
            if(prime[i])
            {
                for(int j=2*i;j<n;j+=i)
                {
                    prime[j]=false;
                }
            }
            
        }
        
        for(int i=0;i<n;i++)
        {
            if(prime[i])v.push_back(i);
            
        }
        
        int right=v.size()-1,left=0;
        
        
        vector<vector<int>> ans;
        
        while(left<=right)
        {
            if( (v[right]+v[left]) == n)
            {
                ans.push_back({v[left],v[right]});
                
                
                // if(2*v[right] == n)
                // {
                //     ans.push_back({right,right});
                // }
                
                
                left++;
                right--;
            }
            else if( (v[right]+v[left]) < n)
            {
                left++;
            }
            else
            {
                right--;
            }
            
        }
        
        
        
        // for(auto it:v)cout<<it<<" ";
        
        return ans;
        
    }
};