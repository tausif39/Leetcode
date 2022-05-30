class Solution {
public:
    int maxConsecutive(int bottom, int top, vector<int>& special) 
    {
        sort(special.begin(),special.end());
        
        int dist=special[0]-bottom;
        
        int i=0;
        
        for(i=0;i<special.size()-1;i++)
        {
            int ok=special[i+1]-special[i]-1;
            
            dist=max(dist,ok);
            
        }
        
        int z=abs(special[i]-top);
        
        // cout<<z;
        dist=max(dist,z);
        
        return dist;
            
            
        
    }
};