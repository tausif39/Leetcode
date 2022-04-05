class Solution {
public:
    int maxArea(vector<int>& height) 
    {
        int amount=INT_MIN;
        int i=0,j=height.size()-1;
        
        // int cnt=0;
        
        while(i<j)
        {
            
            
            int h=min(height[i],height[j]);
            
            int water =h*(j-i);
            
            amount=max(water,amount);
            
            if(height[i]>height[j])j--;
            else i++;
            
        }
        
        return amount;
        
    }
};