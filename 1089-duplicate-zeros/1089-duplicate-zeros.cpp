class Solution {
public:
    void duplicateZeros(vector<int>& arr)
    {
        vector<int>  v;
        
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]==0)
            {
                
                v.push_back(arr[i]);
                if(v.size()==arr.size())break; ;
                v.push_back(0);
                if(v.size()==arr.size())break; ;
                
            }
            
            
            else v.push_back(arr[i]);
            
            if(v.size()==arr.size())break; ;
    
        }
        for(int i=0;i<arr.size();i++)
        {
            arr[i]=v[i];
        }
        
    }
};