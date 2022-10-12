class Solution {
public:
    
    bool power2(string a , string b)
    {
        sort(a.begin(),a.end());
        
        sort(b.begin(),b.end());

        return a==b;
        
    }
    
    
    
    bool reorderedPowerOf2(int n) 
    {
        string a=to_string(n);
        
        
        for(int i=0;i<31;i++)
        {
            long mask=1<<i;
            
            string b=to_string(mask);
            
            if(power2(a,b))return true;
            
            
        }
        
        return false;
        
    }
};