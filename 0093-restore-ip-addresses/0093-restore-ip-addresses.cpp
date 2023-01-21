class Solution {
public:
    //bt
    vector<string> res;
    void bt(string& s, string path, int pos, int step){
        int n = s.size();
        // one step: we get one section from 0-255. 4 step make a valid ip
        if(step == 4 && pos == n) {res.push_back(path); return;}
        if(step >=4 || pos >= n) return ;
        path = path.empty() ? path: path+"."; 
        step+=1;

        //three conditions.
        // 1 word 
        if(pos+1<=n)
            bt(s,path+s.substr(pos,1), pos+1, step );
        //2 words , 0d is invalid
        if(pos+2<=n && s[pos]!='0')
            bt(s,path+s.substr(pos,2), pos+2, step );
        //3 words, 0dd and >255 is invalid.
        if(pos+3<=n && s[pos]!='0' && stoi(s.substr(pos, 3) ) <=255)
            bt(s,path+s.substr(pos,3), pos+3, step );

    }
    vector<string> restoreIpAddresses(string s) {
        string path ;
        bt(s, path, 0, 0);
        return res;
    }
};