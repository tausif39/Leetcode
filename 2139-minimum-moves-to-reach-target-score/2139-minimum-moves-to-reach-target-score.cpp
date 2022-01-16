class Solution {
public:
    int minMoves(int target, int maxDoubles)
    {
        int long long cnt=0;
        // maxDoubles--;
        if(target==1) return 0;
//         if(maxDoubles==0) return target-1;
        
        while(target>1)
        {
            if(maxDoubles==0)
            {   int steps=target-1;
                cnt+=steps;
             return cnt;
                
            }
            if(maxDoubles and target%2==0)
            {
                cnt++;
                target/=2;
                maxDoubles--;
            }
            
            if(!maxDoubles and target%2==0 )
            {
                cnt++;
                target-=1;
            }
            
            if((target%2!=0 and !maxDoubles) || (target%2!=0 and maxDoubles ))
           {
               cnt++;
               target-=1;

           }
            
            
            
        }
        return cnt-1;
        
    }
               
};