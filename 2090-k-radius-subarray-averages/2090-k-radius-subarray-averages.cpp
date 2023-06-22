class Solution {
public:
    
    #define ll  long long
    vector<int> getAverages(vector<int>& nums, int k) 
    {
        int i=0;
        
        ll elem=2*k+1;
        
        ll left=0, right=0;
        
        int n=nums.size();
              
        vector<int> ans(n,-1);
        
        if(n<2*k)return ans;
        
        ll sum=0;
        
        
        while(i<n and i< 2*k)
        {
            
            sum+=nums[i++];
        }
        
        // cout<<sum;
        // sum-=nums[2*k];
        
        right=2*k;
        
        int mid=k;
        
        while(right<n)
        {
            // cout<<right<<" ";
            
            sum+=nums[right];
            cout<<sum<<" ";
            ans[mid]=sum/elem;
            sum-=nums[left];
            // sum+=right;
            left++;
            right++;
            mid++;
        }
        
    return ans;
        
        
    }
};



//         v[i/2]=sum/k;
        
        
        
//         left++;
//         right++;
        
//         sum-=left;
//         sum+=right;
        
//         v[right/2]=sum/k;
        