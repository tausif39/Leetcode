class Solution {
public:
    
    int helper(vector<int>& nums,int indx,vector<int> &v)
    {
        if(indx>=nums.size() )
        {
            return 0;
        }
            
          if(v[indx]!=-1)return v[indx];
            int take,not_take;
        
            v[indx]= take= nums[indx] + helper(nums,indx+2,v);
        
           v[indx]=  not_take= helper(nums,indx+1,v);
     
        return v[indx]=max(take,not_take)   ;
        
    }
    
    int rob(vector<int>& nums) 
    {
        
        vector<int> v(nums.size()+1,-1);
        
        
       return helper(nums,0,v);
            
            
        
    }
};