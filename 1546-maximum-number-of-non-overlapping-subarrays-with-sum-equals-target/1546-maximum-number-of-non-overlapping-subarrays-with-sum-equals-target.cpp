class Solution {
public:
    int maxNonOverlapping(vector<int>& nums, int target) 
    {
        
         
        unordered_map< int , int >  mp;
        
        int sum=0;
        
        int idx=-1;
        
        int count=0;
        
        mp[0]=-1;
        
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            
            if(mp.find(sum-target)!=mp.end())
            {
                if(idx<=mp[sum-target])
                {
                    idx=i;
                    count++;
                }
                
            }
            
            mp[sum]=i;
        }
        
        return count;
    }
};