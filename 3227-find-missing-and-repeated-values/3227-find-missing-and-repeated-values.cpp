class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int> ans;
        unordered_set<int> unique;
        int duplicate= 0;
        int n= grid.size();
        long long count= 0;
        long long sum= (n*n * (n*n+1)) / 2;
        
        for (int i=0; i<n; i++) {
            for (int j=0; j<n; j++) {
                int val= grid[i][j];
                if(unique.count(val)) {
                    duplicate=val;
                }
                unique.insert(val);
                count += val;
            }
        }
        ans.push_back(duplicate);
        ans.push_back(sum-(count-duplicate));
        return ans;
    }
};