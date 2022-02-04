class Solution {
public:
    vector<int> maxScoreIndices(vector<int>& nums) 
    {
        int cntzero=0;
        int cntone=0;
        
        vector<int> one;
        vector<int> zero;
        vector<int> ans;
        
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)cntzero++;
            if(nums[i]==1)cntone++;
            
            
        }
        
        one.push_back(cntone);
        
       for(int i=1;i<nums.size();i++)
       {
           
           if(nums[i-1]==1)
           {
               cntone --;
               one.push_back(cntone);
           }
           
           else
           {
               one.push_back(cntone);
           }
           
           
           
       }
        
       one.push_back(0);
        
        
       zero.push_back(cntzero);
        
       for(int i=nums.size()-2;i>=0;i--)
       {
           
           if(nums[i+1]==0)
           {
               cntzero --;
               zero.push_back(cntzero);
           }
           
           else
           {
               zero.push_back(cntzero);
           }
           
           
           
       }
        
        zero.push_back(0);
         
        reverse(zero.begin(),zero.end());
        
        int maxii=INT_MIN;
        
       for(int i=0;i<zero.size();i++)
       {
           one[i]= zero[i]+ one[i];
           if(maxii<one[i])maxii=one[i];
           
            
       }
       
       for(int i=0;i<zero.size();i++)
       {
           if(one[i]==maxii)
           {
               ans.push_back(i);
            }
           
       }
        
        
        
        
        return ans;
        
        
    }
};