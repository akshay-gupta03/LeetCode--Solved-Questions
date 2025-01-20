class Solution {
public:
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
    unordered_map<int,pair<int,int>> location;
    int n=mat.size();
    int m=mat[0].size();
    for(int i=0;i<n;i++ ){
        for(int j = 0;j<m;j++){
            location[mat[i][j]]={i,j};
        }
    }
    vector<int> row(n,0);
    vector<int> col(m,0);
    for(int i=0;i<arr.size();i++){
        auto position=location[arr[i]];
        row[position.first]++;
        col[position.second]++;
        if(row[position.first]==m || col[position.second]==n){
            return i;
        }
    }
    return 0;    
    }
};