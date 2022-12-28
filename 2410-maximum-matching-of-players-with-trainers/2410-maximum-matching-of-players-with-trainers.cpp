class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& nums1, vector<int>& nums2) 
    {
        
        sort(nums1.begin() ,nums1.end());
        
        
        sort(nums2.begin() ,nums2.end());
        
        
        int i=0, j=0;
        
        
        int cnt=0;
        
        
        
        for(int i=0;i<nums1.size();i++)
        {
            
            auto it = lower_bound(nums2.begin()+j,nums2.end(),nums1[i]);
            
            if(it==nums2.end())break;
            
            int indx=it- nums2.begin();
            
            j=indx+1;
            
            cnt++;
            
            // if(j>=nums2.size()-1)break;
            
        
        }
        
            
        
        return cnt;
        
    }
};