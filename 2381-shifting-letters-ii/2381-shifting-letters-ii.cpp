class Solution {
public:
    string shiftingLetters(string s, vector<vector<int>>& shifts)
    {
            
        int n=s.size();
        
        vector<int> v(n+1,0);
      
        for(int i=0;i<shifts.size();i++)
        {
            int start=shifts[i][0];
            
            int end=shifts[i][1];
            
            int dir =shifts[i][2];
       
            if(dir==0)
            {
                v[start]-=1;
                v[end+1]+=1;
                
            }
            
            else
            {
                v[start]+=1;
                v[end+1]-=1;
            }
    
        }
        
        int m= v.size();
        
        
        for(int i=0;i<m-1;i++)
        {
            v[i+1]+=v[i];
        }

         
        v.pop_back();
        for(auto it : v)cout<<it<<" ";
  
        for(int i=0;i<v.size();i++)
        {
            
             if(v[i]<0)
             {
                 
                 
                 
                v[i]=abs(v[i]);
                
                v[i]%=26;
                
                int rem=s[i] - 'a';
                
                 
                 
                 
                if(rem>=v[i])
                {
                    rem-=v[i];
                    
                    s[i]= rem+'a';
                    
                }
                
                else
                {
                    
                    v[i]-=rem;
                    
                    v[i] = v[i] - 26;
                    
                    
                    v[i]=abs(v[i]);
                    
                     s[i]= v[i]+'a';
     
                }
                
                continue;
            }
            
            
            
            v[i]=v[i]%26;
            // s[i]=s[i]+v[i];
            
            int ok= s[i] - 'a';
            
            ok+=v[i];
            
            ok%=26;
            
            
            s[i]=ok + 'a';

        }
        
       
        return s;
        
    }
};
        

        