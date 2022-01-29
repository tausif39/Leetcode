class Solution {
public:
    vector<int> plusOne(vector<int>& digits) 
    {
        
        
       
        
        if(digits[digits.size()-1]!=9)
        {
            digits[digits.size()-1]+=1;
            
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
                digits[i]=0;
                
            }
            
            digits.insert(digits.begin(), 1);
            
        }
        
       else if(cnt<digits.size())
        {
            int i=digits.size()-1;
            
            while(cnt--)
            {
                digits[i]=0;
                
                i--;
                
            }
            
            
            digits[i]++;
            
            
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
        
        
        return digits;
    }
};