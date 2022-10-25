class Solution
{
    int func(vector<string> &arr, int n, int indx, string s)
    {
        if (indx == n)
            return (s.size());
        
        
        unordered_map<char, int> mp;
        
        
        for (int i = 0; i < s.size(); i++)
            mp[s[i]]++;
        
        bool take = true;
        
        sort(arr[indx].begin(), arr[indx].end());
        
        
        for (int i = 0; i < arr[indx].size(); i++)
        {
            if (mp.find(arr[indx][i]) != mp.end())
            {
                take = false;
                break;
            }
           
            
            
            
            if (i < arr[indx].size() - 1)
            {

                if (arr[indx][i] == arr[indx][i + 1])
                {
                    take = false;
                    break;
                }
            }
        }
        int ans1 = INT_MIN;
        
        if (take)
            ans1 = func(arr, n, indx + 1, s + arr[indx]);
        
        // not take
        
        int ans2 = func(arr, n, indx + 1, s);
        
        

        // cout<<"s= "<<s<<" ans1="<<ans1<<" ans2="<<ans2<<"\n";
    
        
        return max(ans1, ans2);
        
    }

public:
    int maxLength(vector<string> &arr)
    {
        
        
        int n = arr.size();
        
        string s="";
        
        return func(arr, n, 0, s);
        
    }
};