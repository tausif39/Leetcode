class MyCalendarThree {
    private: map<int , int > mp;
    
public:
    MyCalendarThree()
    {
        
        
    }
    
    int book(int start, int end) 
    {
        mp[start]++;
        mp[end]--;
        
        int sum=0;
        
        int k=0;
        
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            sum+=it->second;
            
            k=max(k,sum);
               
        }
        
        return k;
        
    }
};

/**
 * Your MyCalendarThree object will be instantiated and called as such:
 * MyCalendarThree* obj = new MyCalendarThree();
 * int param_1 = obj->book(start,end);
 */