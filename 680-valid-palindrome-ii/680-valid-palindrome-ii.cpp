class Solution {
public:
    
    
    
    bool validPalindrome(string s) 
    {
    
        
        
        int wrongindex1=0;
        int wrongindex2=0;
        
        int i=0;int j=s.size()-1;
    
        bool flag=true;
        
        while(i<j)
        {
           
            if(s[i]!=s[j])
            {
               
                wrongindex1=i;
                wrongindex2=j;
                flag=false;
                break;
            }
            
            i++;
            j--;
            
        }
        
        if(flag)return true;
        
        
            
            
        string s1,s2;   
     
        for(int i=0;i<s.size();i++)
        {
            if(i!=wrongindex1)
            {
                s1.push_back(s[i]);
            }
            
            if(i!=wrongindex2)
            {
                s2.push_back(s[i]);
            }
            
            
            
        }
        
        string ss1,ss2;
        ss1=s1;ss2=s2;
       reverse(ss1.begin(),ss1.end());
       reverse(ss2.begin(),ss2.end());
        
        // cout<<s1;
        
        return s1==ss1 || s2==ss2;
          
            
        }
        
//         return true;
    
};