class Solution {
public:
    
    
    bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) 
    {
        
        int minX=abs(fx-sx);
        int minY=abs(fy-sy);
        
        
        if(minX==0 and minY==0 and t==1)return false;
        
        
        return (min(minX,minY) + abs(minX-minY) )<=t;
        
        
        
    }
};