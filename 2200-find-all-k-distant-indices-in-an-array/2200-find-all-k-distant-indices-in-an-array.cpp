class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) 
    {
        vector<int> v;
        
        
        set<int> s;
        
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==key)
            {
                
                for(int j=0;j<nums.size();j++)
                {
                    
                    
                    if(abs(i-j)<=k)
                    {
                        s.insert(j);
                    }
                    


                }
                
            }
            
            
            
        }
        
        for(auto ss:s)
        {
            v.push_back(ss);
        }
        
        // sort(v.begin(),v.end());
        
        
        return v;
        
        
    }
};