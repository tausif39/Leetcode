class Solution {
public:
    int maxScore(vector<int>& nums, int k) 
    {
        
        int total_sum=0;
        
        for(auto i:nums)total_sum+=i;
        
        
        int sum=INT_MAX;
        
        int s=nums.size()-k;
        
        int current_sum=0;
        
        int i=0;
        
        for(;i<s;i++)
        {
            current_sum+=nums[i];
        }
        
        // i--;
        
        
        
        int j=0;
        
        // sum=min(sum,current_sum);
        
        while(i<nums.size())
        {
            sum=min(sum,current_sum);
            cout<<sum<<" ";
            current_sum+=nums[i];
            current_sum-=nums[j];
            
            i++;
            j++;
            
            
        }
        
         sum=min(sum,current_sum);
        
        if(sum==INT_MAX)
        {
            return total_sum;
        }
        
        
        return total_sum-sum;
        
        
        // [1,79,80,1,1,1,200,1]
        // 3
        
        
    }
};