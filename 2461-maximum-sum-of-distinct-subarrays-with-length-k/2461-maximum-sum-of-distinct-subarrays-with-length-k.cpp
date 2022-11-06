class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) 
    {
        
        long long ans = 0;
        
        long long sum = 0;
        
        map<int,int> m;
			
        for(int i = 0 ; i < k-1 ; i++)
        {
            
            sum+=nums[i];
            m[nums[i]]++;
            
        }
        
        
		// acquire the kth element , add to the answer , then release 
        
        
        for(int i = k-1 , j = 0 ; i < nums.size() ; i++ , j++)
        {
            
            sum+=nums[i];
            m[nums[i]]++;
            if(m.size()==k)
            {
                if(ans < sum)
                {
                    ans = sum;
                }
            }
            
            sum-=nums[j];
            
            if(m[nums[j]]==1) m.erase(nums[j]);
            
            else m[nums[j]]--;
            
        }
        
        return ans;
    }
};