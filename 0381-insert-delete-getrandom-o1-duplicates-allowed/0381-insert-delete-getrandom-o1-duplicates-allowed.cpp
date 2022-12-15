class RandomizedCollection {
public:
    
    // unordered_set<int> mp;
    
    unordered_map<int , int> mp1;
    vector<int> v;
    
    RandomizedCollection() 
    {
        
    }
    
    bool insert(int val) 
    {
        auto it = find(v.begin() , v.end() , val);
        
        if(it == v.end())
        {
            v.push_back(val);
            
            return true;
            
        }
        
        
        v.push_back(val);
        
        return false;
        
//         if(v.count(v.begin(),))
//         {
//              mp1[val]++;
//              v.push_back(val);
//             return false;
//         }
        
//         // mp.insert(val);
        
//         mp1[val]++;
        
//         return true;
    }
    
    bool remove(int val) 
    {
        auto it = find(v.begin(), v.end() , val);
        
        if(it==v.end())
        {
            return false;
        }
        
        v.erase(it);
        
        return true;
        
    }
    
    int getRandom() 
    {
        
        
//         for(auto it: mp1)
//         {
//             while(it.second--)
//             {
                
               
                
//             }
//         }
        
        auto p = v.begin();
        
        advance(p , rand() % v.size());
        return *p;
        
    
    }
};

/**
 * Your RandomizedCollection object will be instantiated and called as such:
 * RandomizedCollection* obj = new RandomizedCollection();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */