class Solution {
public:
    int trap(vector<int>& nums)
    {
        
        int n=nums.size();
        
        vector<int >pre(n,0) ,suff(n,0);
        
        int start=nums[0];
        
        pre[0]=start;
        
        for(int i=1;i<n;i++)
        {
            pre[i]= max(pre[i-1],nums[i]);
        }
        
        start=nums[n-1];
        
        suff[n-1]=start;
        
        
        for(int i=n-2;i>=0;i--)
        {
            suff[i]= max(suff[i+1],nums[i]);
        }
        
        int area=0;
        
        // for(int i=0;i<n;i++)
        // {
        //     cout<<suff[i]<<" ";
        // }
        
        
        for(int i=0;i<n;i++)
        {
            area+=min(suff[i],pre[i]) -  nums[i];
        }
        
        
        
        return area;
        
        
        
    }
};