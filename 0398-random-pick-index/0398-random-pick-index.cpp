class Solution {
public:
    

vector<int> arr;
 
    map<int ,vector<int>>mp;
    
    
    
    Solution(vector<int>& nums) 
    {
        // sort(nums.begin(),nums.end());
        
        arr=nums;
        
        for(int i=0;i<arr.size();i++)
        {
           mp[arr[i]].push_back(i);
        }
        
    }
    
//     void f(int target,int &len) 
//     {
        
        
//     }
    
    
    
    int pick(int target) 
    {
        // int len=1;
        
        // f(target);
        // int i=0;
        
        // for(;i<arr.size();i++)
        // {
        //      if(arr[i]==target)
        //      {
        //          if(mp[target].size==1)return i;
        //          break;
        //      }
        // }
        
        
        int random_indx=rand()%mp[target].size();
        
        return mp[target][random_indx];
        
        
        // cout<<random_indx<<" " ;
        
    
        
        
        
        
        
        // return arr[i+random_indx-1];
        
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * int param_1 = obj->pick(target);
 */