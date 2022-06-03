class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) 
    {
        int hash[26] = {0}, ans = 0;
        priority_queue<int> q;
        
        for(char task: tasks) ++hash[task-'A'];
        
        for(int i=0; i<26; i++)
            if(hash[i] != 0) q.push(hash[i]);
        
        while(!q.empty())
        {
            vector<int> temp;
            
            for(int i=0; i<=n; i++)
                if(!q.empty()) temp.push_back(q.top()), q.pop();
            
            for(int task: temp)
                if(task-1 > 0) q.push(task-1);    // task-1 because 1 unit of task has been done in above iteration
            
            ans += ( q.size() == 0 ) ? temp.size() : n+1;
        }
        
        return ans;
    }
};