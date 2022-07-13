class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) 
    {
        
        vector<int>max_freq(26);
        
        vector<string>ans;
        
        for(auto x:words2)
        {
            
            vector<int>freq(26,0);
            
            for(auto i:x)
            {
                freq[i-'a']++;
            }
            
            for(char i='a';i<='z';i++)
            {
                max_freq[i-'a']=max(freq[i-'a'],max_freq[i-'a']);   //storing max frequency for each character 
            }
            
        }
        
        
        for(auto x:words1){
            bool flag =true;
            vector<int>temp(26,0);
            for(auto i:x){
                temp[i-'a']++;
            }
            char i;
            for( i='a';i<='z';i++){
                if(temp[i-'a']<max_freq[i-'a']){
                    flag=false;
                    break;
                }
            }
            if(flag) ans.push_back(x);
        }
        return ans;
    }
};