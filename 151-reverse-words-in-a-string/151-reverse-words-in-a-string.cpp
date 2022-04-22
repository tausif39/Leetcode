class Solution {
public:
    string reverseWords(string s) 
    {
        stringstream ss(s);
        
        string temp;
        vector<string> v;
        while(ss>>temp)v.push_back(temp);
        
        
        reverse(v.begin(),v.end());
        
        string z;
        
        for(auto str:v)
        {
            z+=str;
            z+=" ";
        }
        
        z.pop_back();
        
        return z;
    }
};