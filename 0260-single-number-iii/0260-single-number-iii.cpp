class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) 
    {   
        int long long xy=0;
        
        for(auto it:nums)xy^=it;
        
        xy&=(~xy+1);
        
        vector<int> ans(2,0);
        
        for(auto num:nums)
        {
            
            if(xy&num)ans[0]^=num;
            else ans[1]^=num;
        }
        
        return ans;
        
    }
};