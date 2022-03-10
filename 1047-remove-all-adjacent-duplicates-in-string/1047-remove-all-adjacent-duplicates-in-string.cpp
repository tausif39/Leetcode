class Solution {
public:
    string removeDuplicates(string s) 
    {
        string ans;
        for(char c:s)
        {
            if(c == ans.back())
                ans.pop_back();
            else
                ans.push_back(c);
        }
        return ans;
        
    }
};