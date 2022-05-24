class Solution {
public:
    int minStartValue(vector<int>& nums)
    {
        
        
        // sort(nums.begin(),nums.end());
        
        int mini=*min_element(nums.begin(),nums.end());
        
            if(mini>-1)return 1;
        
        
        
        int sv=1;
        
       
    
        while(sv)
        {
            
        int sum=sv;
        
           bool flag=false;
            // cout<<sv<<" ";
        for(int i=0;i<nums.size();i++)
        {
        
            
            // if(sv==5)
            // {
            //     cout<<sum<<" ";
            // }
            
            sum= sum+ nums[i];
            
            if(sum<1)
            {
                cout<<1;
                flag=true;
                // if(sv==5)cout<<sum;
                break;
                
            }
           
            
        }
            
            if(sum>0)
            {
                if(flag==false) return sv;
               
            }
            else
            {
                sv++;
            }
            
            
        }
        
      return 1;
    }
};