class Solution {
public:
long long minimumRemoval(vector<int>& beans) {
long long n = beans.size();
if(n==1)
{
return 0;
}
sort(beans.begin(),beans.end());
vector<long long>pre(n);
pre[0] = (long long)beans[0];
for(long long i = 1 ; i < n ; i++)
{
    pre[i]= pre[i-1] + (long long)beans[i];
}
vector<long long>suff(n);
suff[n-1] = (long long)beans[n-1];
for(int i = n-2 ; i >=0 ; i--)
{
suff[i] = suff[i+1] + (long long)beans[i];
}
long long ans = 1e18;
for(long long i = 0 ; i < beans.size() ; i++)
{
if(i>0 && i<n-1)
{
long long sum = pre[i-1] + suff[i+1] - (long long)beans[i]*(long long)(n-i-1);
ans = min(ans,sum);
}
else if(i>0)
{
long long sum = pre[i-1];
ans = min(ans, sum);
}
else
{
long long sum = suff[i+1] - (long long)beans[i]*(long long)(n-i-1);
ans = min(ans , sum);
}
}
return ans;
}
};