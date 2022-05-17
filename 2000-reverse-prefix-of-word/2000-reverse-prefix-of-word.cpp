class Solution {
public:
    string reversePrefix(string word, char ch) 
    {
        if(word.find(ch)==-1)return word;
        
        int index= word.find(ch);
        
        string ans;
        
        string a= word.substr(0,index+1);
        
        string b= word.substr(index+1);
        
        reverse(a.begin(),a.end());
        
        ans=a+b;
        return ans;
        
        
    }
};