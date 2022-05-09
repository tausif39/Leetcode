class Solution {
public:
    
    

    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) 
    {
        int n=index.size();
        vector<int> ans(n,0);
        
        for(int i=0;i<n;i++)
        {
            int indx=index[i];
            
            // if(nums[i]!=0)
            // {
                
                
                    for(int j=ans.size()-1;j>indx;j--)
                    {
                        ans[j]=ans[j-1];
                    }
                    
                    ans[indx]=nums[i];

            
                
            // }
            
            
        }
        
        return ans;
        
        
        
    }
};