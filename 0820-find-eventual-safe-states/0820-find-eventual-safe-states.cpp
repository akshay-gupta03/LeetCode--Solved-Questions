class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
    int n=graph.size();
    vector<int> outgoing(n,0);
    vector<int> adjaacency[n];
    queue<int> q;
    vector<int> ans;

    for(int i=0;i<n;i++){
        for(auto &x:graph[i]){
            adjaacency[x].push_back(i);
            outgoing[i]++;
        }
    }
    
    for(int i=0;i<n;i++){
        if(outgoing[i]==0){
            q.push(i);
        }
    }
    
    while(q.empty()!=true){
        int node=q.front();
        ans.push_back(node);
        q.pop();
        for(auto i:adjaacency[node]){
            outgoing[i]--;
            if(outgoing[i]==0){
                q.push(i);
            }
        }
    }
    sort(ans.begin(),ans.end());
    return ans;    
    }
};