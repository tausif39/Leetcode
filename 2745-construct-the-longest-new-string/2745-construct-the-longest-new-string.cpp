class Solution {
public:
    int longestString(int x, int y, int z) 
    {
        
        int cnt=0;
        
        if(x<y)
        {
            swap(x,y);
        }
        
        
        cnt+=(2*y);
        
        x-=y;
        
        if(x)cnt++;
        
        // cout<<cnt;
        
        return 2*(cnt+z);
        
    }
};