class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) 
    {
        // vector<int> idx(2);
        // idx[0]=-1;
        // idx[1]=-1;
        int i=0;
        int j=numbers.size()-1;
        while(i<j)
        {
            if((numbers[i] + numbers[j]) == target)
            {
               
                
                return {i+1,j+1};
                
            }
            
            
            else if((numbers[i] + numbers[j]) >target)
            {
                j--;
            }
            
            else if((numbers[i] + numbers[j]) < target)
            {
                i++;
            }
            
            
        }
        
        return {i,j};
        
        
    }
};