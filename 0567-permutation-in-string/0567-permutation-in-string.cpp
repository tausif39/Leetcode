class Solution {
public:

    bool checkInclusion(string s1, string s2) 
    {
        
        unordered_map<char , int> mp;
        
        for(auto it : s1)mp[it]++;
        
        
        int n=s1.size();
        
        for(int i=0;i<min(s2.size()-n+1,s2.size());i++)
        {
            
            if(mp.find(s2[i])==mp.end())continue;
            
            unordered_map<int,int> mp1;
            
            int j=i;
            
            while(j<s2.size())
            {
                if(j==n+i)break;
                mp1[s2[j]]++;
                j++;
                
            }
            
            bool flag=true;
            
            
            for(auto it : mp)
            {
                if(mp1[it.first]!=it.second)flag=false;
                
            }
            
            if(flag)return true;
            

            
        }
        
        return false;
        
        
    }
};