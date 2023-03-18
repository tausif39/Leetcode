class BrowserHistory {
public:
    vector<string>v;
    int ind=0;
    BrowserHistory(string homepage) {
        v.push_back(homepage);
        ind=0;
    }
    
    void visit(string url) {
        while(v.size()!=ind+1){
            v.pop_back();
        }
        v.push_back(url);
        ind++;
    }
    
    string back(int steps) {
        if(steps>ind){
            ind=0;
        }
        else{
            ind-=steps;
        }
        return v[ind];
    }
    
    string forward(int steps) {
        if(ind+steps<v.size()){
            ind+=steps;
        }
        else{
            ind=v.size()-1;
        }
        return v[ind];
    }
};