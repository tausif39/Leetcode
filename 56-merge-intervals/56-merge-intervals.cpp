class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) 
    {
        stack<vector<int>> st;
        
        sort(intervals.begin(),intervals.end());
        int i=0;
        
        
        while(i<intervals.size())
        {
            if(st.empty())
            {
                st.push({intervals[i][0],intervals[i][1]});
            }
            else
            {
                
                vector<int> v=st.top();
                
                if(intervals[i][0]>=v[0] and intervals[i][0]<=v[1]) 
                {
                    st.pop();
                    st.push({v[0],max(intervals[i][1],v[1])});
                    
                }
                else
                {
                    st.push({intervals[i][0],intervals[i][1]});
                }
                
                
            }
            
            
            
            i++;
            
        }
        
        vector<vector<int>> ans;
        
        while(!st.empty())
        {
            ans.push_back(st.top());st.pop();
        }
        
        reverse(ans.begin(),ans.end());
        
        return ans;
        
    }
};