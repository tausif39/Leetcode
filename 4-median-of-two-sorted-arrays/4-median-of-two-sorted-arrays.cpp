class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) 
    {
        
        vector<int> v(nums1.size()+nums2.size());
        
          int i=0;
        int j=0,k=0;
         while(i<nums1.size() and j<nums2.size()){
            if(nums1[i] < nums2[j]){
                v[k] = nums1[i];
                i++;
                k++;
            }
            else{
                v[k] = nums2[j];
                j++;
                k++;
            }
        }
        while(i < nums1.size()){
            v[k] = nums1[i];
            i++;
            k++;
        }
        while(j < nums2.size()){
            v[k] = nums2[j];
            j++;
            k++;
        }
        
        
        double median;
        
        if(v.size()%2==0)
        {
            median=(v[v.size()/2] + v[(v.size())/2 -1])/2.0;
            
        }
        
        else
        {
            median=v[v.size()/2]/1.0 ;
        }
        
        
        return median;
        
    }
};