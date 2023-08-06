class Solution {
public:
    int compress(vector<char>& chars) {
        vector<char> v;
        int cnt=1;
        char ch= chars[0];
        for (int i=1; i<chars.size(); i++){
            if (chars[i]== ch){
                cnt++;
            }
            else{
                v.push_back(ch);
                ch= chars[i];
                if (cnt!=1){
                    string temp;
                    while (cnt>0){
                        temp+= (cnt%10)+'0';
                        cnt/= 10;
                    }
                    for (int i=temp.size()-1; i>=0; i--)v.push_back(temp[i]);
                }
                cnt=1;
            }
        }
        if (cnt>=1)v.push_back(ch);
        if (cnt>=2){
                string temp;
                while (cnt>0){
                    temp+= (cnt%10)+'0';
                    cnt/= 10;
                }
                for (int i=temp.size()-1; i>=0; i--)v.push_back(temp[i]);
        }
        chars= v;
        return v.size();
    }
};