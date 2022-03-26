class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) 
    {
        vector<int> v;
        
        for(int i=0;i<nums.size();i+=2)
        {
            int k=nums[i];
            while(k--)
            {
                v.push_back(nums[i+1]);
                
            }
        }
        
        return v;
        
        
    }
};