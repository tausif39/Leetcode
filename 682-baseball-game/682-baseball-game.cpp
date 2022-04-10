class Solution {
public:
    int calPoints(vector<string>& ops) 
    {
        vector<int> v;
        
           
            int sum =0;
            
        
           for(int i=0;i<ops.size();i++)
           {
               
               
               if(ops[i]=="C")
               {
                    // int x =stoi(ops[i-1]);
                   // sum-=x;
                   
                   // last=ops[i-2];
                   
                   v.pop_back();
               }
               
               else if(ops[i]=="D")
               {
                   // int x=stoi(ops[i-1]);
                   // sum+=2*last;
                   v.push_back(2*v.back());
               }
               
               else if(ops[i]=="+")
               {
                   // int x =stoi(ops[i-1]);
                   // int y =stoi(ops[i-2]);
                   int x=v[v.size()-1] + v[v.size()-2];
                   
                   v.push_back(x);
                   
                   // sum*=2;
               }
               
               else 
               {
                   int x =stoi(ops[i]);
                   // sum+=x;
                   v.push_back(x);
                   
               }
               
           }
        
        for(auto f : v)sum+=f;
        
        return sum;
        
    }
};