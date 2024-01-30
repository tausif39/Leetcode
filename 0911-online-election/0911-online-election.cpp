class TopVotedCandidate {
public:
    vector<int>time;
    vector<int>ans;
    TopVotedCandidate(vector<int>& persons, vector<int>& times) {
        int n = persons.size();
        time = times;
        int mxp = -1;
        unordered_map<int,int>mp;
        for(int i=0; i<n; i++){
            mp[persons[i]]++;
            if(mp[persons[i]] >= mp[mxp]){
                mxp = persons[i];
            }
            ans.push_back(mxp);
        }
    }
    
    int q(int t) {
        int idx = (upper_bound(time.begin(),time.end(),t) - time.begin()) - 1;
        return ans[idx];
    }
};