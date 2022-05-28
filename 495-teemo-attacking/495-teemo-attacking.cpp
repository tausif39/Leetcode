class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) 
    {
        
        int time=0;
        
        int i=0;
        
        for(i=0;i<timeSeries.size()-1;i++)
        {
              if(timeSeries[i]+duration-1<timeSeries[i+1] )
              {
                  int ok=abs((timeSeries[i])-(timeSeries[i]+duration));
                 time+=ok;
              }

              else
              {
                  time+=timeSeries[i+1]-timeSeries[i];          
              }
            
            
        }
        
        
        if(i==timeSeries.size()-1)
        {
            int ok=abs((timeSeries[i])-(timeSeries[i]+duration));
            time+=ok;
        }
        
        
        return time;
        
        
    }
};