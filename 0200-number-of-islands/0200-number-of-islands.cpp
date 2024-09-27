class Solution {
public:
    int numIslands(vector<vector<char>>& grid){
    int n=grid.size();
    if(n==0){
        return 0;
    }

    int m=grid[0].size();
    vector<vector<int>> ans(n,vector<int>(m,0));
    int count=0;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(!ans[i][j] && grid[i][j]=='1'){
                count++;
                depth(i,j,grid,ans);
            }
        }
    }
    return count;
    }

    void depth(int row,int col,vector<vector<char>>& grid,vector<vector<int>>& ans) {
        if(row<0 || row>grid.size()-1){
            return;
        }

        if(col<0 || col>grid[0].size()-1){
            return;
        }

        if(grid[row][col]=='0'){
            return;
        }

        if(ans[row][col]){
            return;
        }

        ans[row][col]=1;
        depth(row-1,col,grid,ans);
        depth(row+1,col,grid,ans);
        depth(row,col-1,grid,ans);
        depth(row,col+1,grid,ans);
    }    
};