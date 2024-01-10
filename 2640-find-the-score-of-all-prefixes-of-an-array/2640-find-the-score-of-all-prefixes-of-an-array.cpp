class Solution {
public:
    
    vector<long long> findPrefixScore(vector<int>& nums) 
    {
        
        int maxi=nums[0];
        
        long long score=0;
        
        vector<long long > ans;
        
        
        for(int i=0;i<nums.size();i++)
        {
            maxi=max(nums[i],maxi);
            long long curr=nums[i]+ maxi;
            score+=curr;
            ans.push_back(score);
        }
        
        return ans;
        
        
    }
};