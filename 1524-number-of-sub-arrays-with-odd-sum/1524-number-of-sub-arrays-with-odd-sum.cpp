class Solution {
public:
    
    int mod=1e9+7;
    
    int numOfSubarrays(vector<int>& arr) 
    {
        int long long n=arr.size();
        
        map<int ,int> mp;
        
        int sum=0;
        mp[0]=1;
        
        int long long cnt=0;
        
        
        for(int i=0;i<arr.size();i++)
        {
            
            sum+=arr[i];
            int rem=sum%2;
            
            if(mp.find(rem)!=mp.end())
            {
                cnt+=mp[rem];
            }
            
            mp[rem]++;
            
        }

        int long long answer=(((n*(n+1))/2) - cnt)%mod;
        
        return answer;
    }
};