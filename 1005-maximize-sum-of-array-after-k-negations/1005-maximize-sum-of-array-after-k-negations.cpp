class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) 
    {
        sort(nums.begin(),nums.end());
        
        int sum=0;
        if(nums[0]<0)
        {
            
        for(int i=0;i<nums.size();i++)
        {
           if(nums[i]<0 and k) 
           {
               nums[i]*=-1;k--;
           }
            else break;
            
        }
            
            sort(nums.begin(),nums.end());
            
        }
        
        for(int i=0;i<nums.size();i++)
        {
            
            if(k)
            {
                
            if(nums[i]<0)
            {
                sum=sum-nums[i];k--;
            }
            
            else
            {
                if(nums[i]==0 and k==1)
                {
                    k--;
                    continue;
                }
                
               else if(k>1 and k%2==0)
                {
                    
                    sum=sum+nums[i];k-=2;
                    
                }
                
                 else if(k>1 and k%2!=0)
                {
                    
                    sum=sum-nums[i];k-=1;
                    
                }
                
                else 
                {
                    sum=sum-nums[i];k--;
                }
                
            }
                
            }
            
            else sum=sum+nums[i];
            
            
            
        }
        
        return sum;
        
    }
};