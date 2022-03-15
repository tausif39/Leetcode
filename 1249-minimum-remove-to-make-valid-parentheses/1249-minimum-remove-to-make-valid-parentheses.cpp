class Solution {
public:
    string minRemoveToMakeValid(string s) {
    int n= s.size();
    stack<pair<char,int>> st;   //create a stack of pair<char,int> for recording index too
     
    //Part - 1 -> This loop is same as in the question Valid Parenthesis, we are just keeping invalid brackets and popping valid out of stack.
    for(int i=n-1;i>=0;i--){
        if(s[i]==')') st.push({s[i],i});     //if got a ')', then push it with it's index
        if(s[i]=='(')
            st.size() and st.top().first==')'? st.pop(): st.push({s[i],i});            //if got '(' then there are two cases
    }

    //Part-2 -> reconstruct a new string by ignoring all brackets wrt their position present in stack, and keep popping them
    string ans="";  
    for(int i=0;i<n;i++)  
        if(st.size() and st.top().second==i) st.pop();   else ans+= s[i];
     
    return ans;
}
};