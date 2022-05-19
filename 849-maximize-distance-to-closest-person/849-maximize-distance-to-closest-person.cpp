class Solution {
public:
    int maxDistToClosest(vector<int>& seats) 
    {
        int distance=1;
        
        
        int n = seats.size();
        
        for(int i=0;i<seats.size();i++)
        {
            
            if(seats[i]==0)
            {
                int r=INT_MAX;
                int l=INT_MAX;
                
                for(int j=i+1;j<seats.size();j++)
                {
                   if(seats[j]==1) 
                   {
                       r=j-i;
                       break;
                   }
                }
                
                for(int j=i-1;j>=0;j--)
                {
                    if(seats[j]==1) 
                   {
                       l=i-j;
                        break;
                   }
                }
                
                
            int dist=min(l,r);
            
        distance=max(distance,dist);
            }
        
            
            
        }
        
        return distance;
        
    }
};