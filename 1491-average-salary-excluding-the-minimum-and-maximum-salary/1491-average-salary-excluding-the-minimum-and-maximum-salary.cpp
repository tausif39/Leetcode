class Solution {
public:
    double average(vector<int>& salary) 
    {
        sort(salary.begin() , salary.end());
        
        double sum=0;
        
        double n=salary.size();
        
        for(int i=0;i<n;i++)
        {
            if(i==0 || i==n-1)
            {
                continue;

            }
            
            sum+=double(salary[i]);
            
        }
        
        n-=2;
        
        return sum/n;
        
    }
};