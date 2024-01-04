class Solution {
public:
    
    int minOperations(vector<int>& nums) 
    {
        
        unordered_map<int , int > mp;
        
        
        for(auto it:nums)++mp[it];
        
        // for(auto it:mp)cout<<it.second<<" ";

        
        int cnt=0;
        
        for(auto it:mp)
        {
            
            if(it.second==1)return -1;
            
            if(it.second%3==0)
            {
                cnt+=(it.second/3);
            }
            else
            {
                int num=it.second;
                
                while(num and num%3!=0)
                {
                    // cout<<num<<" ";
                    num-=2;
                    cnt++;
                    
                }
                
                cnt+=(num/3);
            }
            
            
            
        }
        
        
        
        return cnt;
        
        
        
    }
};