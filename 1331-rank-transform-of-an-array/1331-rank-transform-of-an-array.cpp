class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) 
    {
        vector<int> ans=arr;
       
        sort(ans.begin(),ans.end());
        
        unordered_map <int , int >mp;
    
        int current  =INT_MIN;
        int cnt=0;
        
        for(int i=0;i<ans.size();i++)
        {
            if(current!=ans[i])
            {
                cnt++;
                mp[ans[i]]=cnt;
                current=ans[i];
            }
        }
        
        for(int i=0;i<arr.size();i++)
        {
            int rank= mp[arr[i]];
            
            arr[i]=rank;
            
        }
        
        
        
        return arr;
        
    }
};