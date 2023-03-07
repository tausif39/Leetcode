class Solution {
public:
    long long coloredCells(int n)
    {
        long long k=n;
        
        // if(n==1)return 1;
        
        
        
        return k*k + (k-1)*(k-1);
    }
};