class Solution {
public:
    vector<string> removeComments(vector<string>& src) {
        vector<string> ans;
        vector<int> code;
        for(int i=0;i<src.size();i++){
            for(auto c: src[i]) code.push_back(c);
            code.push_back(-1);
        }
        string tem = "";
        int i=0;
        while(i<code.size()){
            if(code[i] == -1){
                if(tem.length() > 0) ans.push_back(tem);
                tem = "";
                i++;
            }else if(code[i] == '/' && i+1 < code.size() && code[i+1] == '/'){
                // we iterate till -1
                while(code[i] != -1) i++;
                if(tem.length() > 0) ans.push_back(tem);
                tem = "";
                i++;
            }else if(code[i] == '/' && i+1 < code.size() && code[i+1] == '*'){
                // iterate till */
                i += 2;
                while(code[i] != '*' || code[i+1] != '/') i++;
                i += 2;
            }else tem += (char)code[i++];
        }
        return ans;
    }
};