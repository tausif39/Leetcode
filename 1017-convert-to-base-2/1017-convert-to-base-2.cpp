class Solution {
public:
    string baseNeg2(int n) 
    {
        if(n==0)return "0";
        
        string s;
        
        while(n)
        {
            int rem=n%(2);
            
            n/=-2;
            if(rem<0)
            {
                
                rem =rem +2;
                
                n+=1;
                
            }
            
            s+=to_string(rem);
            
        }
       
        reverse(s.begin(),s.end());
        
        return s;
    }
};