class Solution {
public:
    int maxNumberOfBalloons(string text) 
    {
        string ans1="baon";
        string ans2="lo";
        
        unordered_map<char, int> mp;
        
        for(int i=0;i<text.size();i++)
        {
           ++mp[text[i]] ;
            
        }
        
        int number=mp[ans1[0]];
        
        for(int i=0;i<ans1.size();i++)
        {
           if(mp[ans1[i]]==0)
           {
               return 0;
           }
            
           number=min(number ,mp[ans1[i]]);
          
            
        }
        
        for(int i=0;i<ans2.size();i++)
        {
           if(mp[ans2[i]]==0)
           {
               return 0;
           }
            
           number=min(number,mp[ans2[i]]/2);
          
            
        }
        
        
        
        
        
        
        return number;
        
    }
};