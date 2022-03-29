class Solution {
public:
    string convertToBase7(int num) 
    {
        if(num==0)return "0";
        string s;
        
        
        bool flag=true;
        
        if(num<0)
        {
            num*=-1;
            flag=false;
        }
        
        while(num)
        {
           int rem=num%7;
            num/=7;
            
            s+=to_string(rem);
            
        }
        if(flag)reverse(s.begin(),s.end());
        else
        {
            s.push_back('-');
            reverse(s.begin(),s.end());
            
        }
        
        return s;
        
        
    }
};