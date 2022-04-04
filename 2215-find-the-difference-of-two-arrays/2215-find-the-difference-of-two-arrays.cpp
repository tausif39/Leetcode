class Solution {
public:
   vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        set<int>s1;
        set<int>s2;
        for(int i=0;i<nums1.size();i++)
            s1.insert(nums1[i]);
        for(int i=0;i<nums2.size();i++)
            s2.insert(nums2[i]);
        vector<vector<int>>result;
        vector<int>temp1;
        vector<int>temp2;
        for(auto it:s1)
        {
            if(s2.find(it)==s2.end())
                temp1.push_back(it);
        }
        for(auto it:s2)
        {
            if(s1.find(it)==s1.end())
                temp2.push_back(it);
        }
        
        result.push_back(temp1);
        result.push_back(temp2);
        return result;
    }
};