class Solution {
public:
    vector<long long> getDistances(vector<int>& arr) 
    {
        int n=arr.size();
        
         vector<long long> ans(n,0);
        
        map<long long, long long> count,sum;
        
        for(int i=0;i<n;i++)
        {
            
            
            ans[i]+=count[arr[i]]*1LL*i - sum[arr[i]];
            
            count[arr[i]]++;
            sum[arr[i]]+=i;
            
        }
        
        count.clear();
        sum.clear();
        
        
        
        for(int i=n-1;i>=0;i--)
        {
            
            
            ans[i]+= sum[arr[i]]- count[arr[i]]*1LL*i;
            
            count[arr[i]]++;
            sum[arr[i]]+=i;
            
        }
        
        
        
        
        return ans;
        
        
        
    }
};