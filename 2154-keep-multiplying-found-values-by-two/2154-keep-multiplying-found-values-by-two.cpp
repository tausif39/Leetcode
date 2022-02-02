class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) 
    {
        int okay=original;
        int i=0;
        while(i<nums.size())
        {
            i=0;
            
            for(;i<nums.size();i++)
            {
                if(nums[i]==okay)
                {
                    okay*=2;
                    
                    break;
                    
                }

            }
        }
	return okay;
        
    }
};