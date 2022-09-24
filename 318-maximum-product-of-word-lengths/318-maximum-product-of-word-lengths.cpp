class Solution {
public:
    
    
    int maxProduct(vector<string>& words) 
    {
       int len=0;
        
        int n=words.size();
        
        for(int i=0;i<n;i++)
        {
            
            unordered_map<char, int> mp;
            
            
            for(int k=0;k<words[i].size();k++)
            {
                mp[words[i][k]]++;
            }
            
            
            
            for(int j=i+1;j<n;j++)
            {
                int m=words[j].size();
                bool flag=true;
                
                if((words[j].size()*words[i].size())>len)
                
                for(int z=0;z<m;z++)
                {
                    if(mp.find(words[j][z])!=mp.end())
                    {
                        flag=false;
                        break;
                    }

                    
                    
                }
                
                    if(flag)
                    {
                        int a=words[i].size();
                        int b=words[j].size();
                        len=max(len,a*b);
                    }
                
                
            }
        }
        
        return len;
        
        
    }
};