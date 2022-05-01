class Solution {
public:
    bool backspaceCompare(string s, string t) 
    {
        stack<int> st;
        
        for(auto it:s)
        {
           if(!st.empty()) 
           {
               if(it=='#')
               {
                   st.pop();
               }
               
               else st.push(it);
               
           }
           
            else
            {
               if(it!='#')st.push(it);
            }
            
            
        }
        
        string a,b;
        
        while(!st.empty()) 
        {
            a.push_back(st.top());
            st.pop();
        }
        
        
        for(auto it:t)
        {
           if(!st.empty()) 
           {
               if(it=='#')
               {
                   st.pop();
               }
               
               else st.push(it);
               
           }
           
            else
            {
                if(it!='#')st.push(it);
                
            }
            
            
        }
        
        
         while(!st.empty()) 
        {
            b.push_back(st.top());
            st.pop();
        }
        
        
        return a==b;
        
        
        
        
    }
};