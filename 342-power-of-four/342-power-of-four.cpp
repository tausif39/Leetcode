class Solution {
public:
    bool isPowerOfFour(int n)
    {
        
        
        if(n==1) return true;
         if(n<4) return false;
        // int x=log(a) / log(b);
        
         if(ceil(log10(n) / log10(4))==floor(log10(n) / log10(4)))
         {
             return true;
         }
        
            return false;
        
        
        
        
    }
};