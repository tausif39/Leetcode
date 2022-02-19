class Solution {
public:
    
     void  helper (int indx, vector<int>& ds,vector<int> arr,vector< vector<int> > &ans)
    {
        if(indx==arr.size())
        {
            ans.push_back(ds);
            return ;
        }
        
        
        //take or not take
        
        //take
        ds.push_back(arr[indx]);
        
        helper(indx+1,ds,arr,ans);
        
        ds.pop_back();
        
        
        // not take
        
         helper(indx+1,ds,arr,ans);
        
        
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> ds;
        vector< vector<int> > ans;
        
         helper (0,ds,nums,ans );
        
        return ans;
    }
};