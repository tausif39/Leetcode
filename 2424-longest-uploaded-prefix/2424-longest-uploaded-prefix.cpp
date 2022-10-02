class LUPrefix {
public:
    
    
    vector<int> v;
    
    int cnt;
    
    int m;
    
    LUPrefix(int n)
    {
        v.resize(n+1,0);
        cnt=1;
        m=n;
        
    }
    
    void upload(int video) 
    {
        v[video]=1;
        
        if(cnt==video)cnt++;
        
        while(cnt<=m and v[cnt]==1)
        {
            cnt++;
        }
        
        
        
    }
    
    int longest()
    {
        return cnt-1;
        
    }
};

/**
 * Your LUPrefix object will be instantiated and called as such:
 * LUPrefix* obj = new LUPrefix(n);
 * obj->upload(video);
 * int param_2 = obj->longest();
 */