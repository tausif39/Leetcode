class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<char,int>> stk;
        int n = s.length(), i = 0, count;
        while(i < n)
        {
            if(!stk.empty() && stk.top().first == s[i]) 
                stk.push({s[i],stk.top().second+1});
            else
                stk.push({s[i],1});
            count = stk.top().second;
			//Whenever we encounter a substring of length k we will pop the substring from the stack.
            if(count == k)
            {
                while(count--) stk.pop();
            }
            i++;
        }
        string str = "";
        while(!stk.empty())
        {
            str += stk.top().first;
            stk.pop();
        }
        reverse(str.begin(),str.end());
        return str;
    }
};