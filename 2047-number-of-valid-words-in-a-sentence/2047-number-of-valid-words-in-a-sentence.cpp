class Solution {
public:
    int countValidWords(string sentence) 
    {
        // vector<string> v;
        
        stringstream ss(sentence);
        
        string s;
        
        int cnt=0;
        
        while(ss>>s)
        {
            bool flag=true;
            int hyp=0,pun=0;
            
            for(int i=0;i<s.size();i++)
            {
                if(s[i]=='-')hyp++;
                
                if(s[i]=='!' || s[i]=='.' || s[i]==' ' || s[i]==',')pun++;
                
            }
            
            if(hyp>1 || pun>1)continue;
            
            
          
                if(hyp==1)
                {
                    if(s[0]=='-' || s[s.size()-1]=='-')continue;
                    
                    for(int i=1;i<s.size()-1;i++)
                    {
                        if(s[i]=='-')
                        {
                            if(s[i-1]<'a' || s[i-1]>'z')
                            {
                                cout<<1<<endl;
                                flag=false;break;
                            }
                            
                            if(s[i+1]<'a' || s[i+1]>'z')
                            {
                                cout<<2<<endl;
                                flag=false;break;
                            }
                        }
                        
                    }
                }
                
                    
                    
                    for(int i=0;i<s.size()-1;i++)
                    {
                        if(s[i]=='!' || s[i]=='.' || s[i]==' ' || s[i]==',')
                        {
                            flag=false;break;
                        }
                    }
                
                
                
                
                    for(int i=0;i<s.size();i++)
                    {
                        if(s[i]>='0' and s[i]<='9')flag=false;
                    }
                
                if(flag==false)continue;
                    
                    
                    
                
                
                
                cnt++;
                

                
                
                
            
            
            
            
        }
        
        
        
        return cnt;
            
        
        
    }
};