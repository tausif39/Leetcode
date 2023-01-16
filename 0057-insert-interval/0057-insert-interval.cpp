class Solution {
public:
   vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
    
    intervals.push_back(newInterval); //step 1 add newInterval into intervals and then sort
    sort(intervals.begin(),intervals.end());  //then similar to merge Intervals problem
    
    int res=0;
    for(int i=1;i<intervals.size();i++){
        if(intervals[i][0]<=intervals[res][1]){
            intervals[res][0]=min(intervals[res][0],intervals[i][0]);
            intervals[res][1]=max(intervals[res][1],intervals[i][1]);
        }
        else{
            res++;
            intervals[res]=intervals[i];
        }
    }
    
    vector<vector<int>>ans;
    
    for(int i=0;i<=res;i++){
        ans.push_back(intervals[i]);
    }
    
    return ans;
}
};