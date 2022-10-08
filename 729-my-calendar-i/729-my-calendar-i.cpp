class MyCalendar {
public:
    
    map<pair <int , int> , bool> mp;
    
    MyCalendar() {
        
    }
    
    bool book(int start, int end)
    {    
        
        for(auto [x,y] :mp)
        {
            
            if(start>=x.first and start<x.second)
            {
                return false;
            }
            
            if(end>x.first and end<x.second)
            {
                return false;
            }
            
            if(x.first>=start and x.first<end)
            {
                    return false;
            }
            
            if(x.second>start and x.second<end)
            {
                    return false;
            }
            
      
        }
        
        
        mp[{start,end}] = true;
        
        return true;
        
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */