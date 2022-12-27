class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) 
    {
        vector<int> v;
        
        for(int i=0;i<capacity.size();i++)
        {
            v.push_back(capacity[i]-rocks[i]);
        }
        
        sort(v.begin(),v.end());
        
        int cnt=0;
        
        
        
        
        for(int i: v)
        {
            if(i>0)
            {
                if(additionalRocks>=i)
                {
                    additionalRocks-=i;cnt++;
                }
                
                else break;
            }
            else cnt++;
            
        }
        
        return cnt;
        
        
    }
};