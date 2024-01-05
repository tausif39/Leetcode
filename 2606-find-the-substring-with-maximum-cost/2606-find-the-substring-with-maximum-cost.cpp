class Solution {
public:
    int maximumCostSubstring(string s, string chars, vector<int>& vals) 
    {
        
        
        map<char , int> mp;
        
        int cnt=1;
        
        for(char i='a';i<='z';i++)
        {
            mp[i]=cnt++;
        }
        
        
        // for(auto it :mp)cout<<it.second<<" "
        
        
        for(int i=0;i<vals.size();i++)
        {
            
            mp[chars[i]]=vals[i];
        }
        
        
        
        int sum=0;
        
        int max_sum=0;
        
        for(int i=0;i<s.size();i++)
        {
            
            
            
            sum+=mp[s[i]];
            
            if(sum<0)sum=0;
            
            max_sum=max(max_sum,sum);
            
            
        }
    
        
        
        return max_sum;
        
        
        
    }
};