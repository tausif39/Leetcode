class Solution {
public:
    
    string fun(string s, string t) {
        for(int i=0; i<s.size(); i++) {
            string x="";
            for(int j=i; j<s.size(); j++) {
                    x+=s[j];
                    if(x.size()>t.size()) break;
                    if(x==t) return s;
            }
            
        }
        int a=s.size(),b=t.size();
            string x="",y="";
        int c=0;
        bool f=true;
            for(int i=0; i<min(a,b); i++) {
                x+=s[a-i-1];
                y+=t[i];
                string p=x;
                reverse(p.begin(),p.end());
                if(y==p) c=i,f=false;
                
            }
            if(!f) c++;
            
            for(int i=c; i<t.size(); i++) {
                s+=t[i];
            }
            
            return s;
    }
    
    string minimumString(string a, string b, string c) {
        string s[3]={a,b,c};
        vector<string>v;
        int mn=1e9;
        for(int i=0; i<3; i++) {
            for(int j=0; j<3; j++) {
                for(int k=0; k<3; k++) {
                    if(i!=j && j!=k && i!=k) {
                        string s1=fun(s[i],s[j]);
                        //cout<<s[i]<<" "<<s[j]<<" "<<s1<<endl;
                        string s2=fun(s1,s[k]);
                        int sz=s2.size();
                        mn=min(mn,sz);
                        v.push_back(s2);
                    }
                }
            }
        }
        string ans;
        set<string>st;
        for(int i=0; i<v.size(); i++) {
            if(mn==v[i].size()) {
                st.insert(v[i]);
            }
        }
        ans=*st.begin();
        return ans;
    }
};