class Solution {
public:
    
    
    
    
    string digitSum(string s, int k) 
    {
        
        
        while(s.size()>k)
        {
            
            vector<string > v;
            int z=0;
            
            while(z<s.size())
            {
                string temper;
                int kk=k;
                while(z<s.size() and kk--)
                {
                    temper+=s[z];
                    z++;
                }
                // cout<<temper<<endl;
                v.push_back(temper);
            }
                  
                  
            // string b;
           
           
                
                for(int i=0;i<v.size();i++)
                {
                    string t=v[i];
                    int sum=0;
                    
                    for(int j=0;j<t.size();j++)
                    {
                        
                        sum+=t[j]-'0';
                    }
                    
                    string zz=to_string(sum);
                    
                    v[i]=zz;
                    
                }
            
            
                
            
                s.clear();
                
                for(int i=0;i<v.size();i++)
                {
                    s+=v[i];
                }
            
            
            
            
                 // v.clear();
            
             // if(s.size()>k)break;

            
        }
        
        return s;
        
    }
};