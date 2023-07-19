class Solution {
public:
    
    int maxChunksToSorted(vector<int>& arr)
    {
        
        
        int mini=-1;
        
        int cnt=0;
        
        for(int i=0;i<arr.size();i++)
        {
            mini=max(mini,arr[i]);
            
            if(mini==i)cnt++;
            
            
        }
        
        
        return cnt;
    }
};