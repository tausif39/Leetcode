class Solution {
public:
    int helper(int indx,vector<int> &v,int n)
    {
        if(indx==n)
        {
            return 1;
        }
        if(indx>n)return 0;
            
          if(v[indx]!=-1)return v[indx];
            
    
        
        
        return v[indx]=helper(indx+1,v,n) + helper(indx+2,v,n);
        
        
    }
    
    
    
    
    int climbStairs(int n) 
    {
         vector<int> v(n+1,-1);
        
    
       return helper(0,v,n);
        
        
        
    }
};