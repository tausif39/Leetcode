class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) 
    {
        string c;
        
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i][i]=='0')c+='1';
            else c+='0';
            
        }
        
        return c;
        
        
    }
};