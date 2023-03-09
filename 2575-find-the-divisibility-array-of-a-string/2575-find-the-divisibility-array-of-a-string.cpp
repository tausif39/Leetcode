class Solution {
public:
    
    vector<int> divisibilityArray(string word, int m)
    { 
        vector<int>  ans;
        
        long long sum=0;

        for(int i=0;i<word.size();i++)
        {   
            
            sum*=10LL;
            
            sum+=word[i]-'0';
            
            // if(sum%m==0)
            
            sum%=m;
            
            if(!sum)ans.push_back(1);
            else ans.push_back(0);
            
//             
//             
            // sum%=m;//
            
        }
        
       return ans;
        
    }
};