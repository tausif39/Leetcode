class Solution {
public:
    bool totaleat(vector<int>& piles,int k,int h)
    {
       long long  sum=0;
        
        for(int i=0;i<piles.size();i++)
        {
            
            int a=piles[i]%k;
            
            if(a>0)
            {
                a=1; 
            }
            
            else
            {
                a=0;
            }
            
            int b=piles[i]/k;
            
            sum+=(a+b);
            
        }
        
        if(sum<=h)
        {
            return true; 
        }
        else
            return false; 
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int s=1; int e=0;
        sort(piles.begin(),piles.end());
        for(int i=0;i<piles.size();i++){
            e=piles[i];
        }
        int ans=0;
        while(s<=e){
            int mid=s+(e-s)/2;
            bool caneat=totaleat(piles,mid,h);
            if(caneat){
                ans=mid; 
                e=mid-1;
            }else{
                s=mid+1;
            }
        }
        return ans; 
    }
};