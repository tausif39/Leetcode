class Solution {
public:

    bool helper(vector<int>& nums, int indx , int target,vector<vector<int>> &t) 
    {
        
   
        if(indx==nums.size())
        {
            if(target==0)return true;
            return false;
        }
        
        if(target==0)return true;
            
        
        // if(t[indx][target]!=false)return t[indx][indx];
        
        
        if(t[indx][target]!=-1)return t[indx][target];
        
      bool a,b=false;
        if(target>=nums[indx])
        {
         a = helper(nums,indx+1,target-nums[indx],t);
        }
        
        
      b = helper(nums,indx+1,target,t);
            
            
      
        return  t[indx][target]= a|b;
    }
    
    
    bool canPartition(vector<int>& nums) 
    {
        int n=nums.size();
        int sum=0;
        for(auto f : nums) sum+=f;
       
        
        vector<vector<int>> t(n,vector<int> (sum+1,-1));
        
        
        if(sum%2!=0)return false;
         return helper(nums,0,sum/2,t);
        
        
        
    }
};