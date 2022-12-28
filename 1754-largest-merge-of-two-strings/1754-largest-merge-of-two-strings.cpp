class Solution {
public:
    string largestMerge(string word1, string word2) {
        string s;    
        while(!word1.empty() && !word2.empty())
        {
            if(word1[0]>word2[0])
            {    s+=word1[0];
                 word1.erase(0,1);            
            } 
            else if(word1[0]<word2[0])
             {  s+=word2[0];
              word2.erase(0,1);           
            }
            else
            {        
            if(word1>word2)
            {    s+=word1[0];
              word1.erase(0,1);
            }
            else if(word1<=word2)
             {  s+=word2[0];
              word2.erase(0,1);
             }          
            }  
        }       
        int l1=word1.size();
        int l2=word2.size();
        int i=0;
        int j=0;
        while(i<l1)
        {
            s+=word1[i];
            i++;
        }
       while(j<l2)
        {
            s+=word2[j];
            j++;
        }
        
    return s;
    }
};