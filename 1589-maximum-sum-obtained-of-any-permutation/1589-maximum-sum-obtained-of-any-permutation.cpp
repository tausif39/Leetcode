class Solution {
public:
    
    int maxSumRangeQuery(vector<int>& nums, vector<vector<int>>& r) 
    {
        
        int n = nums.size();
        
        vector<int> freq(n+1);
        
        for(int i = 0 ; i < r.size() ; i++)
        {
        
            freq[r[i][0]]++;
            
            freq[r[i][1]+1]--;
        }
        
        for(int i = 1 ; i < n ; i++)
        {
            freq[i] += freq[i-1];
            
        }
        
        priority_queue<int> pq;
        
        for(int i = 0 ; i < n ; i++)
        {
            pq.push(freq[i]);
            
            
        }
        
        int ans = 0;
        
        long long mod = 1e9 + 7;
        
        sort(nums.rbegin(),nums.rend());
        
        
        int i = 0;
        
        
        while(!pq.empty())
        {
            
            ans = (ans + ((pq.top()%mod)*(nums[i++]%mod))%mod)%mod;
            
            pq.pop();
        }
        
        return ans;
        
        
    }
};