class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        if(nums.size()==0) return 0;
        if(nums.size()==1) return 1;
        
        
        int i=0;
        int j=1;
        int cnt=1;
        while(j!=nums.size())
        {
            if(nums[i]!=nums[j])
            {
                nums[i+1]=nums[j];
                cnt++;
                i++;
            }
           else
           {
               j++;
           }
        }
        
        return cnt;
        
    }
};