class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries)
    {
        
        vector<int> ans;
        
        int sum_even=0;
        
        for(int i=0;i<nums.size();i++)
        {
            sum_even+=(nums[i]%2==0)? nums[i] : 0;
        }
        
        // cout<<sum_even;
        
        for(int i=0;i<queries.size();i++)
        {
            int indx=queries[i][1];
            
            int val=queries[i][0];
            
            if(nums[indx]%2==0)
            {
                
                
                if((nums[indx] + val)%2==0)
                {
                    sum_even+=val;
                    nums[indx]= nums[indx] + val;
                }
                else
                {
                    sum_even-=nums[indx];
                    
                    nums[indx]= nums[indx] + val;
                }
                
                
            }
            
            else
            {
                
                 nums[indx]= nums[indx] + val;
                
                if(nums[indx]%2==0)
                {
                    sum_even+=nums[indx];
                }
                
            }
            
       
            
            ans.push_back(sum_even);
        }
        
        
        
        return ans;
        
    }
};