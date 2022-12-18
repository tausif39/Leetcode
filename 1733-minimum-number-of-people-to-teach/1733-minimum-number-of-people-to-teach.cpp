class Solution {
public:
    int minimumTeachings(int n, vector<vector<int>>& languages, vector<vector<int>>& friendships) {
        int m=languages.size();
        //keep track if person can speak language already
        vector<vector<bool>> can_speak(m+1,vector<bool>(n+1,false));
        for(int i=0;i<m;i++){
            for(int j=0;j<languages[i].size();j++){
                can_speak[i+1][languages[i][j]]=true;
            }
        }
        set<int> v;
        for(int i=0;i<friendships.size();i++){
            bool flag=true;
            for(int j=1;j<=n;j++){
                if(can_speak[friendships[i][0]][j]&&can_speak[friendships[i][1]][j]){
                    flag=false;
                    break;
                }
            }
            //if need some common language
            if(flag){
                v.insert(friendships[i][0]);
                v.insert(friendships[i][1]);
            }
        }
        vector<int> cnt(n+1,0);
        int ma=0;
        //vote for your language
        for(auto it:v){
            for(int j=0;j<languages[it-1].size();j++){
                cnt[languages[it-1][j]]++;
                ma=max(ma,cnt[languages[it-1][j]]);
            }
        }
        //others will learn 
        return v.size()-ma;;
    }
};