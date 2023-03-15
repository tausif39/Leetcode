class Solution {
public:
    
    
    vector<int> pre;
    
    
    Solution(vector<int>& w) 
    {
        int n=w.size();
        
        pre.resize(n);
        pre[0]=w[0];
        
        for(int i=1;i<w.size();i++)
        {
            pre[i]=pre[i-1]+w[i];
        }
        
        
        
    }
    
    int pickIndex() 
    {
        int random_indx= rand()%pre.back();
        
        // there is no w.back() in random
        
        return upper_bound(pre.begin() , pre.end() ,random_indx) - pre.begin();
        
        
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(w);
 * int param_1 = obj->pickIndex();
 */