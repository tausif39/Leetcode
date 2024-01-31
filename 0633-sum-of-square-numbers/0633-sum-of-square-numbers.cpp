class Solution {
public:
    
    
    bool judgeSquareSum(int c) 
    {
        
        int long long l=0;
        int long long r=sqrt(c);
        
        cout<<r;
        
        while(l<=r)
        {
            
            int long long number = l*l + r*r;
            
            if(number<c)
            {
                
                l++;
                
            }
            else if(number>c)
            {
                
                r--;
            }
            else
            {
                
                return true;
            }
            
            
            
            
        }
        
        
        return false;
        
        
        
    }
};