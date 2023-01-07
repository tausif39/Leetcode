class Solution {
public:
    
    static bool cmp(vector<int>&a ,vector<int> & b )
    {
        
        return a[1]<b[1];
    }
    
    
    int eraseOverlapIntervals(vector<vector<int>>& intervals) 
    {
      
        sort(intervals.begin(),intervals.end(),cmp);
        
        
        int maxi=intervals[0][1];
        
        int cnt=0;
        
        
        for(int i=1;i<intervals.size();i++)
        {
            
            if(intervals[i][0]>=maxi)
            {
                maxi=intervals[i][1];
                continue;
            }
            
            cnt++;
            
            maxi=min(intervals[i][1],maxi);
            
        }
        
        return cnt;
        
    }
};