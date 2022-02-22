class Solution {
public:
    int titleToNumber(string columnTitle) 
    {
        
        vector<char> alp;
        vector<int long long> v;
        
        for(char i='a'; i<='z';i++)
        {
            alp.push_back(i);
            
        }
        
        int long long base=1;
        for(int i=0;i<7;i++)
        {
            v.push_back(base);
            base*=26;
        }
        
        // for(int i=1;i<=26;i++)
        // {
        //     v.push_back(i);
        // }
        
        int long long sum=0;
        
        reverse(columnTitle.begin(),columnTitle.end());
        
        for(int i=0;i<columnTitle.size();i++)
        {
            int k=columnTitle[i]-'A'+1;
            int long long  d=v[i]*k;
            
            sum+=d;
            
            
        }
        
        
        
        
        
        return sum;
        
    }
};