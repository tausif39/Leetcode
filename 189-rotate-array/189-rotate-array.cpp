class Solution {
public:
    void rotate(vector<int>& nums, int k)
    {
        int rotate=k%nums.size();
        vector<int>  v;
        
        
        for(int j=nums.size()-rotate;j<nums.size();j++)
        {
            v.push_back(nums[j]);
            
            
        }
        
        for(int i=0;i<nums.size()-rotate;i++)
        {
            v.push_back(nums[i]);
            
        }
        
        
        for(int i=0;i<nums.size();i++)
        {
            nums[i]=v[i];
        }
        
    }
};