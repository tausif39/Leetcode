class Solution {
public:
    
    int sumOfBeauties(vector<int>& nums) 
    {
        
        int beauty=0;
        
        int n= nums.size();
        
        
        vector<int > maxi(n) , mini(n);
        
        int minu=INT_MAX;
        
        int maxu=INT_MIN;
        
        for(int i=0;i<n; i++)
        {
            maxu=max(maxu, nums[i]);
            mini[i]=maxu;
        }
        
        
        for(int i=n-1;i>=0;i--)
        {
            minu=min(minu, nums[i]);
            maxi[i]=minu;
        }
         
        
        for(int i=1;i<nums.size()-1; i++)
        {
            
            if(mini[i-1]<nums[i] and nums[i]<maxi[i+1])beauty+=2;
            
            else if(nums[i-1]<nums[i] and nums[i]< nums[i+1])beauty+=1;
        }
        
        
        return beauty;
        
    }
};