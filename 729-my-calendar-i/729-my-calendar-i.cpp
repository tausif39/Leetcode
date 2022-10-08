class MyCalendar {
private: vector<pair<int,int>> vp;
public:
    MyCalendar() {}
    
    bool book(int start, int end) {
        for(auto p: vp) if(max(p.first, start) < min(p.second, end)) return false;
        vp.push_back({start,end});
        return true;
    }
};