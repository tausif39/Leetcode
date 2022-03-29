class Solution {
public:
    int sumBase(int n, int k) 
    {
        int sum=0;
          
            vector<int> v;
            
        while(n>=k)
        {
            int rem= n%k;
            v.push_back(rem);
            
            n/=k;
            
            
        }
        
        
        if(n)sum+=n;
        
        for(auto n:v)sum+=n;
        
        
        return sum;
        
        
        
    }
};