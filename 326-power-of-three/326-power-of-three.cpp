class Solution {
public:
    bool isPowerOfThree(int n) 
    {
        if(n==1) return true;
         if(n<3) return false;
        // int x=log(a) / log(b);
        
         if(ceil(log10(n) / log10(3))==floor(log10(n) / log10(3)))
         {
             return true;
         }
        
            return false;

    }
};