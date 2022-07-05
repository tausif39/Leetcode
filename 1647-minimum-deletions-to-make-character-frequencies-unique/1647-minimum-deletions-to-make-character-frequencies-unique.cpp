class Solution {
public:
    int minDeletions(string s) 
    {
        priority_queue<int>pq;
        unordered_map<char,int>umap;
        int i,n=s.size(),min_del=0,top_freq,second_top;
        for(i=0;i<n;i++)
        {
            umap[s[i]]++;
        }
        for(auto x:umap)
        {
            pq.push(x.second);
        }
        while(pq.size()>1)
        {
            top_freq=pq.top();
            pq.pop();
            second_top=pq.top();
            if(top_freq==second_top)
            {
                min_del++;
                if(top_freq-1>0)
                {
                    pq.push(top_freq-1);
                }
            }
        }
        return min_del;
    }
};