class Solution {
public:
    bool checkIfPangram(string sentence) 
    {
        if(sentence.size()<26) return false;
        
        unordered_set <char> s;
        
        for(int i=0;i<sentence.size();i++)
        {
            s.insert(sentence[i]);
        }
        
        // sentence.clear();
        // for(auto x: s)
        // {
        //     sentence.push_back(x);
        // }
        
        
//         sort(sentence.begin(),sentence.end());
        
//         if(sentence.size()!=26) return false;
        
//         char c ='a';
//         for(int i=0;i<26;i++)
//         {
            
//            if(sentence[i]!=c){ return false;}
        
            
            
//             c++;
//         }
        
        
        if(s.size()==26)return true;
        
        return false;
        
    }
};