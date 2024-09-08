class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
    vector<vector<int>> ans; 
    inner(n,k,1,{},ans);
    return ans;
    }

    void inner(int n,int k,int s,vector<int>&& path, vector<vector<int>>& ans){
    if(path.size()==k){
        ans.push_back(path);
        return;
    }
    for(int i=s;i<=n;i++){
        path.push_back(i);
        inner(n,k,i+1,move(path),ans);
        path.pop_back();
    }    
    }
};