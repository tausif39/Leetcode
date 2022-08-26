class Solution {
public:
    
    bool checkPowersOfThree(int n) 
    {
        
        while(n)
        {
            int rem=n%3;
            
            n/=3;
            
            if(rem==2)return false;
            
        }
        
        
        return true; 
    }
};