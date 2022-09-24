class Solution {
public:
    
    string DecimalToBinary(int num)
    {
       string str;
          while(num)
          {
              if(num & 1) // 1
                str+='1';
              else
                str+='0';
              num>>=1; 
                  // Right Shift by 1 

         }  
        
      reverse(str.begin(),str.end());
      return str;
        
    }
    
    long long MOD=1e9+7;
    
    void help(string &s , int n)
    {
        
        for(int i=1;i<=n;i++)
        {
            
            string z=DecimalToBinary(i);
            s+=z;
        }
        
    }
    
    int concatenatedBinary(int n) 
    {
        
            // cout<<(12);
        string s;
        
//         help(s,n);
        
        // string ans;
        
         help(s,n);
         
        // cout<<to_string(12);
        
         long long sum=0;
        
         long long base=1; 
        
        // cout<<s;
        
        for(int i=s.size()-1;i>=0;i--)
        {
            
            int digit;
            if(s[i]=='0')digit=0;
            else digit=1;
            sum+=(long long)(base*digit);
            base*=2;
            base%=MOD;
        }
        
            sum=sum%MOD;
         
        return sum;
        
        
    }
};