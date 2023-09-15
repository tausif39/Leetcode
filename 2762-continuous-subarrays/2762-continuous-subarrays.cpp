class Solution {
public:
    
    long long continuousSubarrays(vector<int>& nums) 
    {
        map<int,int> mp;
        int i=0,j=0,n=nums.size();
        long long ans=0;
     
        while(j<n)
        {
            
            int lo=0,hi=0;
            
            while(j<n )
            {
                mp[nums[j]]++;
                auto it1=mp.begin(),it2=mp.end();
                it2--;
                lo=it1->first,hi=it2->first;
               
                if(hi-lo<=2)
                {
                    int temp=j-i+1;

                    ans+=temp;
                    j++;
                }
                else break;
            }
    
            while(i<j and hi-lo>2)
            {
                
                mp[nums[i]]--;
         
                if(mp[nums[i]]==0)
                {
                    
                    mp.erase(nums[i]);
                }
                
                auto it1=mp.begin(),it2=mp.end();
                it2--;
                lo=it1->first,hi=it2->first;
                i++;
                
            }
      
            if(j<n)
            {
                int temp=j-i+1;

                ans+=temp;
            }
          
            j++;
        }
        
        return ans;
    }
};