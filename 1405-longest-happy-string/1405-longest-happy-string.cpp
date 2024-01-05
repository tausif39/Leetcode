class Solution {
public:
    string longestDiverseString(int a, int b, int c) 
    {
        
        priority_queue<pair<int,char>> maxH;
        
        if(a>0)
        {
            maxH.push({a,'a'});
        }
        if(b>0)
        {
            maxH.push({b,'b'});
        }
        if(c>0)
        {
            maxH.push({c,'c'});
        }
        
        
        string ans="";
        
        
        while(maxH.size()>1)
        {
            char c1=maxH.top().second;
            int f1=maxH.top().first;
            maxH.pop();
            char c2=maxH.top().second;
            int f2=maxH.top().first;
            maxH.pop();
            
            if(f1>=2)
            {
                ans+=c1;
                ans+=c1;
                f1=f1-2;
            }
            else
            {
                ans+=c1;
                f1--;
            }
            if(f2>=2 && f2>=f1)
            {
                ans+=c2;
                ans+=c2;
                f2=f2-2;
            }
            else
            {
                ans+=c2;
                f2--;
            }
            if(f1>0)
            {
                maxH.push({f1,c1});
            }
            if(f2>0)
            {
                maxH.push({f2,c2});
            }
        }
        
        
        if(maxH.size()==1)
        {
            int f1=maxH.top().first;
            char c1=maxH.top().second;
            if(f1>=2)
            {
                ans+=c1;
                ans+=c1;
            }
            else
            {
                ans+=c1;
            }
        }
        return ans;
    }
};

