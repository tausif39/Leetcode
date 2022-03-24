class Solution {
public:
    string getSmallestString(int n, int k) 
    {
        vector<int> v(n,1);
        
        int sum=1*n;
        
        //26//
        
        int need=k-sum;
        
        for(int i=v.size()-1;i>=0;i--)
        {
            if(need>=26)
            {
                v[i]=26;
                need-=25;
            }
            
            else
            {
                
                v[i]+=need;
                need-=v[i]-1;
                
            }
            
            if(need==0)break;
            
        }
        
        
        string ans;
        
        for(int i=0;i<v.size();i++)
        {
            ans.push_back(v[i]-1+'a');
        }
        
        
        return ans;
        
    }
};