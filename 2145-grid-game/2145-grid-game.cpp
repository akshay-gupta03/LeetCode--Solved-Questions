class Solution {
public:
    long long gridGame(vector<vector<int>>& grid) {
    long long ans=LLONG_MAX; 
    long long up_sum=accumulate(grid[0].begin(),grid[0].end(),0LL); 
    long long down_sum=0; 
    for (int i=0;i<grid[0].size();i++) {
        up_sum-=grid[0][i]; 
        ans=min(ans,max(up_sum,down_sum));
        down_sum+=grid[1][i];
    }
    return ans;   
    }
};