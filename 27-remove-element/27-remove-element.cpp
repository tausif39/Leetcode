class Solution {
public:
    int removeElement(vector<int>& nums, int val) 
    {
        if(nums.size()==0)return 0;
        // if(nums.size()==0)return 0;
        
//         int cnt=0;
//         int i=0;
//         while(i<nums.size()-1)
//         {
            
//             while(nums[i]==val)
//             {
//                 for(int j=i;j<nums.size()-1;j++)
//                 {
//                     nums[j]=nums[j+1];
                    


//                 }
//                 cnt++;
                
//             }
            
//             i++;
                
            
//         }
        int cnt=0;
        for(int i=0;i<nums.size();i++)if(nums[i]==val)cnt++;
        
        
        
        
        remove(nums.begin(),nums.end(),val);
        
        
        
        
        return nums.size()-cnt;
        
    }
};