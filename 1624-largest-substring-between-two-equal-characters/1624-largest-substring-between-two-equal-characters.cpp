class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) 
    {
        unordered_map<char,int> mp;
        
        
        for(int i=0;i<s.size();i++)
        {
           ++mp[s[i]];
        }
        
        // vector<int> v;
        int distance=0;
        int cnt=0;
        for(int i=0;i<s.size()-1;i++)
        {
           if(mp[s[i]]>=2)
           {
                cnt++;
               
                for(int j=i+1;j<s.size();j++)
                {
                   if(s[i]==s[j])
                   {
                       distance=max(distance,abs(j-i));
                       
                   }
                }
               
               
           }
            
        }
        
        
        if(cnt==0) return -1;
        
        return (distance-1);
        
    }
};