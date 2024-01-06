class Solution {
public:
    
    vector<long long> distance(vector<int>& nums) 
    {
        
        unordered_map<int, vector<long long>> mp;
        
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]].push_back(i);
            
        }
             
        vector<long long> ans(nums.size());
       
       
        
//         for(int i=0;i<nums.size();i++)
//         {
            
//             if(mp[nums[i]]=00000=1)
//             {
//                 ans.push_back(0);
                
//             }
//             else
//             {
                
//                 vector<int > temp =ans

                
                


//                 mp[nums[i]].pop_back();
//             }
            
            
//         }
        
     
            
//             if(v.size()==1)
//             {
//                 ans[v[0]]=0;
//             }
        

        
        for(auto  & [s,v]: mp)
        {
            
            long long sum=0;
            for(auto it:v)sum+=(long long)it;
            long long pref_sum=0;
            
            
            if(v.size()==1)
            {
                
                ans[v[0]]=0;
                continue;
            }
            
            
            for(int i=0;i<v.size();i++)
            {
                
                pref_sum+=v[i];
                
                // sum-=v[i];
                
                long long right=0,left=0;   
                
                
                right=((sum-pref_sum)- v[i]*(v.size()-1-i));
                
                
                left= (v[i]*i) - (pref_sum-v[i]);
                
                
                ans[v[i]]=left+right;
                
                // ans[v[i]]=((sum - (v.size()-i-1)*v[i]));
                
            }
            
                
        }
        
        return ans;
    }
};