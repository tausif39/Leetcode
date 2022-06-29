class Solution {
public:
    
    
    
    int numTriplets(vector<int>& nums1, vector<int>& nums2) 
    {
        map<long,int> m1,m2;  //m1 used for tyoe 1 and m2 used for type 2
        int ans=0;
        
        //Filling m1 for checking type 1
        for(int i=0;i<nums2.size();i++)
        {
            for(int j=i+1;j<nums2.size();j++)
            {
                long l=nums2[i];
                m1[l*nums2[j]]++;
            }
        }
        
        //Filling m2 for checking type 2
        for(int i=0;i<nums1.size();i++)
        {
            for(int j=i+1;j<nums1.size();j++)
            {
                long l=nums1[i];
                m2[l*nums1[j]]++;
            }
        }
        
        //Checking no of answers for type 1
        for(int i=0;i<nums1.size();i++)
        {
            long l=nums1[i];
            l*=nums1[i];
            
            ans+=m1[l];
        }
        
         //Checking no of answers for type 1
        for(int i=0;i<nums2.size();i++)
        {
            long l=nums2[i];
            l*=nums2[i];
            
            ans+=m2[l];
        }
        return ans;
    }
};