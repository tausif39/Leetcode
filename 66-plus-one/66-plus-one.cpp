class Solution {
public:
    vector<int> plusOne(vector<int>& digits) 
    {
        vector<int> v=digits;
        
       
        
        if(digits[digits.size()-1]!=9)
        {
            v[v.size()-1]+=1;
            
        }
        
       else
       {  
         int cnt=0;
        
         for(int i=digits.size()-1;i>=0;i--)
         {
             if(digits[i]==9)cnt++;
             
             
             if(digits[i]!=9)break;
                
             
             
         } 
        
        if(cnt==digits.size())
        {
            for(int i=digits.size()-1;i>=0;i--)
            {
                v[i]=0;
                
            }
            
            v.insert(v.begin(), 1);
            
        }
        
        if(cnt<digits.size())
        {
            int i=digits.size()-1;
            
            while(cnt--)
            {
                v[i]=0;
                
                i--;
                
            }
            
            
            v[i]++;
            
            
        }
           
       }
        
        
//         if(digit.size()<=4)
//         {
//             int base=1,sum=0;
//             for(int i=digits.size()-1;i>=0;i--)
//             {
//                  sum=digits[i]*base;
                 
//                  base*=2;
                
                
//             }
            
            
            
            
            
//         }
        
        return v;
        
    }
};