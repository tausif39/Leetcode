class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) 
    {
        vector<int> ans;
        
        stack<int> st;
        
        int i=0;
        while(i<asteroids.size())
        {
            if(st.empty())st.push(asteroids[i]);
            else
            {
                if(asteroids[i]<0 and st.top()==abs(asteroids[i]))st.pop();
                
//                else if(st.top()<0 and asteroids[i]>0)
//                 {
//                     if(abs(st.top())<asteroids[i])
//                     {
                        
//                       st.pop()  ;st.push(asteroids[i]);
//                     }
//                 }
                
                else if(st.top()>0 and asteroids[i]<0)
                {
                    while(!st.empty() and st.top()<abs(asteroids[i]))
                    {
                        cout<<st.top()<<" ";
                        st.pop();
                        
                        
                        if(st.empty())
                        {
                            
                        // cout<<"hi"<<endl;
                            st.push(asteroids[i]);break;
                        }
                        
                        if(st.top()<0)
                        {
                            st.push(asteroids[i]);break;
                        }
                        
                        if(asteroids[i]<0 and st.top()==abs(asteroids[i]))
                        {st.pop();break;
                        }
                        
                        
                    }
                    
                }
                else
                {
                    st.push(asteroids[i]);
                }
                    
            }
            
            i++;
        }
        

        
        while(!st.empty())
        {
            ans.push_back(st.top());st.pop();
        }
        
        reverse(ans.begin(),ans.end());
        
        return ans;
        
        
    }
};