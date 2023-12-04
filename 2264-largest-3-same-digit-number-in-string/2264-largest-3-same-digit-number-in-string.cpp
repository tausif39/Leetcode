class Solution {
public:
    string largestGoodInteger(string nums) 
    {
        vector<int> v;
        
        
        char c;
        
        int cnt=1;
        for(int i=0;i<nums.size();i++)
        {
            
            if(c!=nums[i])
            {
                c=nums[i];
                if(cnt==3)
                {
                    v.push_back(nums[i-1]-'0');
                    
                    c=nums[i];
                }
                
                cnt=1;
                
            }
           else
           {
               if(cnt==3)
               {
                   v.push_back(nums[i-1]-'0');
               }
               cnt++;
           }
            
        }
        
                if(cnt==3)
                {
                    v.push_back(nums[nums.size()-1]-'0');
                    
                }
        
        
        if(v.size()==0)return "";
        
        sort(v.begin(),v.end(),greater<int>());
        
        string ans;
       ans.push_back(v[0]+'0');ans.push_back(v[0]+'0');ans.push_back(v[0]+'0');
        
        
        
        return ans;
        
        
        
        
    }
};