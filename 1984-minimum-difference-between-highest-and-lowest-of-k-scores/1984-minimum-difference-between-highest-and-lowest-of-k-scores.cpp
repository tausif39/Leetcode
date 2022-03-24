class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) 
    {
        if(k==1)return 0;
        
        sort(nums.begin(),nums.end());
        
        int small=1e9;
            
        for(int i=0;i<nums.size()-(k-1);i++)
        {
            for(int j=i+k-1;j<nums.size();j++)
            {
                
                small= min(small,abs(nums[i]-nums[j]));
                
                    
            }
            
        }
        
        return small;
        
        
    }
};