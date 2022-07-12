class Solution {
public:
    bool static seqSame(string s1,string s2){
        string a,b;
        for(auto it : s1) if(it!='_') a+=it;
        for(auto it : s2) if(it!='_') b+=it;
        return a==b;
    }
    bool canChange(string start, string target) {
        int n = start.length();
        if(!seqSame(start,target)) return false;
        vector<int> l1,l2,r1,r2;
        
        for(int i=0 ; i<n ; i++){
            if(start[i]=='L') l1.push_back(i);
            if(start[i]=='R') r1.push_back(i);
            if(target[i]=='L') l2.push_back(i);
            if(target[i]=='R') r2.push_back(i);
        }
        
        for(int i=0 ; i<l1.size() ; i++) if(l1[i]<l2[i]) return false;
        for(int i=0 ; i<r1.size() ; i++) if(r1[i]>r2[i]) return false;
        
        return true;
    }
};