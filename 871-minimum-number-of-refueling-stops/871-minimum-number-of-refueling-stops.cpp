class Solution {
public:
    int minRefuelStops(int target, int startFuel, vector<vector<int>>& nums) 
    {
            priority_queue<int>pq;
      
            int pos=0;
        
        int cnt=0;
            
        
           int i=0;     
        
        int current= startFuel;
        
        while(current<target)
        {

                
                while(i<nums.size() and current>=nums[i][0])        
                {
                    pq.push(nums[i][1]);i++;
                    
                }
                        if(pq.empty())return -1;
              
                        
                        current+=pq.top();
                        cnt++;
                        pq.pop(); 

            }
   
        return cnt;
        
    }
};