class Solution {
public:
    int helper(vector<int>& nums,int indx,vector<int> &v)
    {
        if(indx>=nums.size() )
        {
            return 0;
        }
            
          if(v[indx]!=-1)return v[indx];
            
        int take ,not_take;
        return v[indx]=  take= nums[indx] + min(helper(nums,indx+2,v),helper(nums,indx+1,v))  ;
        
           // v[indx]=  not_take= helper(nums,indx+1,v);
     
        // return v[indx]  ;
        
        // return not_take = helper(nums,indx+1,v);
        
        
        // return min(take ,not_take);
        
    }
    
    int minCostClimbingStairs(vector<int>& cost) 
    {
        
        vector<int> v(cost.size()+1,-1);
        
        // return helper(cost,0,v);
       return min(helper(cost,0,v),helper(cost,1,v));
        
    }
};