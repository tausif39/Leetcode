class Solution {
public:
    string reorganizeString(string s) {
        map<char,int> mp;
        for(char c: s){
            mp[c]++;
        }
        priority_queue<pair<int,char>> pq;

        for(auto x: mp){
            pq.push({x.second,x.first});
        }
        string ans = "";

        while(!pq.empty()){
            pair<int,char> p1 = pq.top();
            pq.pop();
            ans.push_back(p1.second);
            if(pq.empty()){
                if(p1.first - 1 > 0) pq.push({p1.first-1,p1.second});
                break;
            }
            pair<int,char> p2 = pq.top();
            ans.push_back(p2.second);
            pq.pop();
            if(p2.first-1 > 0) pq.push({p2.first-1,p2.second});
            if(p1.first-1 > 0) pq.push({p1.first-1,p1.second});
        }
        if(!pq.empty()){
            return "";
        }
        return ans;

    }
};