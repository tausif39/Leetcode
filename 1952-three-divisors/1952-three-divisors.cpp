class Solution {
public:
    bool isThree(int n) 
    {
       
       int cnt=2;
        for(int i=2;i<=sqrt(n);i++)
        {
           if(n%i==0 )
           {
              if(n/i!=i) 
              {
                  cnt+=2;
              }
               else
               {
                   cnt++;
               }
           }
            
            
        
        }
        return cnt==3;
        
        
        
    }
};