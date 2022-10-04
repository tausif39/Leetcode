class Solution {
public:
    long long taskSchedulerII(vector<int>& tasks, int space)
    {
        
        map<long long  ,long long > mp;
        // int cnt=0;
        
        long long days=0;
        
        
        for(int i=0;i<tasks.size();i++)
        {
            if(mp.find(tasks[i])==mp.end())
            {
                
              mp[tasks[i]]=++days;
                continue;
            }
            
            
            days=max(days+1,mp[tasks[i]]+space+1);
            
            mp[tasks[i]]=days;
            
           
            
        }
        
        return days;
        
        
        
    }
};