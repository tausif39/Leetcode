class RangeFreqQuery {
public:
    
    
vector<int>adj[100001];

RangeFreqQuery(vector<int>& arr) {
    
    for(int i=0;i<arr.size();i++)
    {
        adj[arr[i]].push_back(i);
    }
    
}

int query(int left, int right, int value) {
    
    left=lower_bound(adj[value].begin(),adj[value].end(),left)-adj[value].begin();
    right=upper_bound(adj[value].begin(),adj[value].end(),right)-adj[value].begin();
    
    return right-left;
}
};

/**
 * Your RangeFreqQuery object will be instantiated and called as such:
 * RangeFreqQuery* obj = new RangeFreqQuery(arr);
 * int param_1 = obj->query(left,right,value);
 */