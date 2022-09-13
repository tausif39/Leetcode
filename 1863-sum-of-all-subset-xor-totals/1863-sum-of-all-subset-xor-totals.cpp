class Solution {
public:
    
    int ans=0;
    int sum=0;
    void subset(int indx, vector<int>& nums)
    {
        if(indx==nums.size())
        {
            return ;
            
        }
         
        ans^=nums[indx];
        sum+=ans;
        subset(indx+1, nums);
        ans^=nums[indx];
        subset(indx+1, nums);
        
    }
    
    int subsetXORSum(vector<int>& nums) 
    {
//         int n=nums.size();
        
//         int ans=0;
        
//         int sum=0;
        
//         for(auto it :nums)sum+=it;
        
//         for(int i=0;i<n;i++)
//         {
//             for(int j=i+1;j<n;j++)
//             {
//                 for(int left=i;left<=j;left++)
//                 {
                    
//                     ans^=nums[left];
                    
//                     sum+=ans;
//                 }
//             }
//         }
        
        
        subset(0,nums);
        
        
        
        // ans=1^3;
        
        return sum;
        
    }
};