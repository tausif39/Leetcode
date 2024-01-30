class Solution {
public:
    
    int evalRPN(vector<string>& tokens) 
    {
        
        
        stack<int> st;
        
        int ans=(stoi(tokens[0]));
        
        for(int i=0;i<tokens.size();i++)
        {      
            
            if(st.size()<2)
            {
                st.push(stoi(tokens[i]));
            }
            
            else
            {
                
                 
                if(tokens[i]!="+" and tokens[i]!="-" and  tokens[i]!="/" and tokens[i]!="*")
                {
                    st.push(stoi(tokens[i]));
                }
                
                else
                {
                    
                    int first=st.top();
                    st.pop();
                    int second=st.top();
                    st.pop();
                    
                    
                    if(tokens[i]=="+")
                    {
                        ans=(first + second);
                        
                    }
                    
                    else if( tokens[i]=="-")
                    {
                        ans=(second - first);
                    }
                    
                    else if( tokens[i]=="*")
                    {
                        ans=first*second;
                        
                    }
                    else if( tokens[i]=="/")
                    {
                        ans=second/first;
                    }
                    
                    cout<<ans<<" ";
                    
                    st.push(ans);
                    
                }
                
                
            }
            
        }
        
        
        return ans;
        
    }
};