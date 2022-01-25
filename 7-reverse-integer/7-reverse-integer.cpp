class Solution {
public:
    int reverse(int x) 
    {
        string a= to_string(x);
        int long long num=0;
        // reverse(a.begin(), a.end());
        // string res;
        // for(int i=0;i<a.aize();i++)
        // {
        //     if()
        // }
        int long long base=1;
        for(int long long i=0;i<a.size();i++)
        {
            if(a[i]>='0' && a[i]<='9')
            {
                int long long  last=a[i]-'0';
                int long long digit=base*last;
                num+=digit;

                base*=10;
            }
            
            if(num<=INT_MIN || num>=INT_MAX) return 0;
            
        }
        if(x<0)
        {
            return -num;
        }
        return num;
        
    }
};