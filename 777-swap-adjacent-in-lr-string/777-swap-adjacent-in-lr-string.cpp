class Solution {
public:
   bool canTransform(string s, string target) {
        if(s.size()!=target.size()) return false;
        int n = s.length();
        int i=0;
        int j=0;
        while(i<n || j<n){
            while(i<n && target[i]=='X') i++;
            while(j<n && s[j]=='X') j++;
            
            if(i==n || j==n){
                return i==n && j==n;
            }
            
            if(s[j]!=target[i]) return false;
            
            if(target[i]=='L'){
                if(j<i) return false;
            } 
            else {
                if(i<j) return false;
            }
            i++;
            j++;
            
        }
        return true;
    }
};