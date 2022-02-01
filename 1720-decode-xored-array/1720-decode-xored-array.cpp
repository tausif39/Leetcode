class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) 
    {
        vector<int> arr;
        
        arr.push_back(first);
        
        // int babu=first ^ encoded[0];
        // arr
        // arr.push_back(babu);
        
        for(int i=0;i<encoded.size();i++)
        {
           int okay=arr[i] ^ encoded[i];
            
            arr.push_back(okay);
            
        }
        
        
        return arr;
        
    }
};