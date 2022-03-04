class Solution {
public:
    
    int helper(vector<int>& nums,int indx,int n,vector<int> &v)
    {
        if(indx>=nums.size())
        {
            return 0;
        }
            
          if(v[indx]!=-1)return v[indx];
            int take,not_take;
        
            v[indx]= take= nums[indx] + helper(nums,indx+2,n,v);
        
            v[indx]=  not_take= helper(nums,indx+1,n,v);
     
            return v[indx]=max(take,not_take);
        
    }
    
    
    int rob(vector<int>& nums) 
    {
        if(nums.size()==1)return nums[0];
        
         vector<int> dp1(nums.size(),-1);
        vector<int> dp2(nums.size(),-1);
        vector<int> v1,v2;
        
        for(int i=0;i<nums.size();i++)
        {
            if(i!=0)v1.push_back(nums[i]);
            if(i!=nums.size()-1)v2.push_back(nums[i]);
        }
     
         
           
    return max(helper(v1,0,0,dp1),helper(v2,0,0,dp2));
            
        
    }
};