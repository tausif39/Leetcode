class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) 
    {
        map<int , int> mp;
        
       
            int sum=0;
       
        
        mp[0]=1;
        
        int cnt=0;
        
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            
            int rem=sum%k;
            
            if(rem<0)rem+=k;
            
            if(mp.find(rem)!=mp.end())
            {
                cnt+=mp[rem];
                mp[rem]++;
                continue;
            }
            
            mp[rem]++;
            
        }
        
        return cnt;
        
    }
};