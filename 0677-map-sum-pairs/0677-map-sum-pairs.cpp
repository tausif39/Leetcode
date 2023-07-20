class MapSum {
public:
    
    vector<pair<string, int>> vp;
    
    
    MapSum() 
    {   
    }
    
    void insert(string key, int val)
    {
        
        bool flag=true;
        
        
        for(auto &it:vp)
        {
            if(it.first==key)
            {
                
                flag=false;
                
                it.second=val;
                
            }
            
        }
        

        if(flag)vp.push_back({key,val});
        
    }
    
    int sum(string prefix) 
    {
        
        int ans=0;
        
        for(auto it:vp)
        {
            
            string a=it.first;
            
            if(prefix.size()>a.size())continue;
            
            int j=0;
            
            while(j<prefix.size())
            {
                if(prefix[j]!=a[j])break;

                j++;
            }
            
            if(j==prefix.size())ans+=it.second;
            
            
            
        }
        
        
        return ans;
        
        
        
    }
};

/**
 * Your MapSum object will be instantiated and called as such:
 * MapSum* obj = new MapSum();
 * obj->insert(key,val);
 * int param_2 = obj->sum(prefix);
 */