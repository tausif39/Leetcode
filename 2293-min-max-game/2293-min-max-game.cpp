class Solution {
public:
    int minMaxGame(vector<int>& nums) 
    {
         
        while(nums.size()>1)
        {
            vector<int> temp;
            int cnt=0;
            
            for(int i=0;i<nums.size()-1;i++)
            {
                if(cnt==0)
                {
                    // int game=min(nums[i],nums[i+1]);
                    
                    temp.push_back(min(nums[i],nums[i+1]));
                    cnt=1;i++;
                }
                else
                {
                    // int game=
                    temp.push_back(max(nums[i],nums[i+1]));
                    cnt=0;i++;
                }
                                   
            }
                                   
                           nums.clear();nums=temp;
            
            
        }
           return nums[0];
        
    }
};