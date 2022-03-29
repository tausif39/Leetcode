class Solution {
public:
    long long minimumTime(vector<int>& v, int trip) {
        long long s=1;
        int n=v.size();
        long long e=1e14;
        long long cnt=e;
        while(s<e)
        {
            long long mid=(s+e)/2;
            long long ans=0;
            for(int i=0;i<v.size();i++)
            {
                ans+=mid/v[i];
            }
             if(ans>=trip)
            {
                cnt=min(cnt,mid); 
                 e=mid;
            }
            else 
            {
                s=mid+1;
            }
            
            
        }
        return cnt;
    }
};