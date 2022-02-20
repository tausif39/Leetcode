class Solution {
public:
    vector<int> addToArrayForm(vector<int>& nums, int k) 
    {
        vector<int> v,ans;
        int ok=k;
        while(ok)
        {
            
            v.push_back(ok%10);
            
            ok/=10;
            
        }
        
       
        
        reverse(v.begin(),v.end());reverse(nums.begin(),nums.end());
        reverse(v.begin(),v.end());
        
        if(v.size()>nums.size())swap(v,nums);
           
        
        
        int carry=0;
        
        int j=0;
        for(int i=0;i<nums.size();i++)
        {
            if(j<v.size())
            {
            carry+=nums[i]+v[j];
            ans.push_back(carry%10) ;
                carry/=10;
                
                j++;
            }
            
            else
            {
                carry+=nums[i];
                ans.push_back(carry%10) ;
                carry/=10;
            }
            
        }
        
        if(carry!=0)ans.push_back(carry);
        
        
//         for(int i=nums.size()-1;i>=0;i--)
//         {
            
//             int digit=nums[i]*base;
//             sum+=digit;
//             base*=10;
            
//         }
        
      reverse(ans.begin(),ans.end());
        
        return ans;
        
    }
};