class Solution {
public:
    
    long long dividePlayers(vector<int>& skills) 
    {
        
        sort(skills.begin() , skills.end());
        
        int i=0,j=skills.size()-1;
        
        int sum=-1;
        
        long long ans=0;
        
        while(i<j)
        {
            
            if(sum==-1)
            {
                sum=skills[i]+skills[j];
                
            }
            else
            {
                if((skills[i]+skills[j]) !=sum)
                {
                    // cout<<i<<" "<<j;
                    return -1;
                }
            }
            
            ans+=(long long )skills[i]*skills[j];
            
            i++,j--;
        }
        
        return ans;
        
    }
};