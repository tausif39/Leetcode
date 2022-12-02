class Solution {
public:
    
    bool closeStrings(string word1, string word2)
    {
        
        vector<int> a(26,0),a1(26,0),b(26,0),b1(26,0);
        
        for(auto it:word1)a[it-'a']++, a1[it-'a']=1;
        
        
        for(auto it:word2)b[it-'a']++ , b1[it-'a']=1;
        
 
        sort(a.begin(),a.end());
        
        sort(b.begin(),b.end());      
        
        return a==b and a1==b1; 
        
    }
};