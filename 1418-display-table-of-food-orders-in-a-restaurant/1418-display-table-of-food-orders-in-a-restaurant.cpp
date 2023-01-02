class Solution {
public:
    vector<vector<string>> displayTable(vector<vector<string>>& orders) {
        vector<vector<string>>ans;
   set<string>s;
   map<int,map<string,int>>m;
    
   for(int i=0;i<orders.size();i++)
   {
       s.insert(orders[i][2]);
    m[stoi(orders[i][1])][orders[i][2]]++;
   } 
   vector<string>b;
   b.push_back("Table");
   for(auto i:s)
   {
       b.push_back(i);
   }
   ans.push_back(b);
   for(auto i:m)
   {
       vector<string>a;
       a.push_back(to_string(i.first));
       for(int j=1;j<b.size();j++)
       {
           if(m[(i.first)].count(b[j])>0)
           {
               a.push_back(to_string(m[i.first][b[j]]));
           }
           else
           {
               a.push_back("0");
           }
       }
       ans.push_back(a);

   }
   return ans;
    }
};