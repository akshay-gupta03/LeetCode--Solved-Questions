class Solution {
public:
    bool isZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
    int n = nums.size();
    vector<int> trace(n + 1, 0);

    for(auto& query : queries) {
        int l = query[0];
        int r = query[1];
        trace[l] += 1;
        trace[r + 1] -= 1;
    }

    for(int i=1; i<=n; i++) {
        trace[i] += trace[i-1];
    }

    for(int i=0; i<n; i++) {
        if (trace[i] < nums[i]){
            return false;
        }
    }

    return true;    
    }
};