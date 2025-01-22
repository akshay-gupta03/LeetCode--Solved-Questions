class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
    queue<pair<int,int>>q;
    vector<vector<int>>dir{{0,1},{0,-1},{-1,0},{1,0}};
    int rows=mat.size();
    int col=mat[0].size();
    for(int i=0;i<rows;i++){
        for(int j=0;j<col;j++){
           if(mat[i][j]==0) {
               q.push({i,j});
            }
            else{
                mat[i][j]=INT_MAX;
            }
        }
    }
    while(q.size()){
        auto[m,n]=q.front();
        q.pop();
        for(auto k:dir){
            int i=m+k[0];
            int j=n+k[1];
            if(i<0 || j<0 || j>=col|| i>=rows || mat[i][j]!=INT_MAX){
                continue;
            }
            q.push({i,j});
            mat[i][j]=1+mat[m][n];
        }
    }
    return mat;
    }
};