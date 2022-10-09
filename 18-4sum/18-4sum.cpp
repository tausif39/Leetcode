class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target)
    {
        
        if(nums.size()<4)return {};
        
        vector<vector<int>> ans;
        
        sort(nums.begin(),nums.end());
        
        set<vector<int>> s;
        
        for(int i=0;i<nums.size()-3;i++)
        {
            for(int j=i+1;j<nums.size()-2;j++)
            {
                int k=j+1;
                
                int l=nums.size()-1;
                
                while(k<l)
                {
                    
                    int long long sum=(int long long)nums[i]+nums[j]+nums[k]+nums[l];
                    
                    if(sum==(int long long )target)
                    {
                        s.insert({nums[i], nums[j] , nums[k], nums[l]});
                        
                        k++;
                        l--;
                    }
                    
                    else if(sum<(int long long )target)
                    {
                        k++;
                    }
                    
                    else
                    {
                        l--;
                        
                    }
                }
                
                
            }
        }
        
        for(auto it:s)
        {
            ans.push_back(it);
        }
        
        return ans;
        
        
        
    }
};