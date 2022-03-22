class Solution {
public:
    bool buddyStrings(string s, string goal) 
    {
        if(s.size()!=goal.size())return false;
        if(s==goal)
        {
            
           unordered_map<char,int> mp;

           for(auto str:s)++mp[str];
        
//         for(auto s:goal)--mp[s];
        
        
            for(auto m:mp)        
            {
                if(m.second>1)return true;
            }
            
             return false;
            
        }
        
        
        
        int i=0;
        int j=s.size()-1;
        
        while(j>=0 and s[j]==goal[j] )j--;
        // {
            
            // swap(s[i],s[j]);
            // if(s==goal)return true;
            // else swap(s[i],s[j]);
            // i++;j--;
            
        // }
        
        while(i<s.size() and s[i]==goal[i])i++;
        // {'i+'
        // }
        
        
        swap(s[i],s[j]);
        
        if(s==goal)return true;
        

        
        return false;
        
        
    }
};