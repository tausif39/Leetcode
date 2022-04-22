class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) 
    {
        stringstream ss(sentence);
        
        string temp;
        
        vector<string> v;
        while(ss>>temp)
        {
            v.push_back(temp);
        }
        
        int cnt=0;
        
        for(int j=0;j<v.size();j++)
        {
            string z=v[j];
            
            if(z.size()<searchWord.size())continue;
            
            for(int i=0;i<searchWord.size();i++)
            {
                if(searchWord[i]!=z[i])break;
                
                else if(i==searchWord.size()-1)
                {
                    if(searchWord[i]==z[i])cnt++;
                    
                    return j+1;
                }
            }
            
            
        }
        
        return -1;
        
        
    }
};