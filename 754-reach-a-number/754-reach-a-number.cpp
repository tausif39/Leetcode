class Solution {
public:
    
    
    int reachNumber(int target) 
    {
        target=abs(target);
        
        int cnt=0;
        
        int i=1;
        
        while(cnt<target)
        {
            cnt+=i;
            i++;   
        }
    
        
        while((cnt-target)%2!=0)
        {
            cnt+=i;i++;
        }
        
        return i-1;
        
        
    }
};