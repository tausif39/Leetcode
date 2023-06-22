class Solution {
public:
    
    #define ll long long
    
    int numOfSubarrays(vector<int>& arr, int k, int threshold) 
    {
        
        ll sum= 0;
        
        int cnt=0;
        
        int left=0, right=0;
        
        while(right<k)
        {
            sum+=arr[right];
            right++;
        }
        
        right--;
        
        sum-=arr[right];
        
//         double t=threshold;
        
        while(right<arr.size())
        {
            
            sum+=arr[right];
            
            double avg=(double)sum/(double)k;
            
            
            if(avg>=(double)threshold)
            {
                cnt++;
            }
            
            sum-=arr[left];
            left++;
            right++;
        }
        
        return cnt;
        
        
        
    }
};