class Solution {
public:
    bool canJump(vector<int>& nums) 
    {
        
        int max_jump=nums[0];
        
        for(int i = 0; i < nums.size(); i++)
        {
            if(max_jump<i)return false;
            
            max_jump=max(max_jump ,nums[i]+i);
        }
        
        return true;
        
    }
};