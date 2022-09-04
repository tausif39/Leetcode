class Solution {
public:
    
    
    void help(vector<int> nums,int sum,vector<int> &v)
    {
        
        int summ=0;
        
        bool flag=true;
        
        for(int i=0;i<nums.size();i++)
        {
            summ+=nums[i];
            if(summ>sum)
            {
                flag=false;
                v.push_back(i);break;return;
            }
        }
        
        
        if(flag)v.push_back(nums.size());
        
        
    }
    
    
    
    
    
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) 
    {
        sort(nums.begin(),nums.end());
        vector<int> v;
        
        for(int i=0;i<queries.size();i++)
        {
            help(nums,queries[i],v);
            
        }
        
        return v;
        
    }
};