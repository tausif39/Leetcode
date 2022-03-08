class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) 
    {
        vector<int> v;
        if(k>0)
        {
            // vector<int> v;
            
            for(int i=0;i<code.size();i++)
            {
                int sum=0;
                for(int j=i+1;j<=i+k;j++)
                {
                    int indx=j%code.size();
                    sum+=code[indx];
                }

                    v.push_back(sum);

            }
            // return v;
        }
        
      else  if(k<0)
        {
          k=abs(k);
          
            reverse(code.begin(),code.end());
            
                
            
                for(int i=0;i<code.size();i++)
                {
                    int sum=0;
                    for(int j=i+1;j<=i+k;j++)
                    {
                        int indx=j%code.size();
                        sum+=code[indx];
                    }

                        v.push_back(sum);

                }
                
                reverse(v.begin(),v.end());

            
          
          return v;
           
        }
        
       else if(k==0)
        {
            for(int i=0;i<code.size();i++)
            {
                code[i]=0;
            }
           
           return code;
        }
        
        
        
        return v;
        
    }
};