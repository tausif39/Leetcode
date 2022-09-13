class Solution {
public:
    int longestBeautifulSubstring(string word)
    {
          int i=0;
    int j=1;
    unordered_map<char,int> mp;
    mp[word[0]]++;
    int res = 0;
    
    for( ; j<word.size(); j++){
        
        if(word[j-1] > word[j]){
            i = j;
            mp.clear();
        }
        
        mp[word[j]]++;
        
        if(mp.size()>=5){
            
            if(j-i+1 > res){
                res = j-i+1;
            }
            
            
        }
        
    }
    
    
    return res;
        
    }
};