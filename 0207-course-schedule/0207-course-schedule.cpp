class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {  
    vector<vector<int>> list(numCourses);
    for(int i=0;i<prerequisites.size();i++){
        list[prerequisites[i][1]].push_back(prerequisites[i][0]);
    }
    vector<int> inodr(numCourses);
    for(int i=0;i<list.size();i++){
        for(auto j:list[i]){
            inodr[j]++;
        }
    }
    vector<int> topo = topoSort(list,inodr);
    return topo.size()==numCourses;
    }

    vector<int> topoSort(vector<vector<int>> &adj,vector<int> &inodr){
    queue<int> q;
    for(int i=0;i<inodr.size();i++){
        if(inodr[i]==0){
            q.push(i);
        }
    }
    vector<int> topo;
    while(!q.empty()){
        int t=q.front();
        topo.push_back(t);
        q.pop();
        for(auto i:adj[t]){
            inodr[i]--;
            if(inodr[i]==0){
                q.push(i);
            }
        }
    }
    return topo;
    }
};