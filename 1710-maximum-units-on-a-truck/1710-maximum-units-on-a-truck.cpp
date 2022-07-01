class Solution {
public:
    
    static bool cmp(pair<int,int> a ,pair<int,int> b)
    {
        return a.second>b.second; 
    }
    
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) 
    {
        vector<pair<int,int>> vp;
        
        for(int i=0;i<boxTypes.size();i++)
        {
            vp.push_back(make_pair(boxTypes[i][0],boxTypes[i][1]));
        }
        
        sort(vp.begin(),vp.end(),cmp);
        
        // for(auto it: vp)
        // {
        //     cout<<it.first<<" ";
        // }
          
        int i=0;
        
        int maxiunit=0;
        
        
        for(auto it:vp)
        {
            if(truckSize==0)break;
            
             if(truckSize-it.first>0)
             {
                truckSize=truckSize-it.first;
                
                maxiunit+=it.second*it.first;
            }
            
            else
            {
                maxiunit+=truckSize*it.second;
                truckSize=0;
            }
            
        }
        
      return maxiunit;
        
        
    }
};