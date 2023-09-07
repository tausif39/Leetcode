class Solution {
public:
    
    int minimumSum(int n, int k)
    {
        
        
        unordered_set<int> s;
        
        int i=1;
        
        int sum=0;
        
        
        while(n)
        {
            
            if(s.find(k-i)==s.end())
            {
                s.insert(i);
                sum+=i;
                n--;
            }
            
                i++;
            
        }
        
        
        return sum;
        
        
        
    }
};