class Solution {
public:
    
    string reverseParentheses(string s) 
    {
        
        stack<int> st;
        
        for(int i=0;i<s.size();i++)
        {
            if(st.empty())
            {
                st.push(s[i]);
                continue;
            }
            
            // st.push(s[i]);
            
            if(s[i]==')')
            {
               string ans;
                
                while(st.top()!='(')
                {
                    ans+=st.top();
                    st.pop();
                }
                
                st.pop();
                
                // cout<<1;
                
                // for(auto it:ans)cout<<it<<" ";
                
                for(auto it:ans)st.push(it);
                
                
                
            }
            
            
            
            
            else st.push(s[i]); 
                
            

            
            
            
        }
        
             string ans;
                
                while(!st.empty())
                {
                    ans+=st.top();
                    st.pop();
                }
        
                reverse(ans.begin(),ans.end());
        
            return ans;
        
    }
};