class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) 
    {
        unordered_map<char,int > mp;
        
        for(int i=0;i<allowed.size();i++)
        {
            ++mp[allowed[i]];
         
        }
        
        // char c='a';
//         while( c<='z')
//         {
            
//             ++mp[allowed[c]];
//             c+=1;
//         }
        
        int cnt=words.size();
        
        for(int i=0;i<words.size();i++)
        {
            for(int j=0;j<words[i].size();j++)
            {
                
                if(mp[words[i][j]]!=1)
                {
                    cnt--;
                    break;
                }
                


            }
            
            
        }
        
        return cnt;
        
        
    }
};