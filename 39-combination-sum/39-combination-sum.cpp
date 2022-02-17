class Solution {
public:
    
    void helper(int indx, vector<int>  arr,vector<int>  &v,vector<vector<int>> &ans, int target )
    {
        if(indx==arr.size())
        {
            if(target==0)
            {
            ans.push_back(v);
                
            }
            
            return ;
        }
        
      //  take or not take 
       
        if(arr[indx]<=target)
        {
        v.push_back(arr[indx]);
        helper(indx,arr,v,ans,target-arr[indx]);
        v.pop_back();
        }
        
        helper(indx+1,arr,v,ans,target);
        
        
        
    } 
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) 
    {
        vector<int> v;
        vector<vector<int>> ans;
        
        helper(0,candidates,v,ans ,target);
        
        return ans;
        
        
    }
};