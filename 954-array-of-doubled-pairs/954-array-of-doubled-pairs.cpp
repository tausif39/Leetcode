
class Solution {
public:
    bool canReorderDoubled(vector<int>& c) {
         unordered_map<int,int>mp;
        for(auto i:c) {
            mp[i]++;
        }
        sort(c.begin(),c.end());
        for(auto i:c) {
            if(mp[i]) {
                if(mp[2*i])
                 {
                mp[2*i]--;
                 mp[i]--;}
                else if(i%2==0 && mp[i/2])
                    {
                mp[(i/2)]--;
                 mp[i]--;}
                else 
                    return false;
            }
        }
        return true;
    }
};