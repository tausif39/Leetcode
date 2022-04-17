class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) 
    {
        // priority_queue<int , vector<int> , greater<int>> pq;
        
        int cnt=0;
        
        sort(nums.begin(),nums.end());
        
        for(int i=1;i<nums.size();i++)
        {
            // if(nums[i-1]!=nums[i])continue;
            
            if(nums[i-1]==nums[i])
            {
               nums[i]+=1;  
                cnt++;
            }
            
            else if(nums[i-1]>nums[i])
            {
                int diff=nums[i-1]-nums[i]+1;
                
                cnt+=diff;
                
                nums[i]+=diff;
            }
            
        }
        
        return cnt;
        
    }
};