class Solution {
public:
    int r,c;
    int findMaxFish(vector<vector<int>>& grid) {
    r= grid.size();
    c=grid[0].size();
    int ans=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(grid[i][j]!=0){
                ans=max(ans,dfs(i,j,grid)); 
            }
        }
    }    
    return ans;
    }


    int dfs(int i,int j,vector<vector<int>> &grid){
        r= grid.size();
        c=grid[0].size();
        if(i<0 || i>=r || j<0 ||j>=c || grid[i][j]==0){
            return 0;
        }

        int fishes=grid[i][j];
        grid[i][j]=0;
        fishes+=dfs(i+1,j,grid);
        fishes+=dfs(i-1,j,grid);
        fishes+=dfs(i,j+1,grid);
        fishes+=dfs(i,j-1,grid);

    return fishes;
    }
};