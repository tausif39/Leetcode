class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) 
    {
        int n=nums.size();
        vector<int long long> pre(n),suff(n);
        
        pre[0]=nums[0];
        
        
        for(int i=1;i<nums.size();i++)
        {
            pre[i]=pre[i-1]+nums[i];
        }
        
        int long long sum= pre[nums.size()-1];
        
        for(int i=0;i<nums.size();i++)
        {
            suff[i]=sum-nums[i];
            sum-=nums[i];
        }
        
        int mini=INT_MAX;
        
        vector<int> ans;
        
        for(int i=0;i<nums.size();i++)
        {
            int d1=i+1;int d2=n-i-1;
            int p,s=0;
            
            p= pre[i]/d1;
            
            if(d2!=0)
            {
             s= suff[i]/d2;
                
            }
            
             int avg=abs(p-s);
             ans.push_back(avg);
             mini=min(avg,mini);
                         
        }
                         
         for(int i=0;i<ans.size();i++)                 
         {
             if(mini==ans[i])return i;

         }
        
        
        return -1;
        
        
    }
};