class Solution {
public:
    string smallestString(string s)
    {
 
        int left=0;
        
     while(left <s.size() and s[left]=='a')left++;
        
        if(left==s.size())
        {
            
            s[left-1]='z';
            
            return s;
            
        }
        
      
      for(;left<s.size();left++)  
      {
          
          if(s[left]=='a')break;
          s[left] =(s[left] -1 );
          
          
      }
        
        return s;
    }
};