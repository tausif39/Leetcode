class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) 
    {
        vector<vector<int>> ans;
        set<int> first,second;
        vector<int> f,s;
        
        for(int i=0;i<nums1.size();i++)
        {
            bool flag=false;
            
            for(int j=0;j<nums2.size();j++)
            {
                if(nums1[i]==nums2[j])
                {
                    flag=true;
                    break;
                }
                
            }
                if(flag==false)
                {
                    first.insert(nums1[i]);
                }
            
        }
        
        
        
        for(int i=0;i<nums2.size();i++)
        {
            bool flag=false;
            
            for(int j=0;j<nums1.size();j++)
            {
                if(nums2[i]==nums1[j])
                {
                    flag=true;
                    break;
                }
                
            }
                if(flag==false)
                {
                    second.insert(nums2[i]);
                }
            
        }
        
        for(auto s: first)f.push_back(s);
        
        
        for(auto as: second)s.push_back(as);
        
        
        ans.push_back(f);
        ans.push_back(s);
        
        return ans;
        
        
        
        
        
        
    }
};