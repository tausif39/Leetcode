class Solution {
public:

    static bool sortVec(const vector<int>& v1, const vector<int>& v2)
    {
        return v1[0] < v2[0];
    }

    vector<int> maximumBeauty(vector<vector<int>>& items, vector<int>& queries) 
    {
        vector<int> res, max_beauty, price;
        int temp = 0;

        sort(items.begin(), items.end(), sortVec);
        for(int i=0; i<items.size(); i++) price.push_back(items[i][0]);

        // Maintain a list of max_beauty seen like a specific index number
        for(int i=0; i<items.size(); i++)
        {
            temp = max(temp, items[i][1]);
            max_beauty.push_back(temp);
        }
 
        for(int i=0; i<queries.size(); i++)
        {
            int ub = upper_bound(price.begin(), price.end(), queries[i]) - price.begin();
            // Now that we know the upper bound index till a certain price, we can just use that index
            // to access the max_beauty seen until that index
            temp = (ub == 0 ? 0 : max_beauty[ub-1]);
            res.push_back(temp);
        } 
        return res;
    }
};