class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) 
    {
        
        map<int,vector<int>> mp;
                                                        //[i+j],{vector}
        for(int i=0;i<nums.size();i++)                    //0->{1}
        {                                                //1->{2,4}
            for(int j=0;j<nums[i].size();j++)           //2->{3,5,7}
            {                                           //3->{6,8}
                mp[i+j].push_back(nums[i][j]);          //4->{9}
            }
            
        }

        vector<int> ans;
                                                                   //Reversed
        for(auto it: mp)                                          //0->{1}
        {                                                         //1->{4,2}
            reverse(it.second.begin(),it.second.end());           //2->{7,5,3}
                                                                  //3->{8,6}
            for(auto k: it.second)                               //4->{9}
            {
                ans.push_back(k);
            }
            
        }
        
            return ans;
    

    }

};