class Solution {
public:
    long long countGood(vector<int>& nums, int k) 
    {
        
        map<int , int> mp;
        
        long long cnt=0;
        
        int left=0;
        
        long long ans=0;
        
        for(int i=0;i<nums.size();i++)
        {
            
            mp[nums[i]]++;
            cnt+=mp[nums[i]] -1;
            
            while(left<=i and cnt>=k)
            {
                
                mp[nums[left]]--;
                
                
               cnt-=mp[nums[left]];
                
                // if(mp[nums[left]]==0)mp.erase(nums[left]);
                
                
               ans+=nums.size()-i;
                left++;
                   

            }
            
            
            
        }
        
        return ans;
            
        
        
    }
};