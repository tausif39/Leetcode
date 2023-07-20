class Solution {
public:
    
    
    static bool cmp(pair<int, int> &a, pair<int, int> &b)
    {
        
        return a.first<b.first;
        
        
    }
    
    
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) 
    {
        
        vector<pair<int, int>> vp;
        
        
        for(int i=0;i<nums.size();i++)
        {
            string a=to_string(nums[i]);
            
            for(int j=0;j<a.size();j++)
            {
                int indx=a[j]-'0';
                
                char c=mapping[indx] +'0';
                
                a[j]=c;
            }
            
            int map=stoi(a);
            // cout<<map<<" ";
            
            vp.push_back({map,nums[i]});
            
            
        }
        
        
        vector<int> ans;
        
        sort(vp.begin(),vp.end(),cmp);
        
        for(auto it:vp)
        {
            ans.push_back(it.second);
        }
        
            // cout<<
    
        return ans;
    }
};