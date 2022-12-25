class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) 
    {
        
        int product=1;
        
        int n=nums.size();
        
        vector<int> ans;
        
        ans.push_back(nums[0]);
        
        for(int i=1;i<nums.size();i++)
        {
            product=nums[i-1]*product;
            
            ans.push_back(product);
            
        }
        
        // for(auto it:ans)cout<<it<<" ";
        
        
        
        product=1;
        
        // arr[n-1]=
        
        for(int i=n-2;i>=0;i--)
        {
            
            product*=nums[i+1];
            ans[i]*=product;
            
            
        }
        
        ans[0]=product;
        
        // for(auto it:ans)cout<<it<<" ";
        
        
        return ans;
        
        
        
        
        
    }
};