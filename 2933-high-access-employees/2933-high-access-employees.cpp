class Solution {
public:
    
    vector<string> findHighAccessEmployees(vector<vector<string>>& v) 
    {
        
        if(v.size()<3)return {};
        vector<string> ans;
        
        sort(v.begin(),v.end());
        
        
//         f
        // or(auto it :v)
//         {
//             cout<<it[0]<<" ";
//         }
        
        int first=0,second=0, third=0;
        
        
        for(int i=0;i<v.size()-2;i++)
        {
            
            
            if(v[i][0]==v[i+1][0] and v[i+1][0]==v[i+2][0])
            {

                    first=stoi(v[i][1]);
                     // if(first>=2300)continue;

                    second=stoi(v[i+1][1]);

                    third=stoi(v[i+2][1]);

                  if(first+100 > second and first + 100 >third)
                  {
                      if(!ans.empty() and ans.back()==v[i][0])
                      {
                          continue;
                      }
                      else ans.push_back(v[i][0]);
                      
                  }
                


                // cout<<first<<" "<<second<<" "<<third<<" "<<endl;

            }
            
            
           
    
            
        }
        
        
        
        
        
        
        
        return ans;
        
        
        
    }
};