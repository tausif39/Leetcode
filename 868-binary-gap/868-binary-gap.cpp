class Solution {
public:
    int binaryGap(int n) 
    {
        
        
        int dis=0;
        int cnt=0;
        bool start =false;
        
        while(n)
        {
            if((n&1)==1)start=true;
            
            if((n&1)==1 and start)
            {
                dis=max(dis,cnt);
                cnt=1;
            }
            
            else
            {
                if(start)cnt++;
                
            }
            
            
            n>>=1;
            
        }
        
        
        
        return dis;
        
    }
};
//         int dis=0;
//         int cnt=1;
//         for(int i=0;i<v.size();i++)
//         {
            
            
            
            
//             else cnt++;
            
            
            
            
//         }