class Solution {
public:
    int numDifferentIntegers(string word) {
        int n = word.length();
        unordered_set<string>s;
        int i=0;
        while(i<n){
            if(isdigit(word[i]) == false){
                i++;
                continue;
            }
            string temp = "";
            while(i<n && isdigit(word[i])){
                temp+=word[i];
                i++;
            }
            int j=0;
            while(j<temp.length() && temp[j] == '0') j++;
            temp = temp.substr(j);
            s.insert(temp);
        }
        return s.size();
    }
};