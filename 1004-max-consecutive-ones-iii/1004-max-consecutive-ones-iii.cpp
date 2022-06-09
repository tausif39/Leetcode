class Solution {
public:
    int longestOnes(vector<int>& nums, int k) 
    {
       //maximum size of array containing k 0s
        
        int left=0;
        int cnt=0, ans=0;
        
        
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)cnt++;
            
            while(cnt>k)
            {
                if(nums[left]==0)cnt--;
                
                left++;
                
            }
            
            
            ans=max(ans,i-left+1);
            
            
        }
        return ans;
        
        
    }
};