class RandomizedSet {
public:
    
    unordered_set<int> mp;
    
    RandomizedSet() 
    {
        
    }
    
    bool insert(int val) 
    {
        if(mp.find(val)!=mp.end())
        {
            return false;
        }
        
        mp.insert(val);
        
        return true;
    }
    
    bool remove(int val) 
    {
        if(mp.find(val)!=mp.end())
        {
            mp.erase(val);
            return true;
        }
        
        return false;
    }
    
    int getRandom() 
    {
        auto p = mp.begin();
        advance(p , rand() % mp.size());
        return *p;
        
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */