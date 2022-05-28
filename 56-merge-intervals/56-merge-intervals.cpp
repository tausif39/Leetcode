class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) 
    {
        stack<vector<int>> st;
        
        sort(intervals.begin(),intervals.end());
        int i=0;
        
        
//         if(intervals[i+1][0]>=intervals[i][0] and intervals[i+1][0]<=intervals[i][1]) 
//                 {
//                     int start=intervals[i][0];
//                     int end=max(intervals[i+1][1],intervals[i][1]);
                    
//                     st.push({start,end});
//                 i+=2;
//                 }
//         else
//         {
//             int start=intervals[i][0];
//                     int end=intervals[i][1];
//                     st.push_back({start,end});
//                     i++;
            
//         }
        
        // vector<int> v=st.top();
        
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