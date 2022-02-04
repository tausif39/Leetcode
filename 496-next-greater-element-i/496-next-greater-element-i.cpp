class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) 
    {
        int n=nums1.size();
        
        vector<int> v;
        
        for(int i=0;i<nums1.size();i++)
        {
            for(int j=0;j<nums2.size();j++)
            {
                 if(nums1[i]==nums2[j])
                 {
                     
                     
                         for(j;j<nums2.size();j++)
                         {
                             if(nums2[j]>nums1[i])
                             {
                                v.push_back(nums2[j]);
                                break;
                             }
                             
                             
                         }
                     if(j==nums2.size())
                      {
                         v.push_back(-1);
                         
                         break;
                      }

                    
                     
                     break;
                         
                }
                
                

 
            }
                
                


            }
            
         return v;
            
        }
        
       
        
        
    
};

               