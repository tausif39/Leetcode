class Solution {
public:
    int totalFruit(vector<int>& nums) 
    {
     
        unordered_map<int , int> mp;
        
        int left=0;
        
        int max_len=0;
        
        
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
            
            while(mp.size()>2 )
            {
                
                if(mp[nums[left]]==1)
                 {
                     mp.erase(nums[left]);
                 }
                 else mp[nums[left]]--;
                     
                left++;
                        
            }
            
            max_len=max(max_len,i-left+1);
                        
        }
                     
         return max_len;
        
        
    }
};