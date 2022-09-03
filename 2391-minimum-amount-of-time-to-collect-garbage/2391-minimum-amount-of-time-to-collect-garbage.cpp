class Solution {
public:
    int garbageCollection(vector<string>& v, vector<int>& t) {
        int p=0;
        int m=0;
        int g=0;
        int n=v.size();
        
        for(int i=n-1;i>=0;i--)
        { 
            int cntp=0,cntm=0,cntg=0;
            
            for(int j=0;j<v[i].size();j++)
            {
                
                if(v[i][j]=='M')cntm++;
                else if(v[i][j]=='G')cntg++;
                else cntp++;
            }
            
                p+=cntp;
                m+=cntm;
                g+=cntg;
                if(i==0)continue;
                if(p>0)p+=t[i-1];
                if(m>0)m+=t[i-1];
                if(g>0)g+=t[i-1];
            
        }
        
        return p+m+g;
    }
};