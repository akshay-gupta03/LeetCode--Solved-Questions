class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
    int n=matrix.size();
    multiset<int>ans;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            ans.insert(matrix[i][j]);
        }
    }
    for(int i=1;i<k;i++) {
        ans.erase(ans.begin());
    }
    return *ans.begin();  
    }
};