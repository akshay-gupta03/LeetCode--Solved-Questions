class Solution {
public:
    vector<int> queryResults(int limit, vector<vector<int>>& queries) {
    int n=queries.size();
    vector<int> ans(n, 0);
    unordered_map<int,int> ball;
    unordered_map<int,int> color;
    int i=0;
    for (auto& q: queries){
        int x=q[0];
        int c=q[1];
        if (ball.count(x)>0){
            int j=ball[x];
            color[j]--;
            if (color[j]==0)
                color.erase(j);
        }
        ball[x]=c;
        color[c]++;
        ans[i]=color.size();
        i++;
    }
    return ans;    
    }
};