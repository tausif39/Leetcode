class Solution {
public:
    
    void helper(int n, int k ,int indx, vector<vector<int>> & ans, vector<int> &v)
    {      
        if(v.size()==k)
        {
            ans.push_back(v);
        
            
        }
             
        for(int i=indx;i<=n;i++)
        {
            v.push_back(i);
            helper(n,k,i+1,ans, v);
            v.pop_back();
            
        }
        
        
    }
          
            
  
    
    vector<vector<int>> combine(int n, int k)
    {
        vector<vector<int>> ans;
        
        
        vector<int> v;
        
        helper( n,  k,1, ans, v);
        
        
            
        return ans;
        
        
    }
};




// void comb(vector<vector<int>>& ans,vector<int>& temp,int s,int n,int k)
// {
//         if(temp.size()==k)
//         {
//             ans.push_back(temp);
//             return;
//         }
    
//         for(int i=s;i<=n;i++)
//         {
//             temp.push_back(i);
//             comb(ans,temp,i+1,n,k);
//             temp.pop_back();
//         }
    
//     }

//     vector<vector<int>> combine(int n, int k) 
//     {
//         vector<int> temp;
//         vector<vector<int>> ans;
//         comb(ans,temp,1,n,k);
//         return ans;
//     }