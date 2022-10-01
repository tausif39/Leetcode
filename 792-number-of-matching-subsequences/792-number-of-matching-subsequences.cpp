class Solution {
public:
    int numMatchingSubseq(string s, vector<string>& words) 
    {
  
        map<string, int > mp;
        
        
        for(int i=0;i<words.size();i++)mp[words[i]]++;

        int cnt=0;
   
        int n=s.size();
        
        for(auto it:mp)
        {
            string s1=it.first;
            
            int i=0,j=0;
            int m=s1.size();
            
            while(i<n and j<m)
            {
                if(s1[j]==s[i])j++;
                
                i++;
                
            }
            
            
            if(j==m)cnt+=it.second;
            
            
        }
        
        
        
        return cnt;
        
        
        
        
    }
};