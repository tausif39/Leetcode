class Solution {
public:
    bool equalFrequency(string word) {
        unordered_map<char,int>mp;
        for(int i=0;i<word.size();i++)
            mp[word[i]]++;
        vector<int>freq;
        for(auto it:mp)
            freq.push_back(it.second);
        sort(freq.rbegin(),freq.rend());
        if(freq.size()==1)
            return true;
        vector<int>temp={2,2,1};
        if(temp==freq)
            return true;
        int flag=0;
        for(int i=0;i<freq.size()-1;i++)
        {
            if(freq[i]!=freq[i+1])
            {
                flag=1;
               
                freq[i]--;
                break;
            }
        }
        if(flag==0 && freq[0]>1)
            return false;
        else{
            for(int i=0;i<freq.size()-1;i++)
            {   
                if(freq[i]!=freq[i+1])
                    return false;
            }
            return true;
        }
    }
};