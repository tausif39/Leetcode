class Solution {
public:
    
    
    int minElements(vector<int>& nums, int limit, int goal) 
    {
       
        int long long sum=0;
        
        for(auto it: nums)sum+=it;
        
        
        if(sum==goal)return 0;
        
        
        int long long diff=abs(sum-goal);
                  
        if(diff<=limit)return 1;
        
        int ans;
        
        if(diff%limit==0)
        {
            ans=diff/limit;
        }
        
        else ans=diff/limit+1;
        
        
        return ans;
        
        
        
        
    }
};