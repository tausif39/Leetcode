class Solution {
public:
    
    void add(string & s)
    {
        
        
        
        
        
        for(int i=s.size()-1;i>=0;i--)
        {
            
            if(i==0)
            {
                s.push_back('0');
            }
            
            
            if(s[i]=='1')
            {
                s[i]='0';
                
                
                
                    
            }
              
            else 
            {
                 s[i]='1'; 
                
                
                break;
                
            }
            
            
            
        }
        
        
        // cout<<s<<endl;
        
        
        
    }
    
    
    int numSteps(string s) 
    {
        int cnt=0;
        
         while(s.size()>1)
         {
            if(s.back()=='0')
            {
                cnt++;
                s.pop_back();
                cout<<s<<endl;
                    
            }
            
            else
            {
                
                add(s);
                cout<<s<<"after"<<endl;
                cnt++;
            }
            
         }
        
       
        
        return cnt;
        
        
    }
};