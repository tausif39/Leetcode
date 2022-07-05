class Solution {
public:
    int minDeletion(vector<int>& nums) 
    {
        int n=nums.size();
        vector<bool > vis(n,false);
        
        int j=0,i=0;
        
        while(i<n-1)
        {
            if(j%2==0 and nums[i]==nums[i+1])
            {
                
                vis[i]=true;
                j--;
                
            }
            
        
            
            j++;
            i++;
            
        }
        
        
        
        int cnt=0;
        
        int fal=0;
        
        for(auto i: vis)
        {
            if(i)cnt++;
            else fal++;
        }
        
        if(fal%2!=0)cnt++;
        
        return cnt;
        
        
        
        
    }
};