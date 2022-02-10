class Solution {
public:
    
    int maximumProduct(vector<int>& nums) 
    {
    
        sort(nums.begin(),nums.end(),greater<int>());
        
        
        int long long pr = nums[0]*nums[1]*nums[2];
        
        int long long ok = nums[nums.size()-1]* nums[nums.size()-2]* nums[0];
        if(ok>pr)return ok;
        
        return pr;
        
    }
};