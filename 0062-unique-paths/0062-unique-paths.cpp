class Solution {
public:
    int uniquePaths(int m, int n) {
    vector<int> path(m,1);

    for(int i=1;i<n;i++){
        for(int j=1;j<m;j++){
            path[j]=path[j]+path[j-1];
        }
    } 
    return path[m-1];   
    }
};