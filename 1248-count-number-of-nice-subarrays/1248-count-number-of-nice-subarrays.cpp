class Solution {
public:
    
    int numberOfSubarrays(vector<int>& nums, int k)
    {
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]&1)nums[i]=1;
            else nums[i]=0;
            
        }
        
        // vec
        
        map<int , int >mp;
        
        // mp.insert({0,1});
        
        mp[0]=1;
        
        int res=0;
        
        int sum=0;
        
        for(int i=0;i<nums.size();i++)
        {
            
            
            sum+=nums[i];
                      
            mp[sum]++;
            
            if(mp.find(sum-k)!=mp.end())
            {
                res+=mp[sum-k];
            }
            
        }
            
        return res;    
        
        
        
        
    }
};