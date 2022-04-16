class Solution {
public:
    int addRungs(vector<int>& rungs, int dist) 
    {
        // int step=0;
        int cnt=0;
        
        for(int i=0;i<rungs.size();i++)
        {
            if(i==0)
            {
                if(rungs[i]>dist)
                {
                    if(rungs[i]%dist==0)
                    {
                        cnt+=(rungs[i]/dist-1);
                        
                    }
                    
                    else
                    {
                        cnt+=(rungs[i]/dist);
                    }
                    
                }
            }
            
          else if((rungs[i]-rungs[i-1])>dist)
            {
                int z=rungs[i]-rungs[i-1];
              if(z%dist!=0)
              {
                cnt+=z/dist;
                  
              }
              
              else
              {
                  cnt+=z/dist-1;
              }
                

            }
            
        }
        
        
        return cnt;
        
    }
};