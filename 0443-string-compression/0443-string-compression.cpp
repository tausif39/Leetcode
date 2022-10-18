class Solution {
public:
    
    int compress(vector<char>& s)
    {
        
        int j=0;
        
        int i=0;
        
        
        while(i<s.size())
        {
            
            if(j==s.size())break;
            
            char current=s[j];
            
            int len=0;
            
            while(j<s.size() and s[j]==current)
            {           
                j++; 
                len++;
            }
            
            // cout<<len;
            
            cout<<i<<" ";
       
            if(len==1)
            {
                s[i]= current;
                i++;
                continue;
            }
            
            
            s[i]= current;
            
            
            
            string a= to_string(len);
            
            
            
            if(a.size()==1)
            {
                
                s[i+1]=a[0];
                i+=2;
                
            }
            
            else 
            {
                i++;
                for(int k=0;k<a.size();k++)
                {
                    s[i]=a[k];
                    i++;
                }
                
            
            }
         
            
        }
        
        
        int k=s.size();
        
        k-=i;
        
        cout<<k;
        
        while(k--)s.pop_back();
        
        
        
        return s.size() ;
        
        
    }
};