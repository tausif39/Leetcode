class Solution {
public:
    
    int numberdigit(int num)
    {
        int cnt=0;
        
        while(num)
        {
            num/=10;
            cnt++;
        }
        
        return cnt;
    }
    
    
    void help(int n, int k, int cnt, vector<int> &v)
    {
        
        if(numberdigit(cnt)==n)
        {
//             int last_digit=cnt%10;
//             if(abs(last_digit-k)==)
            
            v.push_back(cnt);
            
            return;
        }
        
        
        for(int i=0;i<10;i++)
        {
            int last_digit=cnt%10;
            
            if(abs(last_digit-i)==k)
            {
                help(n,k,cnt*10+i,v);
            }
            
        }
        
        
        
    }
    
    
    
    vector<int> numsSameConsecDiff(int n, int k) 
    {
        
        vector<int> v;
        
        for(int i=1;i<10;i++)
        {
            help(n,k,i, v);
            
        }
        
        
        return v;
        
    }
};