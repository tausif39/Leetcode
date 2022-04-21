class MyHashMap {
public:
    map<int,int> mp;
    
    
    MyHashMap() {
        
    }
    
    void put(int key, int value) 
    {
        mp[key]=value;
        
    }
    
    int get(int key) 
    {
        if(mp.find(key)==mp.end())return -1;
        // if(mp[key]==0)return -1;
        return mp[key];
        
    }
    
    void remove(int key) 
    {
        mp[key]=-1;
        
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */