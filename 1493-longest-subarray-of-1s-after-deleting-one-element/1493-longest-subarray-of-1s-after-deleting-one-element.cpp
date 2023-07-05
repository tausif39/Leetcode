class Solution {
public:
    int longestSubarray(vector<int>& nums) 
    {
        
        int cnt1=0,cnt2=0,i=0,j=0,ans=0;
        
        while (j<nums.size()) 
        {
            
            if (nums[j]==1) cnt1++;
            if (nums[j]==0) cnt2++;
            
            while (cnt2>1) 
            {
                
                if (nums[i]==1) cnt1--;
                if (nums[i]==0) cnt2--;
                
                i++;
            }
            
            if (cnt2) ans=max(ans,cnt1);
            else ans=max(ans,cnt1-1);
            j++;
        }
        
        return ans;
    }
};