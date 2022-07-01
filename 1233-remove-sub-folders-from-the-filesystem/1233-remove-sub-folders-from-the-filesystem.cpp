class Solution {
public:
    vector<string> removeSubfolders(vector<string>& nums) 
    {
        sort(nums.begin(),nums.end());
        stack<string> st;
        
        st.push(nums[0]);
        
        for(int i=1;i<nums.size();i++)
        {
            string z=st.top();
            
            if(st.top().size()>=nums[i].size())
            {
                st.push(nums[i]);continue;
            }
            
            bool flag=true;
            
            int j=0;
            
            for(j=0;j<z.size();j++)
            {
                if(nums[i][j]!=z[j])
                {
                    flag=false;break;
                }
                
            }
            
            if(flag)
            {
                if(nums[i][j]=='/' and j<nums[i].size()-1)
                {
        
                }
                
                else st.push(nums[i]);
            }
            
            else st.push(nums[i]);
            
            
        }
        
        vector<string> vp;
        
        while(!st.empty())
        {
            vp.push_back(st.top());st.pop();
        }
        
        reverse(vp.begin(),vp.end());
        
        return vp;
        
        
    }
};