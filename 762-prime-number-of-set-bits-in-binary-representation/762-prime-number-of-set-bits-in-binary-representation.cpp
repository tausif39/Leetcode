class Solution {
public:
    
    int helper(int n)
    {
        return __builtin_popcount(n);
    }
    
    bool helper2(int n)
    {
        vector<int> v={2,3,5,7,11,13,17,19,23,29,31,37,41};
        
        for(int j=0;j<v.size();j++)
        {
            if(v[j]==n)return true;

        }
        
        return false;
        
    }
    
    
    int countPrimeSetBits(int left, int right) 
    {
        
        
        int cnt=0;
        
        for(int i=left;i<=right;i++)
        {
            int digit=i;
            int ok=helper(digit);
            
            if(helper2(ok))cnt++;
            
            
        }
        
        return cnt;
        
    }
};