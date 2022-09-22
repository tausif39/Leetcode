class Solution {
public:
    string reverseWords(string s) 
    {
        
        stringstream ss(s);
        
        string temp;
        
        string ans;
        
        while(ss>>temp)
        {
            reverse(temp.begin(),temp.end());
            
            ans+=temp;
            
            ans+=' ';
        }
        
        ans.pop_back();
        
        
        return ans;
        
        
        
    }
};