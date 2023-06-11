class SnapshotArray {
public:
    vector<map<int,int>> vec;
    int snapTime;
    SnapshotArray(int length) {
        vec.resize(length);
        snapTime = 0;
        for(int i = 0; i < length; i++)
            vec[i][0] = 0;
    }
    
    void set(int index, int val) {
        vec[index][snapTime] = val;
    }
    
    int snap() {
        return snapTime++;
    }
    
    int get(int index, int snap_id) {
        if(vec[index].find(snap_id) != vec[index].end())
            return vec[index][snap_id];
        auto x = --vec[index].upper_bound(snap_id);
        return x->second;
    }
};