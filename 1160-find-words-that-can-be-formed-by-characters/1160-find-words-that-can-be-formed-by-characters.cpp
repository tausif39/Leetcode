class Solution {
public:
    int countCharacters(vector<string>& words, string chars) 
    {
        
        unordered_map<char,int> mp1;
        
        for(int i=0;i<chars.size();i++)mp1[chars[i]]++;
        
        int cnt=0;
        
        for(int i=0;i<words.size();i++)
        {
            unordered_map<char,int> mp2;
            
            bool flag=true;
            
          for(int j=0;j<words[i].size();j++)
            {
                    mp2[words[i][j]]++;
              
                if(mp2[words[i][j]]>mp1[words[i][j]])
                {
                    flag=false;
                    break;
                }

            }  
            
            if(flag)cnt+=words[i].size();
        }
        
        return cnt;
        
    }
};