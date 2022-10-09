class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) 
    {
        
        sort(nums.begin(),nums.end());
        
        int n=nums.size();
        
        vector<vector<int>> ans;
        
        map<vector<int> , int> mp;
        
        
        for(int i=0;i<n-2;i++)
        {
            int j=i+1;
            
            int k=n-1;
            
            while(j<k)
            {
                if((nums[i]+nums[j]+ nums[k])==0)
                {
                    ++mp[{nums[i], nums[j], nums[k]}];
                    // break;
                    
                    j++,k--;
                    
                }
                else if((nums[i]+nums[j]+ nums[k])<0)
                {
                    
                    j++;
                }
                
                else
                {
                    k--;
                }
                
            }
            
            
        }
        
        for(auto it:mp)ans.push_back(it.first);
        
        return ans;
        
        
        
    }
};