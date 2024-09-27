class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
    int n=intervals.size();
    vector<vector<int>> ans;
    sort(intervals.begin(),intervals.end());
    ans.push_back(intervals[0]);
    for(int i=1;i<n;i++) {
        if(ans.back()[1]>intervals[i][0]){
            int minimum=min(ans.back()[1],intervals[i][1]);
            ans.back()[1]=minimum;
        }
        else{
            ans.push_back(intervals[i]);
        } 
    }
    int output=n-ans.size();
    return output;    
    }
};