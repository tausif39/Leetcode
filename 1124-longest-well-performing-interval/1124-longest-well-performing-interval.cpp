class Solution {
public:
    
    int longestWPI(vector<int>& hours) 
    {
        
        // int maxi=0;
        map<int , int> mp;
        // mp[0]=-1;
        
        int sum=0;
        
        int maxii=0;
        
        for(int i=0;i<hours.size();i++)
        {
            
             sum+=(hours[i]>8)?1:-1;
            
            if(sum>0)maxii=i+1;
            
            if(mp.find(sum)==mp.end())mp[sum]=i;
            
            if(sum<=0)
            {
                if(mp.find(sum-1)!=mp.end())
                {
                    maxii=max(maxii,i-mp[sum-1]);
                }
                
            }
            
            
  
        }
        
        return maxii;
        
        
    }
};