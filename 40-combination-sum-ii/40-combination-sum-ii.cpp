class Solution {
public:
    
    void helper(int indx, vector<int>& arr, int target, vector<vector<int>> & ans, vector<int> &v )
    {
        if(target==0)
        {
            ans.push_back(v);return ;
        }
           
        
//         if(indx==arr.size())
//         {
//                  if(target==0)
//                 {
                    
                    
                    
//                 }
            
//              return ;
                
//         }
        
        
        for(int i=indx;i<arr.size();i++)
        {
            
            if( i>indx and (arr[i]==arr[i-1]) )continue;
            
            if(arr[i]>target)break;
            
            v.push_back(arr[i]);
            
          
            helper(i+1,arr, target- arr[i],  ans , v);
           
            v.pop_back();
            
        }
            
            
        
    }
    
    
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) 
    {
        sort(candidates.begin(),candidates.end());
        
        vector<vector<int>> ans;
        
        
        vector<int> v;
        
        
        helper(0,candidates, target,  ans, v );
        
        
            
        return ans;
        
    }
};