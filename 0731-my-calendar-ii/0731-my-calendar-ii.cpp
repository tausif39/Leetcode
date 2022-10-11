class MyCalendarTwo {
    
    private: map<int , int> mp;
    
public:
    MyCalendarTwo() {
        
    }
    
    bool book(int start, int end) 
    {
        mp[start]++;
        mp[end]--;
        
        int sum=0;
        
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            sum+=it->second;
            
            if(sum>2)
            {
                mp[start]--;
                mp[end]++;
                return false;
            }
            
        }
        
        return true;
        
        
    }
};

/**
 * Your MyCalendarTwo object will be instantiated and called as such:
 * MyCalendarTwo* obj = new MyCalendarTwo();
 * bool param_1 = obj->book(start,end);
 */