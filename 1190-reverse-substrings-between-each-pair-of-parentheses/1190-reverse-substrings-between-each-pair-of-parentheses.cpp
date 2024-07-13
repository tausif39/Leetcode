class Solution {
public:
    string reverseParentheses(string s) 
    {
         stack<char> st;
         string str="";
        int n=s.length();
        for(int i=0;i<n;i++)
        {
            if(s[i]!=')')
              st.push(s[i]);
            else
            {
               str="";
                while(st.top()!='(')
                {
                   str+=st.top();
                   st.pop();
                }
                st.pop();
                for(auto it:str)
                  st.push(it);
            }
        }
        str="";
        while(!st.empty())
         {
            str+=st.top();
            st.pop();
         }
         reverse(str.begin(),str.end());
        return str;
        
    }
};