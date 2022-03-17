class Solution {
public:
    double trimMean(vector<int>& arr) 
    {
        int n=arr.size();
        
        int rem=n/20;
        
        sort(arr.begin(),arr.end());    
        double sum=0;
        
        for(int i=0;i<arr.size()-rem;i++)
        {
           sum+=arr[i] ;
           
            if(i<rem)sum-=arr[i];
            
        }
        
        int size=arr.size()-2*rem;
        
        return sum/size;
        
        
    }
};