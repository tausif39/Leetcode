class Solution {
public:
    
    void  helper (int indx, vector<int>& ds,vector<int> &arr,vector< vector<int> > &ans)
    {
         ans.push_back(ds);
        
        
        
        for(int i= indx;i<arr.size();i++)
        {
          
            if(i>indx and arr[i]==arr[i-1])continue;
            
            ds.push_back(arr[i]);

            helper(i+1,ds,arr,ans);

            ds.pop_back();
  
          
            
        }
        
        
    }
    
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) 
    {
        sort(nums.begin(),nums.end());
        
         vector<int> ds;
        
        vector< vector<int> > ans;
        
         helper (0,ds,nums,ans);
        
        return ans;
        
    }
};