class Solution {
public:
    vector<vector<int>> highestPeak(vector<vector<int>>& isWater) {
    queue<pair<int,int>>q;
    vector<vector<int>>neighbour{{0,1},{0,-1},{-1,0},{1,0}};
    int rows=isWater.size();
    int col=isWater[0].size();
    for(int i=0;i<rows;i++){
        for(int j=0;j<col;j++){
            if(isWater[i][j]==1){
                isWater[i][j]=0;
                q.push({i,j});
            }
            else{
                isWater[i][j]=INT_MAX;
            }
        }
    }  
    while(q.size()){
        auto[m,n]=q.front();
        q.pop();
        for(auto k:neighbour){
            int i=m+k[0];
            int j=n+k[1];
            if(i<0 || j<0 || j>=col|| i>=rows || isWater[i][j]!=INT_MAX){
                continue;
            }
            q.push({i,j});
            isWater[i][j]=1+isWater[m][n];
        }
    }
    return isWater;   
    }
};