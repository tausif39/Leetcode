class Solution {
public:
    
//     static bool cmp()
//     {
        
//     }
    
    
    
    string customSortString(string order, string s) 
    {
        
        string ans;
        
        for(int i=0;i<order.size();i++)
        {
            for(int j=0;j<s.size();j++)
            {
                if(order[i]==s[j])
                {
                    ans.push_back(order[i]);
                    
                }
            }
            
            
        }
        
       for(int j=0;j<s.size();j++)
       {
           for(int i=0;i<order.size();i++)
            {
               if(order[i]==s[j])
                {
                   break;
                }
               
               if(i==order.size()-1)
               {
                   if(order[i]!=s[j])
                   {
                      ans.push_back(s[j]);
                   }
               }
               
            }
           
        }
        
        
        return ans;
        
    }
};