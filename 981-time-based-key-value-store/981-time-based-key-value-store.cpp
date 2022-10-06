class TimeMap {
public:
    
    map<string ,map<int,string>> mp;
    
    
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp)
    {
        mp[key][timestamp]=value;
        
    }
    
    string get(string key, int timestamp) 
    {
       string ans=mp[key][timestamp];
        
        if(ans=="")
        {
            
            for(int i=timestamp-1;i>=1;i--)
            {
                
                string ans1;
                
                ans1=mp[key][i];
                
                if(ans1!="")return ans1;
            }
            
            
        }
        
        return ans;
        
        
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */