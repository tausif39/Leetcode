class Solution {
public:
    int brokenCalc(int startValue, int target) 
    {
        if(startValue>=target)
        {
            return startValue-target;
        }
        
        
        int long long t=target;
        int long long s=startValue;
        int cnt=0;
       
        
            // if(t%2!=0)
            // {
            //     t+=1;cnt++;
            // }
            
            while(t>s )
            {
                if(t%2!=0)
                {
                    t+=1;cnt++;
                }
                t/=2;
                cnt++;
            }
            
            
            
            if(t<s)
            {
                cnt+=s-t;
            }
            
            
            
      
        
        return cnt;
        
        
    }
};