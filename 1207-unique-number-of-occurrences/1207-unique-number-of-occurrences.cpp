class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr)
    {
        map<int ,int> mp;
        
        for(int i=0;i<arr.size();i++)
        {
            ++mp[arr[i]];
        }
        
        int unique=mp[arr[0]];
        
        for(int i=0;i<arr.size();i++)
        {
            for(int j=0;j<arr.size();j++)
            {
                if(arr[i]!=arr[j])
                {
                    if(mp[arr[i]]==mp[arr[j]])return false;
                    
                }
                 
            }
           
        }
        
      
        return true;
    }
};