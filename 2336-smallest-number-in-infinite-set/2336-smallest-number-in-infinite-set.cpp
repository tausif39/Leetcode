class SmallestInfiniteSet {
public:
    
    vector<int> v,okay;
    
    
    
    SmallestInfiniteSet() 
    {
        v.resize(1001);
        
        for(int i=0;i<1001;i++)v[i]=i+1;
            
        reverse(v.begin(),v.end());
        
        
    }
    
    int popSmallest() 
    {
        int smallest=v.back();
        v.pop_back();
        okay.push_back(smallest);
        
        // sort 
        return smallest;
    }
    
    void addBack(int num) 
    {
        bool flag=false;
        
        int i=0;
        
        {
        for(;i<okay.size();i++)
            if(okay[i]==num)
            {
                flag=true;break;
            }
        }
        
        if(flag)
        {
            okay.erase(okay.begin()+i);
            v.push_back(num);
            sort(v.begin(),v.end(),greater<int>());
            
        }
        
        
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */