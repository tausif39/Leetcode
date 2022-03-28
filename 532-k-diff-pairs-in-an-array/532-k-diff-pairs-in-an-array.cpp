class Solution {
public:
    int findPairs(vector<int>& nums, int k) 
    {
        // unordered_map<char , int > mp;
        
//         
        // for(auto f : nums) ++mp[f];
        
        
        sort(nums.begin(),nums.end());
        int current=INT_MIN ;
        int cnt=0;
        for(int i=0;i<nums.size()-1;i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(abs(nums[i]-nums[j])==k)
                {
                    if(nums[i]!=current)
                    {
                        cnt++;
                        current =nums[i];
                        
                        
                    }
                    
                    
                }
                
            }
        };
        
            
            return cnt;
            
            
        
        
    }
};