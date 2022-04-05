class Solution {
public:
    int convertTime(string current, string correct) 
    {
        int h=0;
        int m=0;
        
        h+=current[1]-'0' + 10*(current[0]-'0');
        
        m+=current[4]-'0' + 10*(current[03]-'0');
        
        
        
         int h1=0;
        int m1=0;
        
        h1+=correct[1]-'0' + 10*(correct[0]-'0');
        
        m1+=correct[4]-'0' + 10*(correct[03]-'0');
        
        int time=0;
        
        time+= 60*h + m;
        
        
        int time1=0;
        
        time1+= 60*h1 + m1;
        
        
        int cnt=0;
        
        
        int diff=time1- time;
        
        
        
        while(diff>=60)
        {
            diff-=60;
            cnt++;
        }
        
        while(diff>=15)
        {
            diff-=15;
            cnt++;
        }
        
        while(diff>=5)
        {
            diff-=5;
            cnt++;
        }
        
        while(diff>=1)
        {
            diff-=1;
            cnt++;
        }
        
        
        
        
        
        
        
        return cnt;
    }
};